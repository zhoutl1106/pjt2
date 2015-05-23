#include "filemanager.h"
#include <QFile>
#include <QDebug>
#include <QDate>
#include <QMessageBox>
#include "encryption.h"
#include "dialog.h"
#include <QCoreApplication>
#include <QEvent>

extern Dialog* g_dialog;
extern void Sleep(int);
extern DialogAutoCloseMessageBox *bkgMsgBoxF;
extern DialogAutoCloseMessageBox *bkgMsgBoxE;

FileManager::FileManager(QObject *parent) :
    QObject(parent)
{
    timer = new QTimer;
    timer->setInterval(3600000);
    connect(timer,SIGNAL(timeout()),this,SLOT(checkDate()));
    timer->start();
    dlg = new DialogAutoCloseMessageBox(NULL,"读取","...","","",0,false);
}

void FileManager::configChange()
{
    qDebug()<<"emit config changed";
    emit sigConfigChanged();
}

bool FileManager::passwardReceived(QString ori, QString code)
{
    QFile date_file(DATE_FILENAME);
    qDebug()<<ori<<code;
    int op;
    QDate finalDate = Encryption::checkPasscode(code,ori,op);
    if(finalDate == QDate(0,0,0))
    {
        QMessageBox::critical(NULL,"警告","注册码长度错误(0)，请联系生产厂家！");
        return false;
    }
    else if(finalDate == QDate(1,1,1))
    {
        QMessageBox::critical(NULL,"警告","注册码错误(1)，请联系生产厂家！");
        return false;
    }
    else if(finalDate == QDate(2,2,2))
    {
        QMessageBox::critical(NULL,"警告","注册码错误(2)，请联系生产厂家！");
        return false;
    }
    else if(finalDate == QDate(3,3,3))
    {
        QMessageBox::critical(NULL,"警告","软件授权已到期(3)，请输入注册码！");
        return false;
    }
    else if(finalDate == QDate(2099,9,9))
    {
        QMessageBox::critical(NULL,"谢谢","软件授权成功，感谢注册！");
        QFile liceseFile(UNLOCK_FILENAME);
        QTextStream out(&liceseFile);
        liceseFile.open(QFile::WriteOnly);
        out<<QDate::currentDate().toString("yyyyMMdd")<<"\n";
        out<<ori<<"\n";
        out<<code<<"\n";
        out<<QString::number(op);
        liceseFile.close();
    }
    else
    {
        QMessageBox::critical(NULL,"谢谢","软件授权激活成功，激活日期至\n" + finalDate.toString("yyyy-MM-dd"));
        date_file.open(QFile::WriteOnly | QFile::Text);
        QTextStream out(&date_file);
        out<<QDate::currentDate().toString("yyyyMMdd")<<"\n";
        out<<ori<<"\n";
        out<<code<<"\n";
        date_file.close();
        return true;
    }
}

bool FileManager::checkDate()
{
    QFile license_file(UNLOCK_FILENAME);
    if(license_file.exists())
    {
        timer->stop();
        return true;
    }

    QFile date_file(DATE_FILENAME);
    if(date_file.exists())
    {
        date_file.open(QFile::ReadOnly | QFile::Text);
        QString str = date_file.readLine();
        int startYear = str.mid(0,4).toInt();
        int startMonth = str.mid(4,2).toInt();
        int startDay = str.mid(6,2).toInt();
        str = date_file.readLine().simplified();
        QString code = date_file.readLine().simplified();
        date_file.close();
        int op;

        QDate finalDate = Encryption::checkPasscode(code,str,op);
        QDate startDate(startYear,startMonth,startDay);


        if(finalDate == QDate(0,0,0))
        {
            QMessageBox::critical(NULL,"警告","注册码长度错误(0)，请联系生产厂家！");
            return false;
        }
        else if(finalDate == QDate(1,1,1))
        {
            QMessageBox::critical(NULL,"警告","注册码错误(1)，请联系生产厂家！");
            return false;
        }
        else if(finalDate == QDate(2,2,2))
        {
            QMessageBox::critical(NULL,"警告","注册码错误(2)，请联系生产厂家！");
            return false;
        }
        else if(QDate::currentDate() < startDate)
        {
            QMessageBox::critical(NULL,"警告","软件授权日期异常(4)，请联系生产厂家！");
            return false;
        }
        else if(finalDate == QDate(3,3,3))
        {
            QMessageBox::critical(NULL,"警告","软件授权已到期(3)，请输入注册码！");
            return false;
        }
        else
        {
            date_file.open(QFile::WriteOnly | QFile::Text);
            QTextStream out(&date_file);
            out<<QDate::currentDate().toString("yyyyMMdd")<<"\n";
            out<<str<<"\n";
            out<<code<<"\n";
            date_file.close();
            return true;
        }
    }
    else
    {
        QMessageBox::critical(NULL,"警告","软件授权不存在，请联系生产厂家！");
        return false;
    }
}

void FileManager::writeLastConfig()
{
    writeConfig(m_lastMode,m_lastIndex);
}


void FileManager::writeConfig(int mode1, int index)
{
    int i = mode1;
    QFile lastIndexFile(LAST_INDEX_FILENAME);
    lastIndexFile.open(QFile::WriteOnly);
    lastIndexFile.write((char*)&i,4);
    i = index;
    lastIndexFile.write((char*)&i,4);
    lastIndexFile.close();
    mode = mode1;
    mem = index;
    m_lastMode = mode;
    m_lastIndex = index;
    qDebug()<<"write last config "<<mode<<index;
    QFile configFile(CONFIG_FILENAME_HEAD+QString::number(mode) + QString::number(index));
    configFile.open(QFile::WriteOnly);
    configFile.write((char*)&config,sizeof(config_t));
    configFile.close();
    g_dialog->setModeAndMem(mode, mem);
}

void FileManager::readConfig(int mode1, int index)
{
    int i = mode1;
    mode = mode1;
    mem = index;
    QFile lastIndexFile(LAST_INDEX_FILENAME);
    lastIndexFile.open(QFile::WriteOnly);
    lastIndexFile.write((char*)&i,4);
    i = index;
    lastIndexFile.write((char*)&i,4);
    lastIndexFile.close();
    qDebug()<<"write last config "<<mode<<index;
    QFile configFile(CONFIG_FILENAME_HEAD+QString::number(mode) + QString::number(index));
    if(configFile.exists())
    {
        configFile.open(QFile::ReadOnly);
        configFile.read((char*)&config,sizeof(config_t));
        configFile.close();
        dlg->show();
        dlg->setText("正在设置灯光");
        setLights();
        Sleep(2000);
        sendCmds();
        emit sigConfigChanged();
    }
    else
    {
        qDebug()<<"no such config";
        return;
        memset(&config,0,sizeof(config_t));
    }

    qDebug()<<"read config, mode:" << mode << mem;
    g_dialog->setModeAndMem(mode, mem);
}

void FileManager::getLastConfigIndex()
{
    QFile lastIndexFile(LAST_INDEX_FILENAME);

    if(lastIndexFile.exists())
    {
        lastIndexFile.open(QFile::ReadOnly);
        lastIndexFile.read((char*)&m_lastMode,4);
        lastIndexFile.read((char*)&m_lastIndex,4);
        lastIndexFile.close();
        qDebug()<<"last config is "<<m_lastMode<<m_lastIndex;
    }
    else
    {
        qDebug()<<"no last,set to -1";
        m_lastMode = -1;
    }
}

void FileManager::sendCmds()
{
    char buf232[3] = {0x00};
    char buf485[6] = {0x00};
    QByteArray cmd232 = QByteArray(buf232,3);
    QByteArray cmd485 = QByteArray(buf485,6);
    char* p232 = cmd232.data();
    char* p485 = cmd485.data();

    //front bkg borad
    dlg->close();
    bkgMsgBoxF->setText("前背景板调整中");
    bkgMsgBoxF->setDelay(30);
    memset(p232,0,3);
    cmd232.data()[0] = 0x1b;
    *((short*)(cmd232.data() + 1)) = (short)(config.frontMotorVoltage);
    g_dialog->serialManager->writeCmd(0,cmd232);
    if(bkgMsgBoxF->exec() == QDialog::Rejected)
    {
        DialogAutoCloseMessageBox box(NULL,"警告","前背景板通信失败，请关机检查","确定","",10,true);
        box.exec();
        char tmp[3] = {0x02,0x00};
        QByteArray tmp1(tmp,3);
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x04;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x06;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x08;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x0a;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x0c;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x0e;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x12;
        g_dialog->serialManager->writeCmd(0,tmp1);
        emit switchToPage(7);
        return;
    }
    bkgMsgBoxE->setText("后背景板调整中");
    bkgMsgBoxE->setDelay(30);
    memset(p232,0,3);
    cmd232.data()[0] = 0x1c;
    *((short*)(cmd232.data() + 1)) = (short)(config.endMotorVoltage);
    g_dialog->serialManager->writeCmd(0,cmd232);
    if(bkgMsgBoxE->exec() == QDialog::Rejected)
    {
        DialogAutoCloseMessageBox box(NULL,"警告","后背景板通信失败，请关机检查","确定","",10,true);
        box.exec();
        char tmp[3] = {0x02,0x00};
        QByteArray tmp1(tmp,3);
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x04;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x06;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x08;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x0a;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x0c;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x0e;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x12;
        g_dialog->serialManager->writeCmd(0,tmp1);
        emit switchToPage(7);
        return;
    }

    //send accuracy
    dlg->setText("正在设定精度");
    dlg->show();
    p485[0] = 0x02;
    for(int i = 0;i<14;i++)
    {
        memset(p485,0,6);
        p485[1] = i+1;
        p485[2] = config.accuracy[i][0];
        p485[3] = config.accuracy[i][1];
        p485[4] = config.accuracy[i][2];
        g_dialog->serialManager->writeCmd(1,cmd485);
    }
    Sleep(2000);

    //luminate threshold
    dlg->setText("正在设定亮度阈值");
    memset(p485,0,6);
    p485[0] = 0x08;
    p485[1] = 0xf0;
    *((short*)(p485+2)) = short(config.frontLuminanceThreshold);
    g_dialog->serialManager->writeCmd(1,cmd485);
    memset(p485,0,6);
    p485[0] = 0x08;
    p485[1] = 0xff;
    *((short*)(p485+2)) = short(config.endLuminanceThreshold);
    g_dialog->serialManager->writeCmd(1,cmd485);
    Sleep(2000);

    //valve delay and pulse width
    dlg->setText("正在设定通道延时和开阀时间");
    p485[0] = 0x09;
    for(int i = 0;i<14;i++)
    {
        memset(p485,0,6);
        p485[1] = i+1;
        *((short*)(p485+2)) = short(config.delay[i]);
        *((short*)(p485+4)) = short(config.pulse_width[i]);
        g_dialog->serialManager->writeCmd(1,cmd485);
    }
    Sleep(2000);

    // motor status
    dlg->setText("正在设定振动器开关状态");
    memset(p232,0,3);
    p232[0] = 0x80;
    p232[1] = config.vibratorStatusU8;
    g_dialog->serialManager->writeCmd(0,cmd232);
    Sleep(2000);

    // vibration
    dlg->setText("正在设定流量");
    for(int i = 0;i<7;i++)
    {
        memset(p232,0,3);
        p232[0] = 0x82 + i;
        p485[1] = config.vibration[i];
        g_dialog->serialManager->writeCmd(0,cmd232);
    }
    Sleep(2000);

    dlg->setText("参数读取完毕");
    Sleep(2000);
    dlg->accept();
    qDebug()<<"finish send commands";
}

void FileManager::setLights()
{
    QByteArray cmd;
    //lights
    char temp4[3]={0x02,0x00,0x00};
    char temp5[3]={0x04,0x00,0x00};
    char temp6[3]={0x06,0x00,0x00};
    switch(mode)
    {
    case 1:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp6[0] = 0x05;
        cmd = QByteArray(temp6,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        break;
    case 2:
        temp4[0] = 0x02;
        cmd = QByteArray(temp4,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp6[0] = 0x06;
        cmd = QByteArray(temp6,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        break;
    case 3:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp6[0] = 0x06;
        cmd = QByteArray(temp6,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        break;
    case 4:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp6[0] = 0x06;
        cmd = QByteArray(temp6,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        break;
    case 5:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        temp6[0] = 0x05;
        cmd = QByteArray(temp6,3);
        g_dialog->serialManager->writeCmd(0,cmd);
        break;
    }
}
