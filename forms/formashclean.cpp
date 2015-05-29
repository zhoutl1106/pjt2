#include "formashclean.h"
#include "ui_formashclean.h"
#include <QElapsedTimer>
#include <QDebug>
#include "../dialog.h"

extern Dialog* g_dialog;
void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;
extern bool vibratorStatus;

FormAshClean::FormAshClean(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAshClean)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    dlgAsh = new DialogAutoCloseMessageBox(NULL,"清灰","清灰工作中……","","",10,false);
    singleTimer = new QTimer;
    singleTimer->setInterval(10000);
    singleTimer->setSingleShot(true);
    connect(singleTimer,SIGNAL(timeout()),dlgAsh,SLOT(setFinished()));
    timeAshTimer = new QTimer;
    timeAshTimer->setInterval(600000);
    connect(timeAshTimer,SIGNAL(timeout()),this,SLOT(timeAshClean()));
    setWindowModality(Qt::ApplicationModal);
}

FormAshClean::~FormAshClean()
{
    delete ui;
}

void FormAshClean::updateData()
{
    bool temp = isBeep;
    isBeep = false;

    ui->spinBox_delay->setValue(g_dialog->fileManager->config.ash_delay);
    ui->spinBox_interval->setValue(g_dialog->fileManager->config.ash_interval);
    timeAshTimer->setInterval(g_dialog->fileManager->config.ash_interval * 1000 * 60);
    ui->spinBox_thresholdFront->setValue(g_dialog->fileManager->config.frontLuminanceThreshold);
    ui->spinBox_thresholdEnd->setValue(g_dialog->fileManager->config.endLuminanceThreshold);
    if(g_dialog->fileManager->config.ash_mode == ASH_MODE_TIME)
        on_radioButtonTiming_clicked();
    else
        on_radioButtonAuto_clicked();

    isBeep = temp;
}

void FormAshClean::timeAshClean()
{
    if(vibratorStatus && g_dialog->fileManager->config.ash_mode == ASH_MODE_TIME)
        cleanAsh();
}

void FormAshClean::on_toolButton_clicked()
{
    if(isBeep)beep(50000,3);
    timeAshTimer->setInterval(g_dialog->fileManager->config.ash_interval * 1000 * 60);

    emit switchToPage(6);
}

void FormAshClean::cleanAsh()
{
    qDebug()<<"clean ash";
    if(g_dialog->fileManager->config.ash_mode != ASH_MODE_AUTO)
        return;

    char tmp[3] = {0x0c,0x00};
    QByteArray tmp1(tmp,3);

    char tmp3[6] = {0x07,0xaa,0x00};
    QByteArray tmp2(tmp3,6);

    g_dialog->serialManager->writeCmd(0,tmp1);
    tmp1.data()[0] = 0x12;
    g_dialog->serialManager->writeCmd(0,tmp1);
    tmp1.data()[0] = 0x0e;
    g_dialog->serialManager->writeCmd(0,tmp1);
    g_dialog->serialManager->writeCmd(1,tmp2);
    tmp1.data()[0] = 0x09;
    g_dialog->serialManager->writeCmd(0,tmp1);

    dlgAsh->setDelay(ui->spinBox_delay->value());
    dlgAsh->exec();

    tmp1.data()[0] = 0x0a;
    g_dialog->serialManager->writeCmd(0,tmp1);
    dlgAsh->setDelay(ui->spinBox_delay->value());
    dlgAsh->exec();
    tmp1.data()[0] = 0x0b;
    g_dialog->serialManager->writeCmd(0,tmp1);
    tmp1.data()[0] = 0x11;
    g_dialog->serialManager->writeCmd(0,tmp1);
    tmp1.data()[0] = 0x0d;
    g_dialog->serialManager->writeCmd(0,tmp1);
    tmp2.data()[0] = 0x06;
    g_dialog->serialManager->writeCmd(1,tmp2);
}

void FormAshClean::on_toolButton_manual_clicked()
{
    if(isBeep)beep(50000,4);
    cleanAsh();
}

void FormAshClean::on_spinBox_thresholdFront_valueChanged(int arg1)
{
    if(isBeep)beep(50000,5);
    g_dialog->fileManager->config.frontLuminanceThreshold = arg1;
}

void FormAshClean::on_spinBox_thresholdEnd_valueChanged(int arg1)
{
    if(isBeep)beep(50000,6);
    g_dialog->fileManager->config.endLuminanceThreshold = arg1;
}

void FormAshClean::on_spinBox_delay_valueChanged(int arg1)
{
    if(isBeep)beep(50000,7);
    g_dialog->fileManager->config.ash_delay = arg1;
}

void FormAshClean::on_spinBox_interval_valueChanged(int arg1)
{
    if(isBeep)beep(50000,8);
    g_dialog->fileManager->config.ash_interval = arg1;
}

void FormAshClean::on_radioButtonTiming_clicked()
{
    if(isBeep)beep(50000,9);
    g_dialog->fileManager->config.ash_mode = ASH_MODE_TIME;
}

void FormAshClean::on_radioButtonAuto_clicked()
{
    if(isBeep)beep(50000,10);
    g_dialog->fileManager->config.ash_mode = ASH_MODE_AUTO;
}
