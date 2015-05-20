#include "dialog.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTime>
#include "dialogautoclosemessagebox.h"

Dialog *g_dialog;
QString stylesheet;
DialogAutoCloseMessageBox *bkgMsgBox;

bool isBeep;

void beep(int length_us)
{
    qDebug()<<"beep";
    /*
    system("echo 1 > /sys/class/gpio/gpio117/value");
    usleep(length_us);
    system("echo 0 > /sys/class/gpio/gpio117/value");*/
}

bool valveStatus = false;
bool vibratorStatus = false;

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
    if(valveStatus)
    {
        tmp1.data()[0] = 0x0d;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp2.data()[0] = 0x06;
        g_dialog->serialManager->writeCmd(1,tmp2);
    }
    else
    {
        tmp1.data()[0] = 0x0e;
        g_dialog->serialManager->writeCmd(0,tmp1);
        tmp2.data()[0] = 0x07;
        g_dialog->serialManager->writeCmd(1,tmp2);
    }
}

void Sleep(int ms)
{
    QTime time = QTime::currentTime().addMSecs(ms);
    while(QTime::currentTime() < time)
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/qss.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    stylesheet = filetext.readAll();
    file.close();
    bkgMsgBox = new DialogAutoCloseMessageBox(NULL,"背景板","...","","",30,true);
    Dialog w;
    g_dialog = &w;
    w.setStyleSheet(stylesheet);
    w.show();

    return a.exec();
}
