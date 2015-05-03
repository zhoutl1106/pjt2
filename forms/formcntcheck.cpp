#include "formcntcheck.h"
#include "ui_formcntcheck.h"
#include <QPainter>
#include <QDebug>
#include <QElapsedTimer>
#include <QMouseEvent>
#include <QMessageBox>
#include <QFile>

void beep(int);
extern bool isBeep;

FormCntCheck::FormCntCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormCntCheck)
{
    ui->setupUi(this);
    memset(data_state,STATE_UNKNOWN,14*64);
    currentChannel = 1;
    currentPos = 0;
    //write threshold file
    QFile file("/dat/zt_threshold");
    file.open(QFile::ReadOnly);
    file.read((char*)&threshold,4);
    file.close();
    qDebug()<<"get threadhold "<<threshold;
    setMouseTracking(true);
    isOver = false;
    targetX = -1;
    targetY = -1;
}

void FormCntCheck::showEvent(QShowEvent *e)
{
    currentChannel = 1;
    currentPos = 0;
    memset(data_state,STATE_UNKNOWN,14*64);
    update();
    askCnt();
}

void FormCntCheck::askCnt()
{
    if(isBeep)beep(50000);
    QByteArray cmd;
    cmd.append((char)0x04);
    cmd.append((char)currentChannel);
    cmd.append((char)currentPos);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    emit sendCmd(2,cmd);
}

FormCntCheck::~FormCntCheck()
{
    delete ui;
}

void FormCntCheck::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    int startX = 55;
    int startY = ui->verticalSpacer->geometry().y() + 20;
    int subHeight = 35;
    int drawDistance = 30;
    int radius = 30;
    for(int i = 0;i<7;i++)
    {
        painter.setPen(Qt::blue);
        painter.drawLine(0,startY + 2 * i * subHeight + 68,1024,startY + 2 * i * subHeight + 68);
        painter.setPen(Qt::black);
        painter.drawText(20,startY + 2 * i * subHeight + 40,QString::number(i+1));
        for(int j = 0;j<32;j++)
        {
            //qDebug()<<startX + j * 6<<startY + i * subHeight<<(int)p[i*128+j];
            switch(data_state[i][j])
            {
            case 0:
                painter.setBrush(Qt::gray);
                painter.drawEllipse(startX + j * drawDistance, startY + 2 * i * subHeight, radius, radius);
                break;
            case 1:
                painter.setBrush(Qt::green);
                painter.drawEllipse(startX + j * drawDistance, startY + 2 * i * subHeight, radius, radius);
                break;
            case 2:
                painter.setBrush(Qt::red);
                painter.drawEllipse(startX + j * drawDistance, startY + 2 * i * subHeight, radius, radius);
                break;
            }
            switch(data_state[i][j+32])
            {
            case 0:
                painter.setBrush(Qt::gray);
                painter.drawEllipse(startX + j * drawDistance, startY + (2 * i+1) * subHeight, radius, radius);
                break;
            case 1:
                painter.setBrush(Qt::green);
                painter.drawEllipse(startX + j * drawDistance, startY + (2 * i+1) * subHeight, radius, radius);
                break;
            case 2:
                painter.setBrush(Qt::red);
                painter.drawEllipse(startX + j * drawDistance, startY + (2 * i+1) * subHeight, radius, radius);
                break;
            }
        }
    }
    painter.setPen(QPen(QBrush(QColor(255,0,0)),3));
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(startX + targetY * drawDistance, startY + targetX * subHeight, radius+1, radius+1);
}

void FormCntCheck::mouseMoveEvent(QMouseEvent *e)
{
    int startX = 55;
    int startY = ui->verticalSpacer->geometry().y() + 20;
    int subHeight = 35;
    int j = (e->pos().x() - startX ) / 30;
    int i = (e->pos().y() - startY ) / subHeight;
    int channel = i/2 + 1;
    int pos = (i%2)*32 + j + 1;
    if(i >= 0 && i < 14 && j >= 0 && j < 32)
    {
        QString str;
        //        str = QString::number(i) + "," + QString::number(j);
        if(data_state[channel-1][pos-1] != STATE_UNKNOWN)
            str = "("+QString::number(channel)
                    + "," + QString::number(pos)
                    + ") : " + QString::number(data[channel-1][pos-1]);
        else
            str = "("+QString::number(channel)
                    + "," + QString::number(pos)
                    + ") : 未知";
        ui->labelPos->setText(str);
        targetX = i;
        targetY = j;
    }
    update();
}

void FormCntCheck::cntUpload(int channel, int pos, int value)
{
    //qDebug()<<channel<<pos<<value;
    data[channel-1][pos] = value;
    if(data[channel-1][pos] > threshold)
    {
        data_state[channel-1][pos] = STATE_BAD;
        isOver = true;
    }
    else
        data_state[channel-1][pos] = STATE_GOOD;

    update();
    currentPos ++;
    if(currentPos > 63 && currentChannel >= 7)
    {
        if(isOver)
            QMessageBox::critical(this,"警告","喷阀工作次数超过设定值");
        else
        {
            QMessageBox::information(this,"通知","喷阀工作次数检测完毕");
            this->close();
        }
        return;
    }
    if(currentPos > 63)
    {
        currentPos = 0;
        currentChannel ++;
    }
    askCnt();
}

void FormCntCheck::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(6);
}

void FormCntCheck::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000);
    currentChannel = 1;
    currentPos = 0;
    memset(data_state,STATE_UNKNOWN,14*64);
    update();
    askCnt();
}
