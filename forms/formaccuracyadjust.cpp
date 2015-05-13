#include "formaccuracyadjust.h"
#include "ui_formaccuracyadjust.h"
#include <QDebug>
#include "../dialog.h"
#include <QVBoxLayout>

void beep(int);
extern bool isBeep;
extern QString stylesheet;
extern Dialog* g_dialog;


FormAccuracyAdjust::FormAccuracyAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyAdjust)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    connect(ui->verticalSlider11,SIGNAL(valueChanged(int)),ui->lcdNumber11,SLOT(display(int)));
    connect(ui->verticalSlider12,SIGNAL(valueChanged(int)),ui->lcdNumber12,SLOT(display(int)));
    connect(ui->verticalSlider13,SIGNAL(valueChanged(int)),ui->lcdNumber13,SLOT(display(int)));
    connect(ui->verticalSlider21,SIGNAL(valueChanged(int)),ui->lcdNumber21,SLOT(display(int)));
    connect(ui->verticalSlider22,SIGNAL(valueChanged(int)),ui->lcdNumber22,SLOT(display(int)));
    connect(ui->verticalSlider23,SIGNAL(valueChanged(int)),ui->lcdNumber23,SLOT(display(int)));
    connect(ui->verticalSlider31,SIGNAL(valueChanged(int)),ui->lcdNumber31,SLOT(display(int)));
    connect(ui->verticalSlider32,SIGNAL(valueChanged(int)),ui->lcdNumber32,SLOT(display(int)));
    connect(ui->verticalSlider33,SIGNAL(valueChanged(int)),ui->lcdNumber33,SLOT(display(int)));
    ui->verticalSlider11->setValue(0);
    ui->verticalSlider12->setValue(0);
    ui->verticalSlider13->setValue(0);
    ui->verticalSlider21->setValue(0);
    ui->verticalSlider22->setValue(0);
    ui->verticalSlider23->setValue(0);
    ui->verticalSlider31->setValue(0);
    ui->verticalSlider32->setValue(0);
    ui->verticalSlider33->setValue(0);

    btn = new MultiStatusToolButton(NULL,2,"前相机","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);"
                                    ,"后相机","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");

    connect(btn,SIGNAL(clicked()),this,SLOT(on_toolButton_Camera_clicked()));
    QVBoxLayout *box = new QVBoxLayout;
    box->setMargin(0);
    box->addWidget(btn);
    ui->widget->setLayout(box);
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
    emit switchToPage(2);
}

void FormAccuracyAdjust::on_toolButton_11u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider11->setValue(ui->verticalSlider11->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_11d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider11->setValue(ui->verticalSlider11->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_12u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider12->setValue(ui->verticalSlider12->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_12d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider12->setValue(ui->verticalSlider12->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_13u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider13->setValue(ui->verticalSlider13->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_13d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider13->setValue(ui->verticalSlider13->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_21u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider21->setValue(ui->verticalSlider21->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_21d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider21->setValue(ui->verticalSlider21->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_22u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider22->setValue(ui->verticalSlider22->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_22d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider22->setValue(ui->verticalSlider22->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_23u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider23->setValue(ui->verticalSlider23->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_23d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider23->setValue(ui->verticalSlider23->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_31u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider31->setValue(ui->verticalSlider31->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_31d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider31->setValue(ui->verticalSlider31->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_32u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider32->setValue(ui->verticalSlider32->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_32d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider32->setValue(ui->verticalSlider32->value() - 1);
}


void FormAccuracyAdjust::on_toolButton_33u_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider33->setValue(ui->verticalSlider33->value() + 1);
}

void FormAccuracyAdjust::on_toolButton_33d_clicked()
{
    if(isBeep)beep(50000);
    ui->verticalSlider33->setValue(ui->verticalSlider33->value() - 1);
}

void FormAccuracyAdjust::on_toolButton_Camera_clicked()
{
    if(isBeep)beep(50000);
}

void FormAccuracyAdjust::checkDataRange(int &v, int min, int max)
{
    if(v > max)v = max;
    if(v < min)v = min;
}

void FormAccuracyAdjust::on_toolButton_2_clicked()
{
    for(int i = 0 + btn->currentIndex() * 7; i < 7 + btn->currentIndex() * 7;i++)
    {
        if(g_dialog->fileManager->config.times[i] == 1)
        {
            g_dialog->fileManager->config.accuracy[i][0] += ui->verticalSlider11->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][0],-255,255);
            g_dialog->fileManager->config.accuracy[i][1] += ui->verticalSlider12->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][1],-255,255);
            g_dialog->fileManager->config.accuracy[i][2] += ui->verticalSlider13->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][2],-5,5);
        }
        if(g_dialog->fileManager->config.times[i] == 2)
        {
            g_dialog->fileManager->config.accuracy[i][0] += ui->verticalSlider21->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][0],-255,255);
            g_dialog->fileManager->config.accuracy[i][1] += ui->verticalSlider22->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][1],-255,255);
            g_dialog->fileManager->config.accuracy[i][2] += ui->verticalSlider23->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][2],-5,5);
        }
        if(g_dialog->fileManager->config.times[i] == 3)
        {
            g_dialog->fileManager->config.accuracy[i][0] += ui->verticalSlider31->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][0],-255,255);
            g_dialog->fileManager->config.accuracy[i][1] += ui->verticalSlider32->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][1],-255,255);
            g_dialog->fileManager->config.accuracy[i][2] += ui->verticalSlider33->value();
            checkDataRange(g_dialog->fileManager->config.accuracy[i][2],-5,5);
        }
    }
    ui->verticalSlider11->setValue(0);
    ui->verticalSlider12->setValue(0);
    ui->verticalSlider13->setValue(0);
    ui->verticalSlider21->setValue(0);
    ui->verticalSlider22->setValue(0);
    ui->verticalSlider23->setValue(0);
    ui->verticalSlider31->setValue(0);
    ui->verticalSlider32->setValue(0);
    ui->verticalSlider33->setValue(0);
    /*for(int i = 0;i<14;i++)
    {
        qDebug()<<i<<g_dialog->fileManager->config.times[i]
                  <<g_dialog->fileManager->config.accuracy[i][0]
                 <<g_dialog->fileManager->config.accuracy[i][1]
                <<g_dialog->fileManager->config.accuracy[i][2];
    }*/
}
