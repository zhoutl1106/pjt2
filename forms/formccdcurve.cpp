#include "formccdcurve.h"
#include "ui_formccdcurve.h"
#include <QPainter>
#include <QMessageBox>
#include <QMouseEvent>
#include "../dialog.h"
#include <QVBoxLayout>

extern Dialog* g_dialog;
void beep(int);
extern bool isBeep;
extern QString stylesheet;

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
    mode = 2;
    ui->toolButton_seperate->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");

    /*setMouseTracking(true);
    setWindowModality(Qt::ApplicationModal);
    isMousePressed = false;
    delta = 0;
    timer = new QTimer(this);
    timer->setInterval(1500);
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    periodTimer = new QTimer(this);
    periodTimer->setInterval(2000);
    connect(periodTimer,SIGNAL(timeout()),this,SLOT(onPeriod()));
    savePosTimer = new QTimer(this);
    savePosTimer->setInterval(30000);
    connect(savePosTimer,SIGNAL(timeout()),this,SLOT(onSavePosTimeOut()));
*/
    upperbound = 2100;
    lowerbound = 0;
    range = new DialogDisplayRange;
    connect(range,SIGNAL(displayRange(int,int)),this,SLOT(updateRange(int,int)));
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

/*
void FormCCDCurve::onTimer()
{
    timer->stop();
    if(periodTimer->isActive())
        on_toolButton_Clear_4_clicked();
    QMessageBox::warning(this,"警告","数据长度错误，请重试");
    on_toolButton_Clear_clicked();
}
void FormCCDCurve::setMode(QString str)
{
    //    ui->labelMode->setText(str);
}

void FormCCDCurve::setMem(int index)
{
    //    ui->labelMemory->setText("记忆"+QString::number(index));
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
    int startY = 61;
    //        upperbound = 100;
    //        lowerbound = 0;
    int subHeight = 360;
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
        if(mode == 2)
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
    int channel = ui->camera_2->currentIndex()*7 + ui->spinBox_channel->value() - 1;
    int drawUppder = subHeight + startY - (
                (255 - g_widget->fileManager->config.accuracy[channel][0]) * 16 + 15
                - lowerbound) * subHeight / (upperbound-lowerbound);
    int drawLower = subHeight + startY - (
                g_widget->fileManager->config.accuracy[channel][1] * 16
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
    if(isBeep && e->y() > 61 && e->y() < 421)beep(50000);
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
    if(mode == 2)
        str =QString::number(e->pos().x()*2+1) + " : "
                + QString::number(p[e->pos().x()*2]);
    else
        str = QString::number(e->pos().x()+ui->horizontalScrollBar->value()+1) + " : "
                + QString::number(p[e->pos().x()+ui->horizontalScrollBar->value()]);
    ui->labelPos->setText(str);
}

void FormCCDCurve::on_toolButton_Clear_clicked()
{
    if(isBeep)beep(50000);
    m_array.clear();
    g_widget->serialManager->buf485_1.clear();
    update();
}

void FormCCDCurve::on_horizontalScrollBar_valueChanged(int value)
{
    update();
}

void FormCCDCurve::on_spinBox_f_valueChanged(int arg1)
{
    if(isBeep)beep(50000);
}

void FormCCDCurve::on_toolButton_Clear_8_clicked()
{
    if(isBeep)beep(50000);
    char temp[6] = {0x0a,0x00};
    temp[1] = ui->camera_2->currentIndex()*7 + ui->spinBox_channel->value();
    g_widget->serialManager->buf485_1.clear();
    timer->start();
    QByteArray cmd(temp,6);
    emit sendCmd(1,cmd);
}

void FormCCDCurve::on_toolButton_clockwise_f_clicked()
{
    if(isBeep)beep(50000);
    char temp[3]={0x15,0x00};
    if(ui->camera->currentIndex() == 0)
    {
        temp[1] = ui->spinBox_f->value();
        QByteArray cmd(temp,3);
        emit sendCmd(0,cmd);
        g_widget->dlgBkg->status = 0x02;
        g_widget->dlgBkg->show();
    }
    else
    {
        temp[1] = ui->spinBox_f->value();
        QByteArray cmd(temp,3);
        emit sendCmd(0,cmd);
        g_widget->dlgBkg->status = 0x01;
        g_widget->dlgBkg->show();
    }
}


void FormCCDCurve::on_toolButton_anticlockwise_f_clicked()
{
    if(isBeep)beep(50000);
    char temp[3]={0x16,0x00};
    if(ui->camera->currentIndex() == 0)
    {
        temp[1] = ui->spinBox_f->value();
        QByteArray cmd(temp,3);
        emit sendCmd(0,cmd);
        g_widget->dlgBkg->status = 0x02;
        g_widget->dlgBkg->show();
    }
    else
    {
        temp[1] = ui->spinBox_f->value();
        QByteArray cmd(temp,3);
        emit sendCmd(0,cmd);
        g_widget->dlgBkg->status = 0x01;
        g_widget->dlgBkg->show();
    }
}

void FormCCDCurve::on_spinBox_channel_valueChanged(int arg1)
{
    isBeep = false;
    g_widget->formSystem->formPixelDivide->setLastChannel(ui->camera_2->currentIndex()*7 + ui->spinBox_channel->value());
    on_toolButton_Clear_clicked();
    isBeep = true;
}

void FormCCDCurve::onPeriod()
{
    on_toolButton_Clear_8_clicked();
}

void FormCCDCurve::on_toolButton_Clear_4_clicked()
{
    if(isBeep)beep(50000);
    if(periodTimer->isActive())
    {
        ui->toolButton_Clear_4->setText("连续传输");
        periodTimer->stop();
    }
    else
    {
        ui->toolButton_Clear_4->setText("停止传输");
        periodTimer->start();
    }
}*/

void FormCCDCurve::on_toolButton_SetRange_clicked()
{
    if(isBeep)beep(50000);
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
    if(isBeep)beep(50000);
    emit switchToPage(6);
}
/*
void FormCCDCurve::on_toolButton_anticlockwise_f_2_clicked()
{
    if(isBeep)beep(50000);
    char temp[3] = {0x19,0x00};
    QByteArray cmd(temp,3);
    emit sendCmd(0,cmd);
    savePosTimer->start();
    ask1pos = false;
}

void FormCCDCurve::onSavePosTimeOut()
{
    char temp[3] = {0x1a,0x00};
    if(!ask1pos)
    {
        QMessageBox::warning(NULL,"警告","前电机通信超时，开始查询后电机角度");
        g_widget->fileManager->config.angle_front = -1;
        temp[0]=0x1a;
        QByteArray cmd1(temp,3);
        emit sendCmd(0,cmd1);
        ask1pos = true;
        savePosTimer->start();
    }
    else
    {
        QMessageBox::warning(NULL,"警告","后电机通信超时");
        g_widget->fileManager->config.angle_back = -1;
        if(g_widget->fileManager->config.angle_front != -1)
            QMessageBox::information(NULL,"通知","前电机角度：" + QString::number(g_widget->fileManager->config.angle_front)
                                     +"\n后电机角度：" + QString::number(g_widget->fileManager->config.angle_back));
        savePosTimer->stop();
    }

}

void FormCCDCurve::getPos(int motor, int angle)
{
    char temp[3] = {0x1a,0x00};
    if(motor == 0)
    {
        g_widget->fileManager->config.angle_front = angle;
        temp[0]=0x1a;
        QByteArray cmd1(temp,3);
        emit sendCmd(0,cmd1);
        ask1pos = true;
        savePosTimer->start();
    }
    else
    {
        savePosTimer->stop();
        g_widget->fileManager->config.angle_back = angle;
        QMessageBox::information(NULL,"通知","前电机角度：" + QString::number(g_widget->fileManager->config.angle_front)
                                 +"\n后电机角度：" + QString::number(g_widget->fileManager->config.angle_back));

        if(g_widget->fileManager->config.angle_front != -1
                && g_widget->fileManager->config.angle_back != -1)
            g_widget->fileManager->writeLastConfig();

    }
}


void FormCCDCurve::on_camera_2_currentIndexChanged(int index)
{
    isBeep = false;
    g_widget->formSystem->formPixelDivide->setLastChannel(ui->camera_2->currentIndex()*7 + ui->spinBox_channel->value());
    on_toolButton_Clear_clicked();
    isBeep = true;
}
*/

void FormCCDCurve::on_toolButton_seperate_clicked()
{
    if(isBeep)beep(50000);
    mode = 2;
    ui->toolButton_seperate->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
    ui->horizontalScrollBar->setEnabled(false);
    update();
}

void FormCCDCurve::on_toolButton_all_clicked()
{
    if(isBeep)beep(50000);
    mode = 0;
    ui->toolButton_seperate->setStyleSheet("border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
    ui->toolButton_all->setStyleSheet("border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    ui->horizontalScrollBar->setEnabled(true);
    update();
}
