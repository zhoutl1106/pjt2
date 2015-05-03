#include "formmain.h"
#include "ui_formmain.h"

extern bool isBeep;
void beep(int);
void g_setValve();
void g_setVibrator();

FormMain::FormMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormMain)
{
    ui->setupUi(this);
    longPressTimer = new QTimer();
    longPressTimer->setInterval(5000);
    connect(longPressTimer,SIGNAL(timeout()),this,SLOT(onLongPressTimer()));
}

FormMain::~FormMain()
{
    delete ui;
}

void FormMain::setValve(bool value)
{
    if(value)
    {
        ui->toolButtonValve->setStyleSheet("border-image: url(:/image/btnR.png); color: rgb(255, 255, 255);");
        ui->toolButtonValve->setText("喷阀 开");
    }
    else
    {
        ui->toolButtonValve->setStyleSheet("border-image: url(:/image/btnG.png); color: rgb(255, 255, 255);");
        ui->toolButtonValve->setText("喷阀 关");
    }
}

void FormMain::setVibrator(bool value)
{
    if(value)
    {
        ui->toolButtonVibrator->setStyleSheet("border-image: url(:/image/btnR.png); color: rgb(255, 255, 255);");
        ui->toolButtonVibrator->setText("供料 开");
    }
    else
    {
        ui->toolButtonVibrator->setStyleSheet("border-image: url(:/image/btnG.png); color: rgb(255, 255, 255);");
        ui->toolButtonVibrator->setText("供料 关");
    }
}

void FormMain::on_toolButtonExit_pressed()
{
    longPressTimer->start();
}

void FormMain::on_toolButtonExit_released()
{
    longPressTimer->stop();
}

void FormMain::onLongPressTimer()
{
    longPressTimer->stop();
    //*** ask whether to save the parameters

    //*** send cmd to close all devices
    emit switchToPage(7);
}

void FormMain::on_toolButton_5_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(3);
}

void FormMain::on_toolButton_6_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(4);
}

void FormMain::on_toolButton_8_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(5);
}

void FormMain::on_toolButton_3_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(8);
}

void FormMain::on_toolButtonValve_clicked()
{
    g_setValve();
}

void FormMain::on_toolButtonVibrator_clicked()
{
    g_setVibrator();
}
