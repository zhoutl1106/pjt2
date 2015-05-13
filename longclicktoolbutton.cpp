#include "longclicktoolbutton.h"
#include <QDebug>

LongClickToolButton::LongClickToolButton(QWidget *parent, int index, int delta):QToolButton(parent)
{
    m_index = index;
    m_delta = delta;
    if(delta > 0)
        setStyleSheet("QToolButton {border-image : url(:/upG.png);} QToolButton::pressed {border-image : url(:/upR.png);}");
    else
        setStyleSheet("QToolButton {border-image : url(:/downG.png);} QToolButton::pressed {border-image : url(:/downR.png);}");
    connect(this,SIGNAL(clicked()),this,SLOT(onclick()));
    connect(this,SIGNAL(pressed()),this,SLOT(pressed()));
    connect(this,SIGNAL(released()),this,SLOT(released()));
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
}

LongClickToolButton::~LongClickToolButton()
{

}

void LongClickToolButton::paintEvent(QPaintEvent *p)
{
    QToolButton::paintEvent(p);
}

void LongClickToolButton::pressed()
{
    qDebug()<<"press";
    timer->setInterval(300);
    timer->start();
}

void LongClickToolButton::released()
{
    qDebug()<<"release";
    timer->stop();
}

void LongClickToolButton::onclick()
{
    qDebug()<<"click";
    emit longClick(m_index,m_delta);
}

void LongClickToolButton::onTimer()
{
    timer->setInterval(100);
    onclick();
}
