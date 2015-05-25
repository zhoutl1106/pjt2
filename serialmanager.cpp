#include "serialmanager.h"
#include <QMessageBox>
#include <QDebug>
#include "dialog.h"

extern DialogAutoCloseMessageBox *msgLowPressure;
extern Dialog* g_dialog;
extern bool vibratorStatus;
extern void g_setVibrator();

SerialManager::SerialManager(QObject *parent) :
    QObject(parent)
{
#ifdef linux
    myCom232 = new Posix_QextSerialPort("/dev/ttyO1",QextSerialBase::Polling);
    myCom232 ->open(QIODevice::ReadWrite);
    myCom232->setBaudRate(BAUD9600);
    myCom232->setDataBits(DATA_8);
    myCom232->setParity(PAR_NONE);
    myCom232->setStopBits(STOP_1);
    myCom232->setFlowControl(FLOW_OFF);

    myCom485_1 = new Posix_QextSerialPort("/dev/ttyO2",QextSerialBase::Polling);
    myCom485_1 ->open(QIODevice::ReadWrite);
    myCom485_1->setBaudRate(BAUD115200);
    myCom485_1->setDataBits(DATA_8);
    myCom485_1->setParity(PAR_NONE);
    myCom485_1->setStopBits(STOP_1);
    myCom485_1->setFlowControl(FLOW_OFF);

    myCom485_2 = new Posix_QextSerialPort("/dev/ttyO4",QextSerialBase::Polling);
    myCom485_2 ->open(QIODevice::ReadWrite);
    myCom485_2->setBaudRate(BAUD115200);
    myCom485_2->setDataBits(DATA_8);
    myCom485_2->setParity(PAR_NONE);
    myCom485_2->setStopBits(STOP_1);
    myCom485_2->setFlowControl(FLOW_OFF);
#endif
    comTimer = new QTimer(this);
    comTimer->setInterval(100);
    connect(comTimer,SIGNAL(timeout()),this,SLOT(comTimeOut()));
    comTimer->start();

    lowPresureMsg = new QMessageBox;
    lowPresureMsg->setWindowTitle("警告");
    lowPresureMsg->setText("气压低，请检查气源");
    lowPresureMsg->addButton("退出", QMessageBox::ActionRole);

    isAshAccept = false;
}

quint8 SerialManager::checkSum(char *data, int len)
{
    int sum = 0;
    for(int i = 0;i<len;i++)
        sum += (int)data[i];
    return quint8(sum&0xff);
}

void SerialManager::writeCmd(int type, QByteArray cmd)
{
    cmd.insert(0,0xaa);
    qDebug()<<type<<cmd.toHex();
    buf485_1.clear();
#ifdef linux
    switch(type)
    {
    case 0:
        cmd.append(checkSum(cmd.data(),4));
        cmd.append(0x0d);
        myCom232->write(cmd);
        break;
    case 1:
        myCom485_1->write(cmd);
        break;
    case 2:
        myCom485_2->write(cmd);
        break;
    }
    usleep(50000);
#endif
}

void SerialManager::comTimeOut()
{
#ifdef linux
    QByteArray temp0 = myCom232->readAll();
    QByteArray temp1 = myCom485_1->readAll();
    QByteArray temp2 = myCom485_2->readAll();

    while(temp0.size() > 0)
    {
        qDebug()<<temp0.toHex();
        char* p = temp0.data();
        //quint8 cmd = p[2];
        //quint16 cmd_data = p[3]+p[4]*256;
        if(p[1] == 0x01 && p[2] == 0x00)
        {
            lowPresureMsg->show();
            system("aplay /dat/2.wav &");
            Widget *p = (Widget*)(this->parent());
            //if(p->motorFlag)
            //p->on_toolButton_2_clicked();
        }
        if(p[1] == 0x02 && p[2] == 0x00)
        {
            emit finishBkg(0);
        }
        if(p[1] == 0x03 && p[2] == 0x00)
        {
            emit finishBkg(1);
        }
        if(p[1] == 0x04)
        {
            qDebug()<<"front"<<*((short*)(p+2));
            getMotor(0,*((short*)(p+2)));
        }
        if(p[1] == 0x05)
        {
            qDebug()<<"back"<<*((short*)(p+2));
            getMotor(1,*((short*)(p+2)));
        }
        if(p[1] == 0x06 && p[2] == 0x00 && isAshAccept)
        {
            emit cleanAshRequire();
        }
        //udp upload current data package

        temp0.remove(0,6);
    }
    if(temp1.size() > 0)
    {
        buf485_1.append(temp1);
        if(buf485_1.length() >= 4100)
        {
            if(*(buf485_1.data()) == char(0xfa)
                    && *(buf485_1.data()+1) == char(0xfa))
            {
                emit updateCCD(buf485_1);
                //udp upload current data package
                qDebug()<<"ccd 4096";
            }
            buf485_1.clear();
        }
    }
    if(temp2.size() > 7)
    {
        qDebug()<<temp2.toHex();
        char* p = temp2.data();
        int value = 0;
        if(p[0] == 0xa5)
        {
            switch(p[1])
            {
            case 0x05:
                value += p[7];
                value += (p[6])<<8;
                value += (p[5])<<16;
                value += (p[4])<<24;
                emit cntUpload(p[2],p[3],value);
                //udp upload current data package
                break;
            case 0x06:
                QMessageBox::information(NULL, "通知",
                                         "通道 " + QString::number(p[2])
                        +" 孔位 " + QString::number(p[3]) + "\n工作次数设置\n命令执行完毕");
                //udp upload current data package
                break;
            }
        }
    }
#endif
}
