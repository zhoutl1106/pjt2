#include "dialogautoclosemessagebox.h"
#include "ui_dialogautoclosemessagebox.h"

extern bool isBeep;
void beep(int);

DialogAutoCloseMessageBox::DialogAutoCloseMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAutoCloseMessageBox)
{
    ui->setupUi(this);
}

DialogAutoCloseMessageBox::DialogAutoCloseMessageBox(QWidget *parent, QString title, QString text,
                                                     QString acceptText, QString rejectText, int delay_s, bool isTimeShow) :

    QDialog(parent),
    ui(new Ui::DialogAutoCloseMessageBox)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    m_delay_s = delay_s;
    ui->labelTitle->setText(title);
    ui->label->setText(text);
    ui->labelCntDown->setText(QString::number(m_delay_s) + " s");
    ui->pushButtonOK->setText(acceptText);
    ui->pushButtonCancel->setText(rejectText);
    timer = new QTimer;
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    timer->start();
    if(!isTimeShow)
    {
        ui->labelCntDown->setVisible(false);
        ui->pushButtonOK->setVisible(false);
        ui->pushButtonCancel->setVisible(false);
    }
}

DialogAutoCloseMessageBox::~DialogAutoCloseMessageBox()
{
    delete ui;
}

void DialogAutoCloseMessageBox::onTimer()
{
    m_delay_s --;
    if(m_delay_s >= 0)
        ui->labelCntDown->setText(QString::number(m_delay_s) + " s");
    else
        on_pushButtonCancel_clicked();
}

void DialogAutoCloseMessageBox::on_pushButtonOK_clicked()
{
    beep(50000);
    accept();
}

void DialogAutoCloseMessageBox::on_pushButtonCancel_clicked()
{
    beep(50000);
    reject();
}
