#include "filemanager.h"
#include <QFile>
#include <QDebug>
#include <QDate>
#include <QMessageBox>
#include "encryption.h"
#include "dialog.h"

extern Dialog* g_dialog;

FileManager::FileManager(QObject *parent) :
    QObject(parent)
{
    timer = new QTimer;
    timer->setInterval(3600000);
    connect(timer,SIGNAL(timeout()),this,SLOT(checkDate()));
    timer->start();
}

void FileManager::configChange()
{
    qDebug()<<"emit config changed";
    emit configChanged();
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
        emit configChanged();
    }
    else
    {
        qDebug()<<"no such config";
        return;
        memset(&config,0,sizeof(config_t));
    }

    qDebug()<<"read config, Smode:" << mode << mem;
    g_dialog->setModeAndMem(mode, mem);
}

void FileManager::getConfig()
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
    int delay = 50000;
    QByteArray cmd;

    //send motor
    char buf6[3] = {0x00};
//    buf6[0]=0x1b;
//    buf6[1]=config.angle_front & 0xff;
//    buf6[2]=(config.angle_front>>8) & 0xff;
//    cmd = QByteArray(buf6,3);
//    emit sendCmd(0,cmd);
//    usleep(delay);

//    buf6[0]=0x1c;
//    buf6[1]=config.angle_back & 0xff;
//    buf6[2]=(config.angle_back>>8) & 0xff;
//    cmd = QByteArray(buf6,3);
//    emit sendCmd(0,cmd);
//    usleep(delay);
//    emit bkgShow();

//    qDebug()<<"end wait background";
/*
    //clean ash
    char buf7[3] = {0x00};
    buf7[0]=0x09;
    cmd = QByteArray(buf7,3);
    emit sendCmd(0,cmd);
    usleep(delay);

    //send 1
    char buf1[6]={0};
    buf1[0] = 0x02;
    for(int i = 0;i<14;i++)
    {
        buf1[1] = i+1;
        buf1[2] = config.accuracy[i][0];
        buf1[3] = config.accuracy[i][1];
        buf1[4] = config.accuracy[i][2];
        cmd = QByteArray(buf1,6);
        emit sendCmd(1,cmd);
        usleep(delay);
    }

    //send 2
    char buf2[6]={0x03,0xaa};
    buf2[2]=config.mode+1;
    buf2[3]=config.mode_detail;
    cmd = QByteArray(buf2,6);
    emit sendCmd(1,cmd);

    //send 3
    char buf3[6]={0x08,0x00};
    for(int i = 0;i<14;i++)
    {
        buf3[1] = i + 1;
        *((short*)(buf3+2)) = config.threshold[i];
        cmd = QByteArray(buf3,6);
        emit sendCmd(1,cmd);
        usleep(delay);
    }

    //send 4
    char buf4[6]={0x09};
    for(int i = 0;i<14;i++)
    {
        buf4[1] = i + 1;
        *((short*)(buf4+2)) = config.delay[i];
        *((short*)(buf4+4)) = config.pulse_width[i];
        cmd = QByteArray(buf4,6);
        emit sendCmd(1,cmd);
        usleep(delay);
    }

    //send 5
    char buf5[6]={0x0b};
    for(int i = 0;i<14;i++)
    {
        buf5[1] = i + 1;
        *((short*)(buf5+2)) = config.start[i];
        *((short*)(buf5+4)) = config.end[i];
        cmd = QByteArray(buf5,6);
        emit sendCmd(1,cmd);
        usleep(delay);
    }

    //send 6
    for(int i = 0;i<7;i++)
    {
        buf6[0]=0x82+i;
        buf6[1]=config.vibration[i];
        cmd = QByteArray(buf6,3);
        emit sendCmd(0,cmd);
        usleep(delay);
    }

    setLights();

    //clean ash
    sleep(20);
    char buf8[3] = {0x00};
    buf8[0]=0x0a;
    cmd = QByteArray(buf8,3);
    emit sendCmd(0,cmd);

    qDebug()<<"finish send commands";*/
}

void FileManager::setLights()
{/*
    QByteArray cmd;
    int delay = 50000;
    //lights
    char temp4[3]={0x02,0x00,0x00};
    char temp5[3]={0x04,0x00,0x00};
    char temp6[3]={0x06,0x00,0x00};
    char temp7[3]={0x08,0x00,0x00};
    switch(config.mode)
    {
    case 0:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp6[0] = 0x05;
        cmd = QByteArray(temp6,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp7[0] = 0x07;
        cmd = QByteArray(temp7,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        break;
    case 1:
        temp4[0] = 0x02;
        cmd = QByteArray(temp4,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp6[0] = 0x05;
        cmd = QByteArray(temp6,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp7[0] = 0x08;
        cmd = QByteArray(temp7,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        break;
    case 2:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp6[0] = 0x05;
        cmd = QByteArray(temp6,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp7[0] = 0x07;
        cmd = QByteArray(temp7,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        break;
    case 3:
        temp4[0] = 0x02;
        cmd = QByteArray(temp4,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp6[0] = 0x06;
        cmd = QByteArray(temp6,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp7[0] = 0x08;
        cmd = QByteArray(temp7,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        break;
    case 4:
        temp4[0] = 0x01;
        cmd = QByteArray(temp4,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp5[0] = 0x03;
        cmd = QByteArray(temp5,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp6[0] = 0x05;
        cmd = QByteArray(temp6,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        temp7[0] = 0x07;
        cmd = QByteArray(temp7,3);
        emit sendCmd(0,cmd);
        usleep(delay);
        break;
    }*/
}
