#include "formaccuracyadjust.h"
#include "ui_formaccuracyadjust.h"
#include <QDebug>

void beep(int);
extern bool isBeep;
extern QString stylesheet;


FormAccuracyAdjust::FormAccuracyAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyAdjust)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    last1 = 0;
    last2 = 0;
    last3 = 0;
    /*ui->label1->setText("0");
    ui->label2->setText("0");
    ui->label3->setText("0");*/
}

FormAccuracyAdjust::~FormAccuracyAdjust()
{
    delete ui;
}

void FormAccuracyAdjust::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    isBeep = temp;
}

void FormAccuracyAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    last1 = 0;
    last2 = 0;
    last3 = 0;
    /*ui->label1->setText("0");
    ui->label2->setText("0");
    ui->label3->setText("0");*/
    emit switchToPage(2);
}
/*
void FormAccuracyAdjust::on_toolButton_3_clicked()
{
    if(isBeep)beep(50000);
    last1 = 0;
    last2 = 0;
    last3 = 0;
    ui->label1->setText("0");
    ui->label2->setText("0");
    ui->label3->setText("0");
    formAccuracyDetailAdjust->showFullScreen();
}

void FormAccuracyAdjust::on_toolButton_5_clicked()
{
    if(isBeep)beep(50000);
    last1 --;
    if(last1 > 0)
        ui->label1->setText("+" + QString::number(last1));
    else
        ui->label1->setText(QString::number(last1));
//    formAccuracyDetailAdjust->uploadValue(0,-1);
}

void FormAccuracyAdjust::on_toolButton_6_clicked()
{
    if(isBeep)beep(50000);
    last1 ++;
    if(last1 > 0)
        ui->label1->setText("+" + QString::number(last1));
    else
        ui->label1->setText(QString::number(last1));
    formAccuracyDetailAdjust->uploadValue(0,1);
}

void FormAccuracyAdjust::on_toolButton_8_clicked()
{
    if(isBeep)beep(50000);
    last2 --;
    if(last2 > 0)
        ui->label2->setText("+" + QString::number(last2));
    else
        ui->label2->setText(QString::number(last2));
    formAccuracyDetailAdjust->uploadValue(1,-1);
}

void FormAccuracyAdjust::on_toolButton_7_clicked()
{
    if(isBeep)beep(50000);
    last2 ++;
    if(last2 > 0)
        ui->label2->setText("+" + QString::number(last2));
    else
        ui->label2->setText(QString::number(last2));
    formAccuracyDetailAdjust->uploadValue(1,1);
}

void FormAccuracyAdjust::on_toolButton_10_clicked()
{
    if(isBeep)beep(50000);
    last3 --;
    if(last3 > 0)
        ui->label3->setText("+" + QString::number(last3));
    else
        ui->label3->setText(QString::number(last3));
    formAccuracyDetailAdjust->uploadValue(1,-1);
}

void FormAccuracyAdjust::on_toolButton_9_clicked()
{
    if(isBeep)beep(50000);
    last3 ++;
    if(last3 > 0)
        ui->label3->setText("+" + QString::number(last3));
    else
        ui->label3->setText(QString::number(last3));
    formAccuracyDetailAdjust->uploadValue(1,1);
}*/
