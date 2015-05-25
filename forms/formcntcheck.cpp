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

void beep(int length_us, int index = 0);
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
    targetX = -1;
    targetY = -1;
    pic[0] = QPixmap(":/image/circleW.png");
    pic[1] = QPixmap(":/image/circleG.png");
    pic[2] = QPixmap(":/image/circleR.png");
    setStyleSheet(stylesheet);
    ui->spinBoxGroup->setMaximum(MAX_GROUP_CNT);
    ui->spinBoxNum->setMaximum(MAX_NUMBER_CNT);

    btn = new MultiStatusToolButton(NULL,2,"个数","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);"
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

    timer = new QTimer;
    timer->setInterval(500);
    connect(timer,SIGNAL(timeout()),this,SLOT(onSingleRequestTimeout()));
    singleRequestRetry = 0;

    msg = new DialogAutoCloseMessageBox(NULL,"错误","...","确定","",5,true);
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

void FormCntCheck::onSingleRequestTimeout()
{
    singleRequestRetry ++;
    if(singleRequestRetry > 3)
    {
        // error
        timer->stop();
        msg->exec();
        ui->toolButton_query->setStyleSheet("font-size:30px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);");
    }
    else
    {
        // retry
        char tmp[6] = {0x00};
        QByteArray temp = QByteArray(tmp,6);

        switch(lastQueryType)
        {
        case LAST_QUERY_RESET:
            if(btn->currentIndex())
            {
                //all
                temp.data()[0] = 0x01;
                temp.data()[1] = ui->spinBoxGroup->value();
                g_dialog->serialManager->writeCmd(2,temp);
            }
            else
            {
                //single
                temp.data()[0] = 0x02;
                temp.data()[1] = ui->spinBoxGroup->value();
                temp.data()[2] = ui->spinBoxNum->value();
                g_dialog->serialManager->writeCmd(2,temp);
            }
            break;
        case LAST_QUERY_ASK:
            askCnt();
            break;
        }
    }
}

void FormCntCheck::askCnt()
{
    QByteArray cmd;
    cmd.append((char)0x04);
    cmd.append((char)currentChannel);
    cmd.append((char)currentPos);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    cmd.append((char)0x00);
    g_dialog->serialManager->writeCmd(2,cmd);
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
{
    //qDebug()<<channel<<pos<<value;
    if(channel > MAX_GROUP_CNT || channel < 1 || pos > MAX_NUMBER_CNT || pos < 1)
    {
        DialogAutoCloseMessageBox box(NULL,"警告","查询结果错误，上传组号" + QString::number(channel) +"  孔位" + QString::number(pos)
                                      ,"确定","",5,true);
        box.exec();
        return;
    }

    data[channel-1][pos] = value;
    if(data[channel-1][pos] > threshold)
    {
        data_state[channel-1][pos] = STATE_BAD;
        DialogAutoCloseMessageBox box(NULL,"警告","喷阀工作次数超过设定值\n组号" + QString::number(channel)
                                      + "  孔位" + QString::number(pos)
                                      + "\n工作次数" + QString::number(value)
                                      ,"已处理","下次处理",10,true);
        box.exec();
        update();
        return;
    }
    else
        data_state[channel-1][pos] = STATE_GOOD;

    update();
    currentPos ++;
    if(currentPos > MAX_GROUP_CNT)
    {
        currentPos = 1;
        currentChannel ++;
    }

    if(currentChannel >= MAX_GROUP_CNT)
    {
        DialogAutoCloseMessageBox box(NULL,"通知","喷阀工作次数检测完毕" + QString::number(channel)
                                      + "  孔位" + QString::number(pos)
                                      + "\n工作次数" + QString::number(value)
                                      ,"确定","",5,true);
        box.exec();
        return;
    }

    askCnt();
}

void FormCntCheck::resetSuccess()
{
    timer->stop();
    DialogAutoCloseMessageBox box(NULL,"通知","清零完毕","确定","",5,true);
    box.exec();
}

void FormCntCheck::on_toolButton_clicked()
{
    if(isBeep)beep(50000,21);
    emit switchToPage(11);
}

void FormCntCheck::on_toolButton_reset_clicked()
{
    if(isBeep)beep(50000,22);
    char tmp[6] = {0x00};
    QByteArray temp = QByteArray(tmp,6);
    singleRequestRetry = 0;
    msg->setText("清零失败");
    msg->setDelay(3);
    lastQueryType = LAST_QUERY_RESET;
    if(btn->currentIndex())
    {
        //all
        temp.data()[0] = 0x01;
        temp.data()[1] = ui->spinBoxGroup->value();
        g_dialog->serialManager->writeCmd(2,temp);
    }
    else
    {
        //single
        temp.data()[0] = 0x02;
        temp.data()[1] = ui->spinBoxGroup->value();
        temp.data()[2] = ui->spinBoxNum->value();
        g_dialog->serialManager->writeCmd(2,temp);
    }
    timer->start();
}

void FormCntCheck::on_toolButton_query_clicked()
{
    if(isBeep)beep(50000,23);
    lastQueryType = LAST_QUERY_ASK;
    currentChannel = 1;
    currentPos = 1;
    singleRequestRetry = 0;
    msg->setText("查询失败");
    msg->setDelay(3);
    askCnt();
    ui->toolButton_query->setStyleSheet("font-size:30px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);");
    timer->start();
}
