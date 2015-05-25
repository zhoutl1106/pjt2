#include "formccdcurve.h"
#include "ui_formccdcurve.h"
#include <QPainter>
#include <QMessageBox>
#include <QMouseEvent>
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;
extern DialogAutoCloseMessageBox *bkgMsgBoxF;
extern DialogAutoCloseMessageBox *bkgMsgBoxE;

FormCCDCurve::FormCCDCurve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCCDCurve)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
    btnBkg = new MultiStatusToolButton(NULL,2,"前背景板","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);"
                                       ,"后背景板","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");

    QVBoxLayout *box = new QVBoxLayout;
    box->setMargin(0);
    box->addWidget(btnBkg);
    ui->widgetBkg->setLayout(box);

    btnCamera = new MultiStatusToolButton(NULL,2,"前相机","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);"
                                          ,"后相机","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");

    QVBoxLayout *box1 = new QVBoxLayout;
    box1->setMargin(0);
    box1->addWidget(btnCamera);
    ui->widgetCamera->setLayout(box1);
    mode = DRAW_MODE_INTERVAL;
    ui->horizontalScrollBar->setVisible(false);
    ui->toolButton_seperate->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");

    setMouseTracking(true);
    isMousePressed = false;
    delta = 0;
    timer = new QTimer(this);
    timer->setInterval(2000);
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    periodTimer = new QTimer(this);
    periodTimer->setInterval(2000);
    connect(periodTimer,SIGNAL(timeout()),this,SLOT(onPeriod()));

    upperbound = 2100;
    lowerbound = 0;
    range = new DialogDisplayRange;
    connect(range,SIGNAL(displayRange(int,int)),this,SLOT(updateRange(int,int)));

    msgQueryAngleF = new DialogAutoCloseMessageBox(NULL,"背景板","正在查询前电机角度","","",30,false);
    msgQueryAngleE = new DialogAutoCloseMessageBox(NULL,"背景板","正在查询后电机角度","","",30,false);

    drawStartY = 61;
    drawEndY = 421;
}


FormCCDCurve::~FormCCDCurve()
{
    delete ui;
}

void FormCCDCurve::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    isBeep = temp;
}

void FormCCDCurve::onTimer()
{
    timer->stop();
    if(periodTimer->isActive())
        on_toolButton_continue_clicked();
    on_toolButton_Clear_clicked();
}

void FormCCDCurve::updateCCD(QByteArray array)
{
    timer->stop();
    m_array = array;
    update();
}

void FormCCDCurve::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    //painter.fillRect(0,0,width(),height(),Qt::black);
    int startY = drawStartY;
    //        upperbound = 100;
    //        lowerbound = 0;
    int subHeight = drawEndY - drawStartY;
    if(m_array.length() >= 4100)
    {
        if(m_array.length() > 4100)
        {
            return;
        }

        short *p = (short*)m_array.data();
        p++;


        double tempV;
        QPainterPath pathUpper;
        if(mode == DRAW_MODE_INTERVAL)
        {
            pathUpper.moveTo(0,startY + subHeight);
            for(int i = 0;i<1024;i++)
            {
                tempV = p[i*2]>upperbound?upperbound:p[i*2];
                tempV = tempV<lowerbound?lowerbound:tempV;
                pathUpper.lineTo(i,subHeight + startY - (tempV - lowerbound) * subHeight / (upperbound-lowerbound));
                //qDebug()<<i<<(int)p[i*2]
                // <<tempV<<subHeight + startY - (tempV - lowerbound) * subHeight / (upperbound-lowerbound);
            }
            painter.drawPath(pathUpper);
        }
        else
        {
            pathUpper.moveTo(0,startY + subHeight);
            for(int i = 0;i<1024;i++)
            {
                tempV = p[i + ui->horizontalScrollBar->value()]>upperbound?upperbound:p[i + ui->horizontalScrollBar->value()];
                tempV = tempV<lowerbound?lowerbound:tempV;
                pathUpper.lineTo(i,subHeight + startY - (tempV - lowerbound) * subHeight / (upperbound-lowerbound));
            }
            painter.drawPath(pathUpper);
        }
    }
    int channel = btnCamera->currentIndex()*7 + ui->spinBox_channel->value() - 1;
    int drawUppder = subHeight + startY - (
                (255 - g_dialog->fileManager->config.accuracy[channel][0]) * 16 + 15
                - lowerbound) * subHeight / (upperbound-lowerbound);
    int drawLower = subHeight + startY - (
                g_dialog->fileManager->config.accuracy[channel][1] * 16
                - lowerbound) * subHeight / (upperbound-lowerbound);
    painter.setPen(QPen(QBrush(Qt::red),3));
    painter.drawLine(0,drawUppder,width(),drawUppder);
    painter.setPen(QPen(QBrush(Qt::blue),3));
    painter.drawLine(0,drawLower,width(),drawLower);
}

void FormCCDCurve::mousePressEvent(QMouseEvent *e)
{
    if(isBeep && e->y() > 61 && e->y() < 421)beep(50000);
    isMousePressed = true;
    lastPos = e->pos();
    //    qDebug()<<lastPos;
}

void FormCCDCurve::mouseReleaseEvent(QMouseEvent *e)
{
    if(isBeep && e->y() > drawStartY && e->y() < drawEndY)beep(50000);
    isMousePressed = false;
    //    delta += e->pos().y() - lastPos.y();
    //    if(delta > 4096)
    //        delta = 4096;
    //    if(delta < -4096)
    //        delta = -4096;
    //    qDebug()<<e->pos().y() - lastPos.y()<<delta;
    update();
}

void FormCCDCurve::mouseMoveEvent(QMouseEvent *e)
{
    if(m_array.length() != 4100)
        return;
    short *p = (short*)m_array.data();
    p++;
    QString str;
    if(mode == DRAW_MODE_INTERVAL)
        str =QString::number(e->pos().x()*2+1) + " : "
                + QString::number(p[e->pos().x()*2]);
    else
        str = QString::number(e->pos().x()+ui->horizontalScrollBar->value()+1) + " : "
                + QString::number(p[e->pos().x()+ui->horizontalScrollBar->value()]);
    ui->labelPos->setText(str);
}

void FormCCDCurve::on_toolButton_Clear_clicked()
{
    if(isBeep)beep(50000,11);
    m_array.clear();
    g_dialog->serialManager->buf485_1.clear();
    update();
}

void FormCCDCurve::on_horizontalScrollBar_valueChanged(int value)
{
    update();
}

void FormCCDCurve::on_spinBox_f_valueChanged(int arg1)
{
    if(isBeep)beep(50000,12);
}

void FormCCDCurve::on_spinBox_channel_valueChanged(int arg1)
{
    isBeep = false;
    on_toolButton_Clear_clicked();
    isBeep = true;
}

void FormCCDCurve::onPeriod()
{
    on_toolButton_transmit_clicked();
}

void FormCCDCurve::on_toolButton_SetRange_clicked()
{
    if(isBeep)beep(50000,13);
    range->show();
}

void FormCCDCurve::updateRange(int upper, int lower)
{
    upperbound = upper;
    lowerbound = lower;
    //qDebug()<<upperbound<<lowerbound;
    update();
    g_dialog->fileManager->config.showUpper = upper;
    g_dialog->fileManager->config.showLower = lower;
}

void FormCCDCurve::on_toolButton_clicked()
{
    if(isBeep)beep(50000,14);
    emit switchToPage(6);
}

void FormCCDCurve::on_toolButton_seperate_clicked()
{
    if(isBeep)beep(50000,15);
    mode = 2;
    ui->toolButton_seperate->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
    ui->horizontalScrollBar->setVisible(false);
    update();
}

void FormCCDCurve::on_toolButton_all_clicked()
{
    if(isBeep)beep(50000,16);
    mode = 0;
    ui->toolButton_seperate->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
    ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    ui->horizontalScrollBar->setVisible(true);
    update();
}

void FormCCDCurve::on_toolButton_clockwise_clicked()
{
    if(isBeep)beep(50000,17);
    char temp[3]={0x15,0x00};
    temp[1] = ui->spinBox_f->value();
    QByteArray cmd(temp,3);
    if(btnCamera->currentIndex() == 0)
    {
        g_dialog->serialManager->writeCmd(0,cmd);
        bkgMsgBoxF->setText("前背景板调整中");
        bkgMsgBoxF->setDelay(30);
        if(bkgMsgBoxF->exec() == QDialog::Accepted)
        {
            if(msgQueryAngleF->exec() == QDialog::Rejected)
            {
                DialogAutoCloseMessageBox box(NULL,"警告","查询前电机角度失败","确定","",5,true);
                box.exec();
            }
        }
        else
        {
            //timeout
            DialogAutoCloseMessageBox box(NULL,"警告","前背景板通信超时","确定","",5,true);
            box.exec();
        }
    }
    else
    {
        cmd.data()[0] = 0x17;
        g_dialog->serialManager->writeCmd(0,cmd);
        bkgMsgBoxE->setText("后背景板调整中");
        bkgMsgBoxE->setDelay(30);
        if(bkgMsgBoxE->exec() == QDialog::Accepted)
        {
            if(msgQueryAngleE->exec() == QDialog::Rejected)
            {
                DialogAutoCloseMessageBox box(NULL,"警告","查询后电机角度失败","确定","",5,true);
                box.exec();
            }
        }
        else
        {
            //timeout
            DialogAutoCloseMessageBox box(NULL,"警告","后背景板通信超时","确定","",5,true);
            box.exec();
        }
    }
}

void FormCCDCurve::on_toolButton_anticlockwise_clicked()
{
    if(isBeep)beep(50000,18);
    char temp[3]={0x16,0x00};
    temp[1] = ui->spinBox_f->value();
    QByteArray cmd(temp,3);
    if(btnCamera->currentIndex() == 0)
    {
        g_dialog->serialManager->writeCmd(0,cmd);
        bkgMsgBoxF->setText("前背景板调整中");
        bkgMsgBoxF->setDelay(30);
        if(bkgMsgBoxF->exec() == QDialog::Accepted)
        {
            if(msgQueryAngleF->exec() == QDialog::Rejected)
            {
                DialogAutoCloseMessageBox box(NULL,"警告","查询前电机角度失败","确定","",5,true);
                box.exec();
            }
        }
        else
        {
            //timeout
            DialogAutoCloseMessageBox box(NULL,"警告","前背景板通信超时","确定","",5,true);
            box.exec();
        }
    }
    else
    {
        cmd.data()[0] = 0x18;
        g_dialog->serialManager->writeCmd(0,cmd);
        bkgMsgBoxE->setText("后背景板调整中");
        bkgMsgBoxE->setDelay(30);
        if(bkgMsgBoxE->exec() == QDialog::Accepted)
        {
            if(msgQueryAngleE->exec() == QDialog::Rejected)
            {
                DialogAutoCloseMessageBox box(NULL,"警告","查询后电机角度失败","确定","",5,true);
                box.exec();
            }
        }
        else
        {
            //timeout
            DialogAutoCloseMessageBox box(NULL,"警告","后背景板通信超时","确定","",5,true);
            box.exec();
        }
    }
}

void FormCCDCurve::on_toolButton_transmit_clicked()
{
    if(isBeep)beep(50000,19);
    char temp[6]={0x0a,0x00};
    temp[1] = ui->spinBox_channel->value() + btnCamera->currentIndex() * 7;
    QByteArray cmd(temp,6);
    g_dialog->serialManager->writeCmd(1,cmd);
}

void FormCCDCurve::on_toolButton_continue_clicked()
{
    if(isBeep)beep(50000,20);
    if(periodTimer->isActive())
    {
        ui->toolButton_continue->setText("连续传输");
        ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
        periodTimer->stop();
    }
    else
    {
        ui->toolButton_continue->setText("停止传输");
        ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
        periodTimer->start();
    }
}
