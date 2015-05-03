#include "formaccuracydetailadjust.h"
#include "ui_formaccuracydetailadjust.h"
#include <QDebug>
#include "../dialog.h"

extern Dialog* g_dialog;
void beep(int);
extern bool isBeep;


FormAccuracyDetailAdjust::FormAccuracyDetailAdjust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAccuracyDetailAdjust)
{
    ui->setupUi(this);
    /*connect(ui->horizontalScrollBar_1,SIGNAL(valueChanged(int)),ui->lcdNumber1,SLOT(display(int)));
    connect(ui->horizontalScrollBar_2,SIGNAL(valueChanged(int)),ui->lcdNumber2,SLOT(display(int)));
    connect(ui->horizontalScrollBar_3,SIGNAL(valueChanged(int)),ui->lcdNumber3,SLOT(display(int)));

    setWindowModality(Qt::ApplicationModal);*/
}

FormAccuracyDetailAdjust::~FormAccuracyDetailAdjust()
{
    delete ui;
}

void FormAccuracyDetailAdjust::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    isBeep = temp;
}

/*
void FormAccuracyDetailAdjust::setMode(QString str)
{
    ui->labelMode->setText(str);
}

void FormAccuracyDetailAdjust::setMem(int index)
{
    ui->labelMemory->setText("记忆"+QString::number(index));
}

void FormAccuracyDetailAdjust::setAccuracy(quint8* data)
{
    memcpy(m_accuracy,data,14*3*sizeof(quint8));
    ui->horizontalScrollBar_1->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0]);
    ui->horizontalScrollBar_2->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1]);
    ui->horizontalScrollBar_3->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2]);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::uploadValue(int channel, int delta)
{
    for(int i = 0;i<14;i++)
    {
        m_accuracy[i][channel] += delta;
    }
    ui->horizontalScrollBar_1->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0]);
    ui->horizontalScrollBar_2->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1]);
    ui->horizontalScrollBar_3->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2]);

    writeAccuracy();

    char buf1[6]={0};
    buf1[0] = 0x02;
    QByteArray cmd;
    for(int i = 0;i<14;i++)
    {
        buf1[1] = i+1;
        buf1[2] = m_accuracy[i][0];
        buf1[3] = m_accuracy[i][1];
        buf1[4] = m_accuracy[i][2];
        cmd = QByteArray(buf1,6);
        emit sendCmd(1,cmd);
        usleep(5000);
    }
}

void FormAccuracyDetailAdjust::writeAccuracy()
{
    memcpy(g_widget->fileManager->config.accuracy,m_accuracy,14*3*sizeof(quint8));
}
*/

void FormAccuracyDetailAdjust::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(6);
}
/*
void FormAccuracyDetailAdjust::on_toolButton_5_clicked()
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_1->setValue(ui->horizontalScrollBar_1->value()-1);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0] = ui->horizontalScrollBar_1->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value();
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_toolButton_6_clicked()
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_1->setValue(ui->horizontalScrollBar_1->value()+1);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0] = ui->horizontalScrollBar_1->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_horizontalScrollBar_1_sliderReleased()
{
    if(isBeep)beep(50000);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0] = ui->horizontalScrollBar_1->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_toolButton_8_clicked()
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_2->setValue(ui->horizontalScrollBar_2->value()-1);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1] = ui->horizontalScrollBar_2->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_toolButton_7_clicked()
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_2->setValue(ui->horizontalScrollBar_2->value()+1);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1] = ui->horizontalScrollBar_2->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_horizontalScrollBar_2_sliderReleased()
{
    if(isBeep)beep(50000);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1] = ui->horizontalScrollBar_2->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_toolButton_10_clicked()
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_3->setValue(ui->horizontalScrollBar_3->value()-1);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2] = ui->horizontalScrollBar_3->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_toolButton_9_clicked()
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_3->setValue(ui->horizontalScrollBar_3->value()+1);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2] = ui->horizontalScrollBar_3->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_horizontalScrollBar_3_sliderReleased()
{
    if(isBeep)beep(50000);
    m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2] = ui->horizontalScrollBar_3->value();
    char buf1[6]={0};
    buf1[0] = 0x02;
    buf1[1] = ui->camera->currentIndex()*7 + ui->spinBox->value()-1;
    buf1[2] = ui->horizontalScrollBar_1->value();
    buf1[3] = ui->horizontalScrollBar_2->value();
    buf1[4] = ui->horizontalScrollBar_3->value();
    QByteArray cmd;
    cmd = QByteArray(buf1,6);
    emit sendCmd(1,cmd);
    writeAccuracy();
}

void FormAccuracyDetailAdjust::on_camera_currentIndexChanged(int index)
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_1->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0]);
    ui->horizontalScrollBar_2->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1]);
    ui->horizontalScrollBar_3->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2]);
}

void FormAccuracyDetailAdjust::on_spinBox_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
    ui->horizontalScrollBar_1->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][0]);
    ui->horizontalScrollBar_2->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][1]);
    ui->horizontalScrollBar_3->setValue(m_accuracy[ui->camera->currentIndex()*7 + ui->spinBox->value()-1][2]);
}
*/
