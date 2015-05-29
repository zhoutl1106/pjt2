#include "formmain.h"
#include "ui_formmain.h"
#include "../dialog.h"
#include <QDebug>

extern bool isBeep;
void beep(int length_us, int index = 0);
void g_setValve();
void g_setVibrator();
extern Dialog* g_dialog;

FormMain::FormMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormMain)
{
    ui->setupUi(this);
    longPressTimer = new QTimer();
    longPressTimer->setInterval(2500);
    connect(longPressTimer,SIGNAL(timeout()),this,SLOT(onLongPressTimer()));
}

FormMain::~FormMain()
{
    delete ui;
}

void FormMain::showEvent(QShowEvent *e)
{
    qDebug()<<"main show";
    isBeep = true;
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
    if(isBeep)beep(50000,24);

    DialogAutoCloseMessageBox box1(NULL,"关机","是否关机","是","否",10,true);
    if(box1.exec() == QDialog::Accepted)
    {
        //*** send cmd to close all devices
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

        DialogAutoCloseMessageBox box(NULL,"保存","是否保存模式参数","是","否",10,true);
        if(box.exec() == QDialog::Accepted)
        {
            g_dialog->fileManager->writeConfig(g_dialog->fileManager->mode, g_dialog->fileManager->mem);
        }

        emit switchToPage(7);
    }
}

void FormMain::on_toolButton_5_clicked()
{
    if(isBeep)beep(50000,25);
    emit switchToPage(3);
}

void FormMain::on_toolButton_6_clicked()
{
    if(isBeep)beep(50000,26);
    emit switchToPage(4);
}

void FormMain::on_toolButton_8_clicked()
{
    if(isBeep)beep(50000,27);
    emit switchToPage(5);
}

void FormMain::on_toolButton_3_clicked()
{
    if(isBeep)beep(50000,28);
    emit switchToPage(8);
}

void FormMain::on_toolButtonValve_clicked()
{
    if(isBeep)beep(50000,28);
    g_setValve();
}

void FormMain::on_toolButtonVibrator_clicked()
{
    if(isBeep)beep(50000,28);
    g_setVibrator();
}
