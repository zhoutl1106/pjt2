#include "formaccuracyadjust.h"
#include "ui_formaccuracyadjust.h"
#include <QDebug>
#include "../dialog.h"
#include <QVBoxLayout>

void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;
extern Dialog* g_dialog;
void g_setValve();
void g_setVibrator();


FormAccuracyAdjust::FormAccuracyAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyAdjust)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    connect(ui->verticalSlider11,SIGNAL(valueChanged(int)),ui->lcdNumber11,SLOT(display(int)));
    connect(ui->verticalSlider12,SIGNAL(valueChanged(int)),ui->lcdNumber12,SLOT(display(int)));
    connect(ui->verticalSlider21,SIGNAL(valueChanged(int)),ui->lcdNumber21,SLOT(display(int)));
    connect(ui->verticalSlider22,SIGNAL(valueChanged(int)),ui->lcdNumber22,SLOT(display(int)));
    ui->verticalSlider11->setValue(0);
    ui->verticalSlider12->setValue(0);
    ui->verticalSlider21->setValue(0);
    ui->verticalSlider22->setValue(0);
    listSlider.append(ui->verticalSlider11);
    listSlider.append(ui->verticalSlider12);
    listSlider.append(ui->verticalSlider21);
    listSlider.append(ui->verticalSlider22);

    listWidget.append(ui->widget_11u);
    listWidget.append(ui->widget_11d);
    listWidget.append(ui->widget_12u);
    listWidget.append(ui->widget_12d);
    listWidget.append(ui->widget_21u);
    listWidget.append(ui->widget_21d);
    listWidget.append(ui->widget_22u);
    listWidget.append(ui->widget_22d);

    for(int i = 0;i<8;i++)
    {
        lbtn[i] = new LongClickToolButton(NULL,i/2,i%2==0?1:-1);
        connect(lbtn[i],SIGNAL(longClick(int,int)),this,SLOT(lbtnValue(int,int)));
        connect(lbtn[i],SIGNAL(released(int,int)),this,SLOT(lbtnValue(int,int)));
        QVBoxLayout *layout = new QVBoxLayout;
        layout->setMargin(0);
        layout->addWidget(lbtn[i]);
        listWidget.at(i)->setLayout(layout);
    }
    memset(deltas,0,4*3*sizeof(int));
}


FormAccuracyAdjust::~FormAccuracyAdjust()
{
    delete ui;
}

void FormAccuracyAdjust::setValve(bool value)
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

void FormAccuracyAdjust::setVibrator(bool value)
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

void FormAccuracyAdjust::lbtnValue(int index, int value)
{
    listSlider.at(index)->setValue(listSlider.at(index)->value()+value);
}

void FormAccuracyAdjust::reset()
{
    if(isBeep)beep(50000,0);
    memset(deltas,0,4*3*sizeof(int));
    ui->verticalSlider11->setValue(0);
    ui->verticalSlider12->setValue(0);
    ui->verticalSlider21->setValue(0);
    ui->verticalSlider22->setValue(0);
}

void FormAccuracyAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000,0);
    if(ui->radioButton_1->isChecked())
    {
        ui->verticalSlider11->setValue(deltas[0][0]);
        ui->verticalSlider12->setValue(deltas[0][1]);
        ui->verticalSlider21->setValue(deltas[0][2]);
        ui->verticalSlider22->setValue(deltas[0][3]);
    }
    else if(ui->radioButton_1->isChecked())
    {
        ui->verticalSlider11->setValue(deltas[1][0]);
        ui->verticalSlider12->setValue(deltas[1][1]);
        ui->verticalSlider21->setValue(deltas[1][2]);
        ui->verticalSlider22->setValue(deltas[1][3]);
    }
    else if(ui->radioButton_1->isChecked())
    {
        ui->verticalSlider11->setValue(deltas[2][0]);
        ui->verticalSlider12->setValue(deltas[2][1]);
        ui->verticalSlider21->setValue(deltas[2][2]);
        ui->verticalSlider22->setValue(deltas[2][3]);
    }
    else
        return;
    emit switchToPage(2);
}

void FormAccuracyAdjust::checkDataRange(int &v, int min, int max)
{
    if(v > max)v = max;
    if(v < min)v = min;
}

void FormAccuracyAdjust::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000,0);
    int delta[4];
    int time;
    if(ui->radioButton_1->isChecked())
    {
        time = 1;
        delta[0] = ui->verticalSlider11->value() - deltas[0][0];
        delta[1] = ui->verticalSlider12->value() - deltas[0][1];
        delta[2] = ui->verticalSlider21->value() - deltas[0][2];
        delta[3] = ui->verticalSlider22->value() - deltas[0][3];
    }
    else if(ui->radioButton_2->isChecked())
    {
        time = 2;
        delta[0] = ui->verticalSlider11->value() - deltas[1][0];
        delta[1] = ui->verticalSlider12->value() - deltas[1][1];
        delta[2] = ui->verticalSlider21->value() - deltas[1][2];
        delta[3] = ui->verticalSlider22->value() - deltas[1][3];
    }
    else if(ui->radioButton_3->isChecked())
    {
        time = 3;
        delta[0] = ui->verticalSlider11->value() - deltas[2][0];
        delta[1] = ui->verticalSlider12->value() - deltas[2][1];
        delta[2] = ui->verticalSlider21->value() - deltas[2][2];
        delta[3] = ui->verticalSlider22->value() - deltas[2][3];
    }
    else
        return;
    deltas[time-1][0] = ui->verticalSlider11->value();
    deltas[time-1][1] = ui->verticalSlider12->value();
    deltas[time-1][2] = ui->verticalSlider21->value();
    deltas[time-1][3] = ui->verticalSlider22->value();
    for(int i = 0; i < 7; i++)
    {
        if(g_dialog->fileManager->config.times[i] == time)
        {
            g_dialog->fileManager->config.accuracy[i][0] += delta[0];
            checkDataRange(g_dialog->fileManager->config.accuracy[i][0],0,255);
            g_dialog->fileManager->config.accuracy[i][1] += delta[1];
            checkDataRange(g_dialog->fileManager->config.accuracy[i][1],0,255);
            g_dialog->fileManager->config.accuracy[i+7][0] += delta[2];
            checkDataRange(g_dialog->fileManager->config.accuracy[i+7][0],0,255);
            g_dialog->fileManager->config.accuracy[i+7][1] += delta[3];
            checkDataRange(g_dialog->fileManager->config.accuracy[i+7][1],0,255);
        }
    }
    g_dialog->fileManager->configChange();
    for(int i = 0;i<14;i++)
    {
        qDebug()<<i<<g_dialog->fileManager->config.times[i]
                  <<g_dialog->fileManager->config.accuracy[i][0]
                 <<g_dialog->fileManager->config.accuracy[i][1]
                <<g_dialog->fileManager->config.accuracy[i][2];
    }
    char tmp[6] = {0x02,0};
    QByteArray temp = QByteArray(tmp,6);
    char *p = temp.data();
    for(int i = 0;i<14;i++)
    {
        p[1] = i + 1;
        p[2] = g_dialog->fileManager->config.accuracy[i][0];
        p[3] = g_dialog->fileManager->config.accuracy[i][1];
        p[4] = g_dialog->fileManager->config.accuracy[i][2];
        g_dialog->serialManager->writeCmd(1,temp);
    }
}

void FormAccuracyAdjust::on_toolButtonValve_clicked()
{
    if(isBeep)beep(50000,0);
    g_setValve();
}

void FormAccuracyAdjust::on_toolButtonVibrator_clicked()
{
    if(isBeep)beep(50000,0);
    g_setVibrator();
}

void FormAccuracyAdjust::on_radioButton_1_clicked()
{
    if(isBeep)beep(50000,0);
    ui->verticalSlider11->setValue(deltas[0][0]);
    ui->verticalSlider12->setValue(deltas[0][1]);
    ui->verticalSlider21->setValue(deltas[0][2]);
    ui->verticalSlider22->setValue(deltas[0][3]);
}

void FormAccuracyAdjust::on_radioButton_2_clicked()
{
    if(isBeep)beep(50000,0);
    ui->verticalSlider11->setValue(deltas[1][0]);
    ui->verticalSlider12->setValue(deltas[1][1]);
    ui->verticalSlider21->setValue(deltas[1][2]);
    ui->verticalSlider22->setValue(deltas[1][3]);
}

void FormAccuracyAdjust::on_radioButton_3_clicked()
{
    if(isBeep)beep(50000,0);
    ui->verticalSlider11->setValue(deltas[2][0]);
    ui->verticalSlider12->setValue(deltas[2][1]);
    ui->verticalSlider21->setValue(deltas[2][2]);
    ui->verticalSlider22->setValue(deltas[2][3]);
}
