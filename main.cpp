#include "dialog.h"
#include <QApplication>
#include <QFile>
#include <QTextCodec>
#include <QFont>
#include <QTextStream>
#include <QDebug>
#include <QTime>
#include "dialogautoclosemessagebox.h"

Dialog *g_dialog;
QString stylesheet;
DialogAutoCloseMessageBox *bkgMsgBoxF;
DialogAutoCloseMessageBox *bkgMsgBoxE;
DialogAutoCloseMessageBox *msgLowPressure;

bool isBeep;

void beep(int length_us, int index = 0)
{
    qDebug()<<"beep"<<index;

#ifdef linux
    //system("echo 1 > /sys/class/gpio/gpio117/value");
    usleep(length_us);
    system("echo 0 > /sys/class/gpio/gpio117/value");
#endif
}

bool valveStatus = false;
bool vibratorStatus = false;

void Sleep(int ms)
{
    QTime time = QTime::currentTime().addMSecs(ms);
    while(QTime::currentTime() < time)
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}

void g_setValve()
{
    valveStatus = !valveStatus;
    g_dialog->form2_main->setValve(valveStatus);
    g_dialog->form3_vibrationAdjust->setValve(valveStatus);
    char tmp[3] = {0x02,0x00};
    QByteArray tmp1(tmp,3);
    if(valveStatus)
    {
        tmp1.data()[0] = 0x0b;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x11;
        g_dialog->serialManager->writeCmd(0,tmp1);
    }
    else
    {
        tmp1.data()[0] = 0x0c;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp1.data()[0] = 0x12;
        g_dialog->serialManager->writeCmd(0,tmp1);
    }
}

void g_setVibrator()
{
    vibratorStatus = !vibratorStatus;
    g_dialog->form2_main->setVibrator(vibratorStatus);
    g_dialog->form3_vibrationAdjust->setVibrator(vibratorStatus);
    char tmp[3] = {0x02,0x00};
    QByteArray tmp1(tmp,3);
    char tmp3[6] = {0x06,0xaa};
    QByteArray tmp2(tmp3,6);
    if(vibratorStatus)
    {
        tmp1.data()[0] = 0x0d;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp2.data()[0] = 0x06;
        g_dialog->serialManager->writeCmd(1,tmp2);
        g_dialog->form9_ash->timeAshTimer->start();
    }
    else
    {
        tmp1.data()[0] = 0x0e;
        g_dialog->serialManager->writeCmd(0,tmp1);
        DialogAutoCloseMessageBox box(NULL,"警告","供料关闭中……","","",10,false);
        box.exec();
        tmp2.data()[0] = 0x07;
        g_dialog->serialManager->writeCmd(1,tmp2);
        g_dialog->form9_ash->timeAshTimer->stop();
    }
}

int main(int argc, char *argv[])
{
    system("echo 0 > /sys/bus/i2c/devices/0-0038/buzopen");
    system("echo 0 > /sys/bus/i2c/devices/1-0038/buzopen");
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
    QFont font("WenQuanYi Micro Hei");
    a.setFont(font);
    QFile file(":/qss.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    stylesheet = filetext.readAll();
    file.close();
    bkgMsgBoxF = new DialogAutoCloseMessageBox(NULL,"背景板","...","","",30,true);
    bkgMsgBoxE = new DialogAutoCloseMessageBox(NULL,"背景板","...","","",30,true);
    msgLowPressure = new DialogAutoCloseMessageBox(NULL,"警报","气压过低\n请检查气源及气路","重试","确定",30,true);
    isBeep = true;
    Dialog w;
    g_dialog = &w;
    w.setStyleSheet(stylesheet);
    w.showFullScreen();

    return a.exec();
}
