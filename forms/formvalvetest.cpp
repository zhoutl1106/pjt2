#include "formvalvetest.h"
#include "ui_formvalvetest.h"
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;
extern void Sleep(int ms);

FormValveTest::FormValveTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormValveTest)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    btn = new MultiStatusToolButton(NULL,2,"前相机","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);"
                                    ,"后相机","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");

    connect(btn,SIGNAL(clicked()),this,SLOT(onCameraClicked()));
    QVBoxLayout *box = new QVBoxLayout;
    box->setMargin(0);
    box->addWidget(btn);
    ui->widgetCamera->setLayout(box);
    //ui->spinBoxGroup->setMaximum(14);
    //ui->spinBoxPos->setMaximum(64);
    timer = new QTimer;
    timer->setInterval(500);
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    autoTest = false;
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
    //ui->spinBoxChannel->setValue(1);
    ui->radioButton_1->setChecked(true);
    on_radioButton_1_clicked();
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->config.delay[0]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->config.pulse_width[0]);
    isBeep = temp;
}

void FormValveTest::on_toolButton_clicked()
{
    if(isBeep)beep(50000,58);
    updateData();
    emit switchToPage(6);
}

void FormValveTest::onCameraClicked()
{
    if(isBeep)beep(50000,59);
    bool temp = isBeep;
    isBeep = false;
    int channel;
    if(ui->radioButton_1->isChecked())
        channel = 1;
    if(ui->radioButton_2->isChecked())
        channel = 2;
    if(ui->radioButton_3->isChecked())
        channel = 3;
    if(ui->radioButton_4->isChecked())
        channel = 4;
    if(ui->radioButton_5->isChecked())
        channel = 5;
    if(ui->radioButton_6->isChecked())
        channel = 6;
    if(ui->radioButton_7->isChecked())
        channel = 7;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->config.delay[btn->currentIndex()*7 + channel - 1]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->config.pulse_width[btn->currentIndex()*7 + channel - 1]);
    isBeep = temp;
}


void FormValveTest::on_toolButton_singleTest_clicked()
{
    if(isBeep)beep(50000,60);
    char temp[6]={0x01,0x00};
    QByteArray cmd = QByteArray(temp,6);
    cmd.data()[1] = ui->spinBoxGroup->value();
    cmd.data()[2] = ui->spinBoxPos->value();
    g_dialog->serialManager->writeCmd(1,cmd);
}

void FormValveTest::onTimer()
{
    isBeep = false;
    on_toolButton_singleTest_clicked();
    int group = ui->spinBoxGroup->value();
    if(ui->spinBoxPos->value() == 64)
    {
        ui->spinBoxPos->setValue(1);
        group ++;
        if(group > 14)
        {
            on_toolButton_autoTest_clicked();
            return;
        }
        else
            ui->spinBoxGroup->setValue(group);
    }
    else
        ui->spinBoxPos->setValue(ui->spinBoxPos->value() + 1);
    isBeep = true;
}

void FormValveTest::on_toolButton_autoTest_clicked()
{
    if(isBeep)beep(50000,61);
    autoTest = !autoTest;
    if(autoTest)
    {
        ui->toolButton_autoTest->setStyleSheet("border-image: url(:/image/btnR.png); color: rgb(255, 255, 255);");
        //ui->spinBoxGroup->setValue(1);
        //ui->spinBoxPos->setValue(1);
        timer->start();
    }
    else
    {
        ui->toolButton_autoTest->setStyleSheet("border-image: url(:/image/btnG.png); color: rgb(255, 255, 255);");
        timer->stop();
    }
}

//void FormValveTest::on_toolButton_valveOn_clicked()
//{
//    if(isBeep)beep(50000,62);
//    emit switchToPage(14);
//}

void FormValveTest::on_toolButton_OK_clicked()
{
    if(isBeep)beep(50000,63);
    int channel;
    if(ui->radioButton_1->isChecked())
        channel = 1;
    if(ui->radioButton_2->isChecked())
        channel = 2;
    if(ui->radioButton_3->isChecked())
        channel = 3;
    if(ui->radioButton_4->isChecked())
        channel = 4;
    if(ui->radioButton_5->isChecked())
        channel = 5;
    if(ui->radioButton_6->isChecked())
        channel = 6;
    if(ui->radioButton_7->isChecked())
        channel = 7;
    char temp[6]={0x04,0x00};
    short tempDelay = g_dialog->fileManager->config.delay[btn->currentIndex()*7 + channel-1]*20.0;
    if(tempDelay % 2 != 0)
        tempDelay ++;
    /*qDebug()<<"formValveTest"<<g_dialog->fileManager->config.delay[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1]<<tempDelay
           <<g_dialog->fileManager->config.pulse_width[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1]<<tempPulseWidth;*/
    temp[1] = btn->currentIndex()*7 + channel;
    *((short*)(temp+2)) = tempDelay;

    QByteArray cmd(temp,6);
    g_dialog->serialManager->writeCmd(1,cmd);

    g_dialog->fileManager->config.delay[btn->currentIndex()*7 + channel-1] = ui->doubleSpinBox_delay->value();
}


void FormValveTest::on_toolButton_OK_2_clicked()
{
    if(isBeep)beep(50000,63);
    int channel;
    if(ui->radioButton_1->isChecked())
        channel = 1;
    if(ui->radioButton_2->isChecked())
        channel = 2;
    if(ui->radioButton_3->isChecked())
        channel = 3;
    if(ui->radioButton_4->isChecked())
        channel = 4;
    if(ui->radioButton_5->isChecked())
        channel = 5;
    if(ui->radioButton_6->isChecked())
        channel = 6;
    if(ui->radioButton_7->isChecked())
        channel = 7;
    char temp[6]={0x09,0x00};
    short tempPulseWidth = g_dialog->fileManager->config.pulse_width[btn->currentIndex()*7 + channel-1]*20.0;
    if(tempPulseWidth % 2 != 0)
        tempPulseWidth ++;
    /*qDebug()<<"formValveTest"<<g_dialog->fileManager->config.delay[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1]<<tempDelay
           <<g_dialog->fileManager->config.pulse_width[btn->currentIndex()*7 + ui->spinBoxChannel->value()-1]<<tempPulseWidth;*/
    temp[1] = channel;
    *((short*)(temp+4)) = tempPulseWidth;

    QByteArray cmd(temp,6);
    g_dialog->serialManager->writeCmd(1,cmd);
    g_dialog->fileManager->config.pulse_width[channel-1]
            = g_dialog->fileManager->config.pulse_width[7+channel-1]
            = ui->doubleSpinBox_pulseWidth->value();
}


//void FormValveTest::on_toolButton_reset_clicked()
//{
//    if(isBeep)beep(50000,64);
//    ui->spinBoxPos->setValue(1);
//}

void FormValveTest::on_doubleSpinBox_delay_valueChanged(double arg1)
{
    if(isBeep)beep(50000,65);
}

void FormValveTest::on_doubleSpinBox_pulseWidth_valueChanged(double arg1)
{
    if(isBeep)beep(50000,66);
}

void FormValveTest::on_spinBoxGroup_valueChanged(int arg1)
{
    if(isBeep)beep(50000,68);
    bool temp = isBeep;
    isBeep = false;
    if(arg1 == 0)
        ui->spinBoxGroup->setValue(14);
    if(arg1 == 15)
        ui->spinBoxGroup->setValue(1);
    isBeep = temp;
}

void FormValveTest::on_spinBoxPos_valueChanged(int arg1)
{
    if(isBeep)beep(50000,69);
    bool temp = isBeep;
    isBeep = false;
    if(arg1 == 0)
        ui->spinBoxPos->setValue(64);
    if(arg1 == 65)
        ui->spinBoxPos->setValue(1);
    isBeep = temp;
}

void FormValveTest::on_radioButton_1_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+0]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+0]);
    isBeep = true;
}

void FormValveTest::on_radioButton_2_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+1]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+1]);
    isBeep = true;
}

void FormValveTest::on_radioButton_3_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+2]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+2]);
    isBeep = true;
}

void FormValveTest::on_radioButton_4_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+3]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+3]);
    isBeep = true;
}

void FormValveTest::on_radioButton_5_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+4]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+4]);
    isBeep = true;
}

void FormValveTest::on_radioButton_6_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+5]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+5]);
    isBeep = true;
}

void FormValveTest::on_radioButton_7_clicked()
{
    if(isBeep)beep(50000,67);
    isBeep = false;
    ui->doubleSpinBox_delay->setValue(g_dialog->fileManager->
                                      config.delay[btn->currentIndex()*7+6]);
    ui->doubleSpinBox_pulseWidth->setValue(g_dialog->fileManager->
                                           config.pulse_width[btn->currentIndex()*7+6]);
    isBeep = true;
}
