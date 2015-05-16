#include "formvalvetest.h"
#include "ui_formvalvetest.h"
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int);
extern bool isBeep;
extern QString stylesheet;

FormValveTest::FormValveTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormValveTest)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    btn = new MultiStatusToolButton(NULL,2,"前相机","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);"
                                    ,"后相机","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");

    connect(btn,SIGNAL(clicked()),this,SLOT(onCameraClicked()));
    QVBoxLayout *box = new QVBoxLayout;
    box->setMargin(0);
    box->addWidget(btn);
    ui->widgetCamera->setLayout(box);
   /* timer = new QTimer;
    timer->setInterval(2000);
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    autoTest = false;
    autoMsg = new QMessageBox;
    autoMsg->setWindowTitle("通知");
    autoMsg->setText("喷阀自动测试中……");
    autoMsg->addButton("退出", QMessageBox::ActionRole);
    formValveMonitor = new FormValveMonitor;
    setWindowModality(Qt::ApplicationModal);*/
}

FormValveTest::~FormValveTest()
{
    delete ui;
}

void FormValveTest::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    btn->setCurrentIndex(0);
    ui->spinBoxChannel->setValue(1);
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->config.delay[0]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->config.pulse_width[0]);
    isBeep = temp;
}

void FormValveTest::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(6);
}

void FormValveTest::onCameraClicked()
{
    if(isBeep)beep(50000);

    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->config.delay[btn->currentIndex()*7 + ui->spinBoxChannel->value() - 1]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->config.pulse_width[btn->currentIndex()*7 + ui->spinBoxChannel->value() - 1]);
}


void FormValveTest::on_toolButton_singleTest_clicked()
{/*
    if(isBeep)beep(50000);
    QByteArray cmd;
    cmd.append((char)0x01);
    cmd.append((char)ui->spinBoxGroup->value());
    cmd.append((char)ui->spinBoxPos->value());
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    for(int i = 0;i<5;i++)
    {
        emit sendCmd(1,cmd);
        usleep(10000);
    }*/
}

void FormValveTest::onTimer()
{
    on_toolButton_singleTest_clicked();/*
    if(ui->spinBoxPos->value() == 64)
    {
        ui->spinBoxPos->setValue(1);
        if(ui->spinBoxGroup->value() == 14 && autoMsg->isVisible())
        {
            timer->stop();
            autoMsg->close();
            QMessageBox::information(this,"通知","喷阀自动测试结束");
            return;
        }
        else
            ui->spinBoxGroup->setValue(ui->spinBoxGroup->value()+1);
    }
    else
        ui->spinBoxPos->setValue(ui->spinBoxPos->value() + 1);*/
}

void FormValveTest::on_toolButton_autoTest_clicked()
{
    if(isBeep)beep(50000);
    timer->start();
    //autoMsg->exec();
    timer->stop();
}

void FormValveTest::on_toolButton_valveOn_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(14);
}

void FormValveTest::on_toolButton_OK_clicked()
{
    if(isBeep)beep(50000);
    /*g_dialog->fileManager->config.delay[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1] = ui->doubleSpinBox_delay->value();
    g_dialog->fileManager->config.pulse_width[btncurrentIndex()*7 + ui->spinBoxChannel->value()-1] = ui->doubleSpinBox_pulseWidth->value();*/
/*
    char temp[6]={0x09,0x00};
    short tempDelay = g_widget->fileManager->config.delay[ui->camera->currentIndex()*7 + ui->spinBox->value()-1]*20.0;
    short tempPulseWidth = g_widget->fileManager->config.pulse_width[ui->camera->currentIndex()*7 + ui->spinBox->value()-1]*20.0;
    temp[1] = ui->camera->currentIndex()*7 + ui->spinBox->value();
    *((short*)(temp+2)) = tempDelay;
    *((short*)(temp+4)) = tempPulseWidth;

    QByteArray cmd(temp,6);
    emit sendCmd(1,cmd);*/
}

void FormValveTest::on_toolButton_reset_clicked()
{
    if(isBeep)beep(50000);
    ui->spinBoxPos->setValue(1);
}

void FormValveTest::on_doubleSpinBox_delay_valueChanged(double arg1)
{
    if(isBeep)beep(50000);
    g_dialog->fileManager->config.delay[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1] = ui->doubleSpinBox_delay->value();
}

void FormValveTest::on_doubleSpinBox_pulseWidth_valueChanged(double arg1)
{
    if(isBeep)beep(50000);
    g_dialog->fileManager->config.pulse_width[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1] = ui->doubleSpinBox_pulseWidth->value();
}

void FormValveTest::on_spinBoxChannel_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+ui->spinBoxChannel->value()-1]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+ui->spinBoxChannel->value()-1]);
}

void FormValveTest::on_spinBoxGroup_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
}

void FormValveTest::on_spinBoxPos_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
}

