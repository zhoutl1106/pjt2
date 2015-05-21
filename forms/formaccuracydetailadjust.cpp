#include "formaccuracydetailadjust.h"
#include "ui_formaccuracydetailadjust.h"
#include <QDebug>
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int);
extern bool isBeep;
extern QString stylesheet;


FormAccuracyDetailAdjust::FormAccuracyDetailAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyDetailAdjust)
{
    ui->setupUi(this);
    btn = new MultiStatusToolButton(NULL,2,"前相机","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);"
                                    ,"后相机","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
    connect(btn,SIGNAL(clicked()),this,SLOT(onCamera()));
    QVBoxLayout *box = new QVBoxLayout;
    box->setMargin(0);
    box->addWidget(btn);
    ui->widget->setLayout(box);
    connect(ui->verticalSlider11,SIGNAL(valueChanged(int)),ui->lcdNumber11,SLOT(display(int)));
    connect(ui->verticalSlider12,SIGNAL(valueChanged(int)),ui->lcdNumber12,SLOT(display(int)));
    connect(ui->verticalSlider13,SIGNAL(valueChanged(int)),ui->lcdNumber13,SLOT(display(int)));
    setStyleSheet(stylesheet);
    list.append(ui->widget_1u);
    list.append(ui->widget_1d);
    list.append(ui->widget_2u);
    list.append(ui->widget_2d);
    list.append(ui->widget_3u);
    list.append(ui->widget_3d);
    for(int i = 0;i<6;i++)
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

void FormAccuracyDetailAdjust::lbtnValue(int index, int value)
{
//    qDebug()<<index<<value;
    switch(index)
    {
    case 0:ui->verticalSlider11->setValue(ui->verticalSlider11->value()+value);break;
    case 1:ui->verticalSlider12->setValue(ui->verticalSlider12->value()+value);break;
    case 2:ui->verticalSlider13->setValue(ui->verticalSlider13->value()+value);break;
    }
}

void FormAccuracyDetailAdjust::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2]);
    isBeep = temp;
}

void FormAccuracyDetailAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(6);
}

void FormAccuracyDetailAdjust::on_comboBox_currentIndexChanged(int index)
{
    if(index != 7)
    {
        ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0]);
        ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][1]);
        ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2]);
    }
    else
    {
        ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7][0]);
        ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7][1]);
        ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7][2]);
    }
}

void FormAccuracyDetailAdjust::onCamera()
{
    if(ui->comboBox->currentIndex() != 7)
    {
        ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0]);
        ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][1]);
        ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2]);
    }
    else
    {
        ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7][0]);
        ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7][1]);
        ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7][2]);
    }
}

void FormAccuracyDetailAdjust::on_toolButton_2_clicked()
{
    //g_dialog->fileManager->configChange();
    for(int i = 0;i<7;i++)
    {
        qDebug()<<i<<g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0]
                <<g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][1]
                <<g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2];
    }
}

void FormAccuracyDetailAdjust::on_verticalSlider11_valueChanged(int value)
{
    if(ui->comboBox->currentIndex() != 7)
        g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0] = value;
    else
    {
        for(int i = 0;i<7;i++)
            g_dialog->fileManager->config.accuracy[btn->currentIndex()*7 + i][0] = value;
    }
}

void FormAccuracyDetailAdjust::on_verticalSlider12_valueChanged(int value)
{
    if(ui->comboBox->currentIndex() != 7)
        g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][1] = value;
    else
    {
        for(int i = 0;i<7;i++)
            g_dialog->fileManager->config.accuracy[btn->currentIndex()*7 + i][1] = value;
    }
}

void FormAccuracyDetailAdjust::on_verticalSlider13_valueChanged(int value)
{
    if(ui->comboBox->currentIndex() != 7)
        g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2] = value;
    else
    {
        for(int i = 0;i<7;i++)
            g_dialog->fileManager->config.accuracy[btn->currentIndex()*7 + i][2] = value;
    }
}
