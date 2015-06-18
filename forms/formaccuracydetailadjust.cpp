#include "formaccuracydetailadjust.h"
#include "ui_formaccuracydetailadjust.h"
#include <QDebug>
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;


FormAccuracyDetailAdjust::FormAccuracyDetailAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyDetailAdjust)
{
    ui->setupUi(this);
    btn = new MultiStatusToolButton(NULL,2,"前相机","font-size:25px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);"
                                    ,"后相机","font-size:25px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
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
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();
    isSaveValue = true;
}

FormAccuracyDetailAdjust::~FormAccuracyDetailAdjust()
{
    delete ui;
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
    }
}

void FormAccuracyDetailAdjust::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    ui->verticalSlider11->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0]);
    ui->verticalSlider12->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][1]);
    ui->verticalSlider13->setValue(g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2]);
    ui->lcdNumber11->display(ui->verticalSlider11->value());
    ui->lcdNumber12->display(ui->verticalSlider12->value());
    ui->lcdNumber13->display(ui->verticalSlider13->value());
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();
    isBeep = temp;
}

void FormAccuracyDetailAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000,2);
    emit switchToPage(6);
}

void FormAccuracyDetailAdjust::on_comboBox_currentIndexChanged(int index)
{
    isSaveValue = false;
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
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();
    isSaveValue = true;
}

void FormAccuracyDetailAdjust::onCamera()
{
    isSaveValue = false;
    if(isBeep)beep(50000,2);
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
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();
    isSaveValue = true;
}

void FormAccuracyDetailAdjust::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000,2);
    //g_dialog->fileManager->configChange();
    char tmp[6] = {0x00};
    QByteArray temp = QByteArray(tmp,6);
    if(ui->comboBox->currentIndex() == 7)
    {
        temp.data()[0] = 0x02;
        temp.data()[1] = 0xf0 + btn->currentIndex() * 0x0f;
        temp.data()[2] = ui->verticalSlider11->value();
        temp.data()[3] = ui->verticalSlider12->value();
        temp.data()[4] = ui->verticalSlider13->value();
    }
    else
    {
        temp.data()[0] = 0x02;
        temp.data()[1] = btn->currentIndex() *7 + ui->comboBox->currentIndex() + 1;
        temp.data()[2] = ui->verticalSlider11->value();
        temp.data()[3] = ui->verticalSlider12->value();
        temp.data()[4] = ui->verticalSlider13->value();
    }
    g_dialog->serialManager->writeCmd(1,temp);
    for(int i = 0;i<14;i++)
    {
        qDebug()<<i<<g_dialog->fileManager->config.accuracy[i][0]
                <<g_dialog->fileManager->config.accuracy[i][1]
                <<g_dialog->fileManager->config.accuracy[i][2];
    }
}

void FormAccuracyDetailAdjust::on_verticalSlider11_valueChanged(int value)
{
    if(isSaveValue == false)
    {
        return;
    }
    int delta = value - lastValue[0];
    ui->lcdNumber11->display(value);
    if(delta == 10 || delta == -10)
    {
        ui->verticalSlider11->setValue(lastValue[0]);
        ui->lcdNumber11->display(lastValue[0]);
        return;
    }
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();

    if(ui->comboBox->currentIndex() != 7)
    {
        qDebug()<<"accuracy"<<btn->currentIndex()*7+ui->comboBox->currentIndex()<<value;
        g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][0] = value;
    }
    else
    {
        for(int i = 0;i<7;i++)
            g_dialog->fileManager->config.accuracy[btn->currentIndex()*7 + i][0] = value;
    }
}

void FormAccuracyDetailAdjust::on_verticalSlider12_valueChanged(int value)
{
    if(isSaveValue == false)
    {
        return;
    }
    int delta = value - lastValue[1];
    ui->lcdNumber12->display(value);
    if(delta == 10 || delta == -10)
    {
        ui->verticalSlider12->setValue(lastValue[1]);
        ui->lcdNumber12->display(lastValue[1]);
        return;
    }
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();

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
    if(isSaveValue == false)
    {
        return;
    }
    int delta = value - lastValue[2];
    ui->lcdNumber13->display(value);
    if(delta == 10 || delta == -10)
    {
        ui->verticalSlider13->setValue(lastValue[2]);
        ui->lcdNumber13->display(lastValue[2]);
        return;
    }
    lastValue[0] = ui->verticalSlider11->value();
    lastValue[1] = ui->verticalSlider12->value();
    lastValue[2] = ui->verticalSlider13->value();

    if(ui->comboBox->currentIndex() != 7)
        g_dialog->fileManager->config.accuracy[btn->currentIndex()*7+ui->comboBox->currentIndex()][2] = value;
    else
    {
        for(int i = 0;i<7;i++)
            g_dialog->fileManager->config.accuracy[btn->currentIndex()*7 + i][2] = value;
    }
}
