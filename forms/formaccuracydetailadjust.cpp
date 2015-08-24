#include "formaccuracydetailadjust.h"
#include "ui_formaccuracydetailadjust.h"
#include <QDebug>
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;
void g_setValve();
void g_setVibrator();


FormAccuracyDetailAdjust::FormAccuracyDetailAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyDetailAdjust)
{
    ui->setupUi(this);
    connect(ui->verticalSlider11,SIGNAL(valueChanged(int)),ui->lcdNumber11,SLOT(display(int)));
    connect(ui->verticalSlider12,SIGNAL(valueChanged(int)),ui->lcdNumber12,SLOT(display(int)));
    connect(ui->verticalSlider13,SIGNAL(valueChanged(int)),ui->lcdNumber13,SLOT(display(int)));
    connect(ui->verticalSlider11_2,SIGNAL(valueChanged(int)),ui->lcdNumber11_2,SLOT(display(int)));
    connect(ui->verticalSlider12_2,SIGNAL(valueChanged(int)),ui->lcdNumber12_2,SLOT(display(int)));
    connect(ui->verticalSlider13_2,SIGNAL(valueChanged(int)),ui->lcdNumber13_2,SLOT(display(int)));
    setStyleSheet(stylesheet);
    list.append(ui->widget_1u);
    list.append(ui->widget_1d);
    list.append(ui->widget_2u);
    list.append(ui->widget_2d);
    list.append(ui->widget_3u);
    list.append(ui->widget_3d);
    list.append(ui->widget_1u_2);
    list.append(ui->widget_1d_2);
    list.append(ui->widget_2u_2);
    list.append(ui->widget_2d_2);
    list.append(ui->widget_3u_2);
    list.append(ui->widget_3d_2);
    for(int i = 0;i<12;i++)
    {
        lbtn[i] = new LongClickToolButton(NULL,i/2,i%2==0?1:-1);
        QVBoxLayout *layout = new QVBoxLayout;
        layout->setMargin(0);
        layout->addWidget(lbtn[i]);
        list.at(i)->setLayout(layout);
        connect(lbtn[i],SIGNAL(longClick(int,int)),this,SLOT(lbtnValue(int,int)));
        connect(lbtn[i],SIGNAL(released(int,int)),this,SLOT(lbtnValue(int,int)));
    }
}

FormAccuracyDetailAdjust::~FormAccuracyDetailAdjust()
{
    delete ui;
}

void FormAccuracyDetailAdjust::setValve(bool value)
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

void FormAccuracyDetailAdjust::setVibrator(bool value)
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

void FormAccuracyDetailAdjust::lbtnValue(int index, int value)
{
//    qDebug()<<index<<value;
    if(isBeep)beep(50000);
    switch(index)
    {
    case 0:ui->verticalSlider11->setValue(ui->verticalSlider11->value()+value);break;
    case 1:ui->verticalSlider12->setValue(ui->verticalSlider12->value()+value);break;
    case 2:ui->verticalSlider13->setValue(ui->verticalSlider13->value()+value);break;
    case 3:ui->verticalSlider11_2->setValue(ui->verticalSlider11_2->value()+value);break;
    case 4:ui->verticalSlider12_2->setValue(ui->verticalSlider12_2->value()+value);break;
    case 5:ui->verticalSlider13_2->setValue(ui->verticalSlider13_2->value()+value);break;
    }
}

void FormAccuracyDetailAdjust::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    on_radioButton_1_clicked();
    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[0][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[0][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[0][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[7][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[7][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[7][2]);
    QString str[4]={"0", "  一次选","  二次选","  三次选"};
    ui->radioButton_1->setText("通道1" + str[g_dialog->fileManager->config.times[0]]);
    ui->radioButton_2->setText("通道2" + str[g_dialog->fileManager->config.times[1]]);
    ui->radioButton_3->setText("通道3" + str[g_dialog->fileManager->config.times[2]]);
    ui->radioButton_4->setText("通道4" + str[g_dialog->fileManager->config.times[3]]);
    ui->radioButton_5->setText("通道5" + str[g_dialog->fileManager->config.times[4]]);
    ui->radioButton_6->setText("通道6" + str[g_dialog->fileManager->config.times[5]]);
    ui->radioButton_7->setText("通道7" + str[g_dialog->fileManager->config.times[6]]);

    isBeep = temp;
}

void FormAccuracyDetailAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000,2);
    updateData();
    emit switchToPage(6);
}

void FormAccuracyDetailAdjust::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000,2);
    char tmp[6] = {0x02,0x00};
    if(ui->radioButton_1->isChecked())
        tmp[1] = 0x01;
    else if(ui->radioButton_2->isChecked())
        tmp[1] = 0x02;
    else if(ui->radioButton_3->isChecked())
        tmp[1] = 0x03;
    else if(ui->radioButton_4->isChecked())
        tmp[1] = 0x04;
    else if(ui->radioButton_5->isChecked())
        tmp[1] = 0x05;
    else if(ui->radioButton_6->isChecked())
        tmp[1] = 0x06;
    else if(ui->radioButton_7->isChecked())
        tmp[1] = 0x07;
    else
        return;
    QByteArray temp = QByteArray(tmp,6);
    temp.data()[2] = ui->verticalSlider11->value();
    temp.data()[3] = ui->verticalSlider12->value();
    temp.data()[4] = ui->verticalSlider13->value();
    g_dialog->serialManager->writeCmd(1,temp);
    temp.data()[1] += 7;
    temp.data()[2] = ui->verticalSlider11_2->value();
    temp.data()[3] = ui->verticalSlider12_2->value();
    temp.data()[4] = ui->verticalSlider13_2->value();
    g_dialog->serialManager->writeCmd(1,temp);
    int chn = tmp[1];
    qDebug()<<"chn = "<<chn;

    g_dialog->fileManager->config.accuracy[chn-1][0] = ui->verticalSlider11->value();
    g_dialog->fileManager->config.accuracy[chn-1][1] = ui->verticalSlider12->value();
    g_dialog->fileManager->config.accuracy[chn-1][2] = ui->verticalSlider13->value();
    g_dialog->fileManager->config.accuracy[chn+6][0] = ui->verticalSlider11_2->value();
    g_dialog->fileManager->config.accuracy[chn+6][1] = ui->verticalSlider12_2->value();
    g_dialog->fileManager->config.accuracy[chn+6][2] = ui->verticalSlider13_2->value();

    for(int i = 0;i<14;i++)
    {
        qDebug()<<i<<g_dialog->fileManager->config.times[i]
                <<g_dialog->fileManager->config.accuracy[i][0]
                <<g_dialog->fileManager->config.accuracy[i][1]
                <<g_dialog->fileManager->config.accuracy[i][2];
    }
}

void FormAccuracyDetailAdjust::on_toolButtonValve_clicked()
{
    if(isBeep)beep(50000,0);
    g_setValve();
}

void FormAccuracyDetailAdjust::on_toolButtonVibrator_clicked()
{
    if(isBeep)beep(50000,0);
    g_setVibrator();
}

void FormAccuracyDetailAdjust::on_radioButton_1_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[0][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[0][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[0][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[7][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[7][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[7][2]);
}

void FormAccuracyDetailAdjust::on_radioButton_2_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[1][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[1][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[1][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[8][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[8][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[8][2]);
}

void FormAccuracyDetailAdjust::on_radioButton_3_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[2][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[2][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[2][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[9][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[9][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[9][2]);
}

void FormAccuracyDetailAdjust::on_radioButton_4_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[3][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[3][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[3][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[10][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[10][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[10][2]);
}

void FormAccuracyDetailAdjust::on_radioButton_5_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[4][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[4][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[4][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[11][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[11][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[11][2]);
}

void FormAccuracyDetailAdjust::on_radioButton_6_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[5][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[5][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[5][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[12][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[12][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[12][2]);
}

void FormAccuracyDetailAdjust::on_radioButton_7_clicked()
{
    if(isBeep)beep(50000,0);

    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[6][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[6][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[6][2]);
    ui->verticalSlider11_2->setValue(g_dialog->fileManager->config.accuracy[13][0]);
    ui->verticalSlider12_2->setValue(g_dialog->fileManager->config.accuracy[13][1]);
    ui->verticalSlider13_2->setValue(g_dialog->fileManager->config.accuracy[13][2]);
}
