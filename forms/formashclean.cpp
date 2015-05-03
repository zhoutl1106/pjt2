#include "formashclean.h"
#include "ui_formashclean.h"
#include <QElapsedTimer>
#include <QDebug>
#include "../dialog.h"

extern Dialog* g_dialog;
void beep(int);
extern bool isBeep;
extern QString stylesheet;

FormAshClean::FormAshClean(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAshClean)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    /*dlgAsh = new DlgAsh;
    dlgAsh->move(312,200);
    singleTimer = new QTimer;
    singleTimer->setInterval(10000);
    singleTimer->setSingleShot(true);
    connect(singleTimer,SIGNAL(timeout()),dlgAsh,SLOT(setFinished()));
    autoTimer = new QTimer;
    autoTimer->setInterval(600000);
    connect(autoTimer,SIGNAL(timeout()),this,SLOT(cleanAsh()));
    setWindowModality(Qt::ApplicationModal);*/
    //autoTimer->start();
}

FormAshClean::~FormAshClean()
{
    delete ui;
}

void FormAshClean::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    isBeep = temp;
}

/*
void FormAshClean::setThreshold(short *dat)
{
    ui->spinBox_threshold->setValue(dat[0]);
}

void FormAshClean::setValue(int delay, int interval)
{
    ui->spinBox_delay->setValue(delay);
    ui->spinBox_interval->setValue(interval);
}

void FormAshClean::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    char buf3[6]={0x08,0x00};
    QByteArray cmd;
    for(int i = 0;i<14;i++)
    {
        buf3[1] = i + 1;
        *((short*)(buf3+2)) = ui->spinBox_threshold->value();
        cmd = QByteArray(buf3,6);
        emit sendCmd(1,cmd);
        //usleep(200000);
    }
    this->close();
    g_widget->fileManager->config.ash_delay = ui->spinBox_delay->value();
    g_widget->fileManager->config.ash_interval = ui->spinBox_interval->value();
    autoTimer->setInterval(ui->spinBox_interval->value() * 60000);
    if(ui->radioButtonTiming->isChecked())
    {
        autoTimer->start();
        g_widget->serialManager->isAshAccept = false;
    }
    else
    {
        autoTimer->stop();
        g_widget->serialManager->isAshAccept = true;
    }
}

void FormAshClean::cleanAsh()
{
    if(isBeep)beep(50000);
    qDebug()<<"clean ash";
    int delay = 50000;

//    if(g_widget->motorFlag)
//        g_widget->on_toolButton_clicked();

    char data2[] = {0X0e,0X00,0x00};
    QByteArray cmd2(data2,3);
    emit sendCmd(0,cmd2);
    usleep(delay);

    temp[0] = 0x07;
    temp[1] = 0xaa;
    memset(temp+2,0,4);
    QByteArray cmd1(temp,6);
    emit sendCmd(1,cmd1);
    qDebug()<<cmd1.toHex();
    usleep(delay);

    char data3[] = {0X09,0X00,0x00};
    QByteArray cmd3(data3,3);
    emit sendCmd(0,cmd3);
    usleep(delay);

    singleTimer->setInterval(ui->spinBox_delay->value() * 1000);
    singleTimer->start();
    dlgAsh->exec();

    char data4[] = {0X0a,0X00,0x00};
    QByteArray cmd4(data4,3);
    emit sendCmd(0,cmd4);
    usleep(delay);

    temp[0] = 0x06;
    temp[1] = 0xaa;
    memset(temp+2,0,4);
    QByteArray cmd5(temp,6);
    emit sendCmd(1,cmd5);
    qDebug()<<cmd5.toHex();
    usleep(delay);

    char data6[] = {0X0d,0X00,0x00};
    QByteArray cmd6(data6,3);
    emit sendCmd(0,cmd6);
    usleep(delay);

    //g_widget->on_toolButton_2_clicked();
}

void FormAshClean::on_toolButton_manual_clicked()
{
    if(isBeep)beep(50000);
    cleanAsh();
}

void FormAshClean::on_spinBox_threshold_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
    for(int i =0;i<14;i++)
        g_widget->fileManager->config.threshold[i] = arg1;
}

void FormAshClean::on_spinBox_delay_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
}

void FormAshClean::on_spinBox_interval_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
}

void FormAshClean::on_radioButtonTiming_clicked()
{
    if(isBeep)beep(50000);
}

void FormAshClean::on_radioButtonAuto_clicked()
{
    if(isBeep)beep(50000);
}
*/

void FormAshClean::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(6);
}
