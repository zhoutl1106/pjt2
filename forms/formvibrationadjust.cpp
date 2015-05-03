#include "formvibrationadjust.h"
#include "ui_formvibrationadjust.h"
#include <QDebug>
#include "../dialog.h"

extern Dialog* g_dialog;
void beep(int);
extern bool isBeep;
extern QString stylesheet;
void g_setValve();
void g_setVibrator();

FormVibrationAdjust::FormVibrationAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormVibrationAdjust)
{
    ui->setupUi(this);
    isAll = false;
    memset(isOpen,0,7*sizeof(bool));
    connect(ui->verticalSlider1,SIGNAL(valueChanged(int)),ui->lcdNumber1,SLOT(display(int)));
    connect(ui->verticalSlider2,SIGNAL(valueChanged(int)),ui->lcdNumber2,SLOT(display(int)));
    connect(ui->verticalSlider3,SIGNAL(valueChanged(int)),ui->lcdNumber3,SLOT(display(int)));
    connect(ui->verticalSlider4,SIGNAL(valueChanged(int)),ui->lcdNumber4,SLOT(display(int)));
    connect(ui->verticalSlider5,SIGNAL(valueChanged(int)),ui->lcdNumber5,SLOT(display(int)));
    connect(ui->verticalSlider6,SIGNAL(valueChanged(int)),ui->lcdNumber6,SLOT(display(int)));
    connect(ui->verticalSlider7,SIGNAL(valueChanged(int)),ui->lcdNumber7,SLOT(display(int)));

    setStyleSheet(stylesheet);

    styleSheet[1] = "font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);";
    styleSheet[0] = "font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);";
    ui->toolButton_Single->setStyleSheet(styleSheet[1]);
    ui->toolButton_All->setStyleSheet(styleSheet[0]);
    ui->pushButton_v1->setStyleSheet(styleSheet[0]);
    ui->pushButton_v2->setStyleSheet(styleSheet[0]);
    ui->pushButton_v3->setStyleSheet(styleSheet[0]);
    ui->pushButton_v4->setStyleSheet(styleSheet[0]);
    ui->pushButton_v5->setStyleSheet(styleSheet[0]);
    ui->pushButton_v6->setStyleSheet(styleSheet[0]);
    ui->pushButton_v7->setStyleSheet(styleSheet[0]);
    list.append(ui->verticalSlider1);
    list.append(ui->verticalSlider2);
    list.append(ui->verticalSlider3);
    list.append(ui->verticalSlider4);
    list.append(ui->verticalSlider5);
    list.append(ui->verticalSlider6);
    list.append(ui->verticalSlider7);
    status = 0;
    memset(lastValue,0,7*sizeof(int));
    isAll = false;
}

FormVibrationAdjust::~FormVibrationAdjust()
{
    delete ui;
}


void FormVibrationAdjust::setValve(bool value)
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

void FormVibrationAdjust::setVibrator(bool value)
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

void FormVibrationAdjust::updateData()
{
    qDebug()<<"update Data in vib";
    bool tempBeep = isBeep;
    isBeep = false;
    ui->verticalSlider1->setValue(g_dialog->fileManager->config.vibration[0]);
    ui->verticalSlider2->setValue(g_dialog->fileManager->config.vibration[1]);
    ui->verticalSlider3->setValue(g_dialog->fileManager->config.vibration[2]);
    ui->verticalSlider4->setValue(g_dialog->fileManager->config.vibration[3]);
    ui->verticalSlider5->setValue(g_dialog->fileManager->config.vibration[4]);
    ui->verticalSlider6->setValue(g_dialog->fileManager->config.vibration[5]);
    ui->verticalSlider7->setValue(g_dialog->fileManager->config.vibration[6]);
    isBeep = tempBeep;
}

void FormVibrationAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(2);
}

void FormVibrationAdjust::on_verticalSlider1_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[0];
    lastValue[0] = value;
    if(isAll)
        deltaSlider(1,delta);

    g_dialog->fileManager->config.vibration[0] = value;
}

void FormVibrationAdjust::on_verticalSlider2_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[1];
    lastValue[1] = value;

    if(isAll)
        deltaSlider(2,delta);

    g_dialog->fileManager->config.vibration[1] = value;
}

void FormVibrationAdjust::on_verticalSlider3_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[2];
    lastValue[2] = value;

    if(isAll)
        deltaSlider(3,delta);

    g_dialog->fileManager->config.vibration[2] = value;
}

void FormVibrationAdjust::on_verticalSlider4_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[3];
    lastValue[3] = value;

    if(isAll)
        deltaSlider(4,delta);

    g_dialog->fileManager->config.vibration[3] = value;
}

void FormVibrationAdjust::on_verticalSlider5_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[4];
    lastValue[4] = value;

    if(isAll)
        deltaSlider(5,delta);

    g_dialog->fileManager->config.vibration[4] = value;
}

void FormVibrationAdjust::on_verticalSlider6_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[5];
    lastValue[5] = value;

    if(isAll)
        deltaSlider(6,delta);

    g_dialog->fileManager->config.vibration[5] = value;
}

void FormVibrationAdjust::on_verticalSlider7_valueChanged(int value)
{
    if(isBeep)beep(50000);
    int delta = value - lastValue[6];
    lastValue[6] = value;

    if(isAll)
        deltaSlider(7,delta);

    g_dialog->fileManager->config.vibration[6] = value;
}

void FormVibrationAdjust::on_verticalSlider1_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x82);
        cmd.append((char)ui->verticalSlider1->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider1->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider2_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x83);
        cmd.append((char)ui->verticalSlider2->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider2->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider3_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x84);
        cmd.append((char)ui->verticalSlider3->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider3->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider4_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x85);
        cmd.append((char)ui->verticalSlider4->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider4->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider5_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x86);
        cmd.append((char)ui->verticalSlider5->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider5->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider6_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x87);
        cmd.append((char)ui->verticalSlider6->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider6->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider7_sliderReleased()
{
    isBeep = true;
    if(isBeep)beep(50000);/*
    QByteArray cmd;
    if(!isAll)
    {
        cmd.append((char)0x88);
        cmd.append((char)ui->verticalSlider7->value());
        cmd.append((char)0x00);
    }
    else
    {
        cmd.append((char)0x89);
        cmd.append((char)ui->verticalSlider7->value());
        cmd.append((char)0x00);
    }
    emit sendCmd(0,cmd);*/
}

void FormVibrationAdjust::on_verticalSlider1_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_verticalSlider2_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_verticalSlider3_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_verticalSlider4_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_verticalSlider5_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_verticalSlider6_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_verticalSlider7_sliderPressed()
{
    if(isBeep)beep(50000);
    isBeep = false;
}

void FormVibrationAdjust::on_pushButton_v1_clicked()
{
    if(isBeep)beep(50000);
    isOpen[0] = !isOpen[0];
    if(isOpen[0])
    {
        status |= V1;
    }
    else
    {
        status &= ~V1;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v1->setStyleSheet(styleSheet[isOpen[0]]);
}

void FormVibrationAdjust::on_pushButton_v2_clicked()
{
    if(isBeep)beep(50000);
    isOpen[1] = !isOpen[1];
    if(isOpen[1])
    {
        status |= V2;
    }
    else
    {
        status &= ~V2;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v2->setStyleSheet(styleSheet[isOpen[1]]);
}

void FormVibrationAdjust::on_pushButton_v3_clicked()
{
    if(isBeep)beep(50000);
    isOpen[2] = !isOpen[2];
    if(isOpen[2])
    {
        status |= V3;
    }
    else
    {
        status &= ~V3;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v3->setStyleSheet(styleSheet[isOpen[2]]);
}

void FormVibrationAdjust::on_pushButton_v4_clicked()
{
    if(isBeep)beep(50000);
    isOpen[3] = !isOpen[3];
    if(isOpen[3])
    {
        status |= V4;
    }
    else
    {
        status &= ~V4;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v4->setStyleSheet(styleSheet[isOpen[3]]);
}

void FormVibrationAdjust::on_pushButton_v5_clicked()
{
    if(isBeep)beep(50000);
    isOpen[4] = !isOpen[4];
    if(isOpen[4])
    {
        status |= V5;
    }
    else
    {
        status &= ~V5;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v5->setStyleSheet(styleSheet[isOpen[4]]);
}

void FormVibrationAdjust::on_pushButton_v6_clicked()
{
    if(isBeep)beep(50000);
    isOpen[5] = !isOpen[5];
    if(isOpen[5])
    {
        status |= V6;
    }
    else
    {
        status &= ~V6;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v6->setStyleSheet(styleSheet[isOpen[5]]);
}

void FormVibrationAdjust::on_pushButton_v7_clicked()
{
    if(isBeep)beep(50000);
    isOpen[6] = !isOpen[6];
    if(isOpen[6])
    {
        status |= V7;
    }
    else
    {
        status &= ~V7;
    }/*
    char temp[3] = {0x80,0x00,0x00};
    temp[1] = status;
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);*/
    ui->pushButton_v7->setStyleSheet(styleSheet[isOpen[6]]);
}


void FormVibrationAdjust::deltaSlider(int index, int delta)
{
    bool tempBeep = isBeep;
    isBeep = false;
    bool tempIsAll = isAll;
    isAll = false;
    for(int i = 0;i<7;i++)
        if(i != index - 1)
            list.at(i)->setValue(list.at(i)->value()+delta);

    lastValue[0] = ui->verticalSlider1->value();
    lastValue[1] = ui->verticalSlider2->value();
    lastValue[2] = ui->verticalSlider3->value();
    lastValue[3] = ui->verticalSlider4->value();
    lastValue[4] = ui->verticalSlider5->value();
    lastValue[5] = ui->verticalSlider6->value();
    lastValue[6] = ui->verticalSlider7->value();
    isBeep = tempBeep;
    isAll = tempIsAll;
}

void FormVibrationAdjust::on_toolButton_1u_clicked()
{
    beep(50000);
    ui->verticalSlider1->setValue(ui->verticalSlider1->value() + 1);
}

void FormVibrationAdjust::on_toolButton_1d_clicked()
{
    beep(50000);
    ui->verticalSlider1->setValue(ui->verticalSlider1->value() - 1);
}

void FormVibrationAdjust::on_toolButton_2u_clicked()
{
    beep(50000);
    ui->verticalSlider2->setValue(ui->verticalSlider2->value() + 1);
}

void FormVibrationAdjust::on_toolButton_2d_clicked()
{
    beep(50000);
    ui->verticalSlider2->setValue(ui->verticalSlider2->value() - 1);
}

void FormVibrationAdjust::on_toolButton_3u_clicked()
{
    beep(50000);
    ui->verticalSlider3->setValue(ui->verticalSlider3->value() + 1);
}

void FormVibrationAdjust::on_toolButton_3d_clicked()
{
    beep(50000);
    ui->verticalSlider3->setValue(ui->verticalSlider3->value() - 1);
}

void FormVibrationAdjust::on_toolButton_4u_clicked()
{
    beep(50000);
    ui->verticalSlider4->setValue(ui->verticalSlider4->value() + 1);
}

void FormVibrationAdjust::on_toolButton_4d_clicked()
{
    beep(50000);
    ui->verticalSlider4->setValue(ui->verticalSlider4->value() - 1);
}

void FormVibrationAdjust::on_toolButton_5u_clicked()
{
    beep(50000);
    ui->verticalSlider5->setValue(ui->verticalSlider5->value() + 1);
}

void FormVibrationAdjust::on_toolButton_5d_clicked()
{
    beep(50000);
    ui->verticalSlider5->setValue(ui->verticalSlider5->value() - 1);
}

void FormVibrationAdjust::on_toolButton_6u_clicked()
{
    beep(50000);
    ui->verticalSlider6->setValue(ui->verticalSlider6->value() + 1);
}

void FormVibrationAdjust::on_toolButton_6d_clicked()
{
    beep(50000);
    ui->verticalSlider6->setValue(ui->verticalSlider6->value() - 1);
}

void FormVibrationAdjust::on_toolButton_7u_clicked()
{
    beep(50000);
    isBeep = false;
    ui->verticalSlider7->setValue(ui->verticalSlider7->value() + 1);
    isBeep = true;
}

void FormVibrationAdjust::on_toolButton_7d_clicked()
{
    beep(50000);
    isBeep = false;
    ui->verticalSlider7->setValue(ui->verticalSlider7->value() + 1);
    isBeep = true;
}

void FormVibrationAdjust::on_toolButton_Single_clicked()
{
    if(isBeep)beep(50000);
    isAll = false;
    ui->toolButton_Single->setStyleSheet(styleSheet[1]);
    ui->toolButton_All->setStyleSheet(styleSheet[0]);
}

void FormVibrationAdjust::on_toolButton_All_clicked()
{
    if(isBeep)beep(50000);
    isAll = true;
    ui->toolButton_Single->setStyleSheet(styleSheet[0]);
    ui->toolButton_All->setStyleSheet(styleSheet[1]);
}

void FormVibrationAdjust::on_toolButtonVibrator_clicked()
{
    g_setVibrator();
}

void FormVibrationAdjust::on_toolButtonValve_clicked()
{
    g_setValve();
}
