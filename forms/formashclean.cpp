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
extern bool valveStatus;
void g_setValve();
void g_setVibrator();

FormAshClean::FormAshClean(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAshClean)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    dlgAsh = new DialogAutoCloseMessageBox(NULL,"清灰","清灰工作中……","","",10,false);
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
    qDebug()<<"ash timer timeout"<<vibratorStatus<<g_dialog->fileManager->config.ash_mode;
    if(g_dialog->fileManager->config.ash_mode != ASH_MODE_AUTO
            && g_dialog->fileManager->config.ash_mode != ASH_MODE_TIME)
    {
        if(ui->radioButtonTiming->isChecked())
            g_dialog->fileManager->config.ash_mode = ASH_MODE_TIME;
        else
            g_dialog->fileManager->config.ash_mode = ASH_MODE_AUTO;
    }
    if(vibratorStatus && g_dialog->fileManager->config.ash_mode == ASH_MODE_TIME)
        cleanAsh();
}

void FormAshClean::on_toolButton_clicked()
{
    if(isBeep)beep(50000,3);
    updateData();
    emit switchToPage(6);
}

void FormAshClean::autoCleanAsh()
{
    if(g_dialog->fileManager->config.ash_mode == ASH_MODE_AUTO)
    {
        qDebug()<<"auto clean ash";
        cleanAsh();
    }
}

void FormAshClean::cleanAsh()
{
    qDebug()<<"clean ash";
    bool tempValve = valveStatus;
    bool tempVibrator = vibratorStatus;
    bool tempBeep = isBeep;
    isBeep = false;

    char tmp[3] = {0x0c,0x00};
    QByteArray tmp1(tmp,3);

    char tmp3[6] = {0x07,0xaa,0x00};
    QByteArray tmp2(tmp3,6);

    if(vibratorStatus)
        g_setVibrator();
    dlgAsh->setDelay(10);
    dlgAsh->show();
    if(valveStatus)
        g_setValve();
    g_dialog->serialManager->writeCmd(1,tmp2);
    tmp1.data()[0] = 0x09;
    g_dialog->serialManager->writeCmd(0,tmp1);

    dlgAsh->close();
    dlgAsh->setDelay(ui->spinBox_delay->value());
    dlgAsh->exec();

    tmp1.data()[0] = 0x0a;
    g_dialog->serialManager->writeCmd(0,tmp1);
    dlgAsh->setDelay(ui->spinBox_delay->value());
    dlgAsh->exec();


    tmp2.data()[0] = 0x06;
    g_dialog->serialManager->writeCmd(1,tmp2);

    dlgAsh->setDelay(1);
    dlgAsh->exec();

    tmp2.data()[0] = 0x03;
    g_dialog->serialManager->writeCmd(1,tmp2);

    if(tempValve)
        g_setValve();
    if(tempVibrator)
        g_setVibrator();
    isBeep = tempBeep;
}

void FormAshClean::on_toolButton_manual_clicked()
{
    if(isBeep)beep(50000,4);
    cleanAsh();
}

void FormAshClean::on_spinBox_thresholdFront_valueChanged(int arg1)
{
    if(isBeep)beep(50000,5);
}

void FormAshClean::on_spinBox_thresholdEnd_valueChanged(int arg1)
{
    if(isBeep)beep(50000,6);
}

void FormAshClean::on_spinBox_delay_valueChanged(int arg1)
{
    if(isBeep)beep(50000,7);
}

void FormAshClean::on_spinBox_interval_valueChanged(int arg1)
{
    if(isBeep)beep(50000,8);
}

void FormAshClean::on_radioButtonTiming_clicked()
{
    if(isBeep)beep(50000,9);
}

void FormAshClean::on_radioButtonAuto_clicked()
{
    if(isBeep)beep(50000,10);
}

void FormAshClean::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000,10);
    g_dialog->fileManager->config.ash_delay = ui->spinBox_delay->value();
    g_dialog->fileManager->config.ash_interval = ui->spinBox_interval->value();
    timeAshTimer->setInterval(g_dialog->fileManager->config.ash_interval * 1000 * 60);
    g_dialog->fileManager->config.frontLuminanceThreshold = ui->spinBox_thresholdFront->value();
    g_dialog->fileManager->config.endLuminanceThreshold = ui->spinBox_thresholdEnd->value();
    qDebug()<<"set ash timer to "<<timeAshTimer->interval()<<" ms";

    if(ui->radioButtonAuto->isChecked())
        g_dialog->fileManager->config.ash_mode = ASH_MODE_AUTO;
    else
        g_dialog->fileManager->config.ash_mode = ASH_MODE_TIME;

    char p485[6];
    p485[0] = 0x08;
    p485[1] = 0xaa;
    *((short*)(p485+2)) = short(g_dialog->fileManager->config.frontLuminanceThreshold);
    *((short*)(p485+4)) = short(g_dialog->fileManager->config.endLuminanceThreshold);
    QByteArray cmd485(p485,6);
    g_dialog->serialManager->writeCmd(1,cmd485);
    memset(p485,0,6);


    emit switchToPage(6);
}
