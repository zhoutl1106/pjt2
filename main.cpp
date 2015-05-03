#include "dialog.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDebug>

Dialog *g_dialog;
QString stylesheet;

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
}

void g_setVibrator()
{
    vibratorStatus = !vibratorStatus;
    g_dialog->form2_main->setVibrator(vibratorStatus);
    g_dialog->form3_vibrationAdjust->setVibrator(vibratorStatus);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/qss.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    stylesheet = filetext.readAll();
    file.close();
    Dialog w;
    g_dialog = &w;
    w.setStyleSheet(stylesheet);
    w.show();

    return a.exec();
}
