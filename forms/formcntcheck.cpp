#include "formcntcheck.h"
#include "ui_formcntcheck.h"
#include <QPainter>
#include <QDebug>
#include <QElapsedTimer>
#include <QMouseEvent>
#include <QMessageBox>
#include <QFile>
#include <QVBoxLayout>
#include "../dialog.h"

void beep(int);
extern bool isBeep;
extern QString stylesheet;
extern Dialog* g_dialog;

FormCntCheck::FormCntCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormCntCheck)
{
    ui->setupUi(this);
    memset(data_state,STATE_UNKNOWN,MAX_GROUP_CNT*MAX_NUMBER_CNT);
    currentChannel = 1;
    currentPos = 0;
    //read threshold file
    QFile file("/dat/zt_threshold");
    if(file.exists())
    {
        file.open(QFile::ReadOnly);
    file.read((char*)&threshold,4);
    file.close();
    }
    else
        threshold = 1000000000;
    qDebug()<<"get threadhold "<<threshold;
    setMouseTracking(true);
    isOver = false;
    targetX = -1;
    targetY = -1;
    pic[0] = QPixmap(":/image/circleW.png");
    pic[1] = QPixmap(":/image/circleG.png");
    pic[2] = QPixmap(":/image/circleR.png");
    setStyleSheet(stylesheet);
    ui->spinBoxGroup->setMaximum(MAX_GROUP_CNT);
    ui->spinBoxNum->setMaximum(MAX_NUMBER_CNT);

    btn = new MultiStatusToolButton(NULL,2,"整体","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);"
                                    ,"整体","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");

    connect(btn,SIGNAL(clicked()),this,SLOT(onAllClicked()));
    QVBoxLayout *box = new QVBoxLayout;
    box->setMargin(0);
    box->addWidget(btn);
    ui->widget->setLayout(box);

    startX = 0;
    drawRow = 12;
    drawColumn = MAX_GROUP_CNT*MAX_NUMBER_CNT/drawRow;
    if((MAX_GROUP_CNT * MAX_NUMBER_CNT) % drawRow != 0)
        drawColumn++;
}

void FormCntCheck::showEvent(QShowEvent *e)
{
    currentChannel = 1;
    currentPos = 0;
    memset(data_state,STATE_UNKNOWN,MAX_GROUP_CNT*MAX_NUMBER_CNT);
    update();
    askCnt();
}

void FormCntCheck::onAllClicked()
{
    ui->spinBoxNum->setEnabled(!btn->currentIndex());
}

void FormCntCheck::askCnt()
{/*
    if(isBeep)beep(50000);
    QByteArray cmd;
    cmd.append((char)0x04);
    cmd.append((char)currentChannel);
    cmd.append((char)currentPos);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    emit sendCmd(2,cmd);*/
}

FormCntCheck::~FormCntCheck()
{
    delete ui;
}

void FormCntCheck::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    startY = ui->toolButton_query->pos().y() + ui->toolButton_query->height() + 20;
    subHeight = (ui->verticalSpacer->geometry().height() - + ui->toolButton_query->height() - 20)*1.0/drawRow;
    drawDistance = width()*1.0/drawColumn;
    radius = drawDistance > subHeight ? subHeight-1 : drawDistance-1;
    for(int i = 0;i<drawRow;i++)
    {
        for(int j = 0;j<drawColumn;j++)
        {
            if(i*drawColumn+j < MAX_GROUP_CNT * MAX_NUMBER_CNT)
                painter.drawPixmap(startX + j * drawDistance, startY + i * subHeight, radius, radius,pic[data_state[i][j]]);
        }
    }
    painter.setPen(QPen(QBrush(QColor(255,0,0)),3));
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(startX + targetY * drawDistance, startY + targetX * subHeight, radius+1, radius+1);
}

void FormCntCheck::mouseMoveEvent(QMouseEvent *e)
{
    int j = (e->pos().x() - startX ) / drawDistance;
    int i = (e->pos().y() - startY ) / subHeight;
    int channel = (i*drawColumn+j)/MAX_NUMBER_CNT+1;
    int pos = (i*drawColumn+j)%MAX_NUMBER_CNT+1;

    if(i >= 0 && i < drawRow && j >= 0 && j < drawColumn && channel <= MAX_GROUP_CNT && pos <= MAX_NUMBER_CNT)
    {
        if(data_state[channel-1][pos-1] != STATE_UNKNOWN)
            ui->lineEditCnt->setText(QString::number(data[channel-1][pos-1]));
        else
            ui->lineEditCnt->setText("未知");
        ui->lineEditGroup->setText(QString::number(channel));
        ui->lineEditNum->setText(QString::number(pos));
        targetX = i;
        targetY = j;
    }
    update();
}

void FormCntCheck::cntUpload(int channel, int pos, int value)
{/*
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
    askCnt();*/
}

void FormCntCheck::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(11);
}
