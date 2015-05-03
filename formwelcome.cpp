#include "formwelcome.h"
#include "ui_formwelcome.h"
#include <QMessageBox>
#include <QTimer>
#include "widget.h"

extern Widget* g_widget;
void beep(int);
extern bool isBeep;


FormWelcome::FormWelcome(int type,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormWelcome)
{
    m_type = type;
    ui->setupUi(this);
    account = 0;
    setModal(true);
    ui->stackedWidget->setCurrentIndex(0);
}

FormWelcome::~FormWelcome()
{
    delete ui;
}

void FormWelcome::showEvent(QShowEvent *e)
{
    show();
    if(m_type)
    {
        QFile file("/dat/zt_account");
        if(file.exists())
        {
            ui->stackedWidget->setCurrentIndex(1);
            QTimer::singleShot(200,this,SLOT(onClose()));
        }
    }
}

void FormWelcome::setPassword(int pass)
{
    password = pass;
}

void FormWelcome::on_toolButton_1_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 1;
    ui->lineEdit->setText(QString::number(account));
}

void FormWelcome::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 2;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_3_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 3;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_4_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 4;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_5_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 5;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_6_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 6;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_7_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 7;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_8_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 8;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_9_clicked()
{
    if(isBeep)beep(50000);
    account = account*10 + 9;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_0_clicked()
{
    if(isBeep)beep(50000);
    account = account*10;
    ui->lineEdit->setText(QString::number(account));
}


void FormWelcome::on_toolButton_back_clicked()
{
    if(isBeep)beep(50000);
    account = account/10;
    ui->lineEdit->setText(QString::number(account));
}

void FormWelcome::on_toolButton_OK_clicked()
{
    if(isBeep)beep(50000);
    if(account/1000 == password)
    {
        QFile file("/dat/zt_account");
        file.open(QFile::WriteOnly);
        file.write((char*)&account);
        file.close();
        emit accessed();
        account = 0;
        ui->lineEdit->setText("");
        ui->stackedWidget->setCurrentIndex(1);
        QTimer::singleShot(200,this,SLOT(onClose()));
    }
    else
        QMessageBox::warning(NULL,"警告","帐号错误");
}

void FormWelcome::onClose()
{
    if(m_type)
        g_widget->fileManager->getConfig();
    close();
    ui->stackedWidget->setCurrentIndex(0);
}

void FormWelcome::updateStatus(bool exit, QString str)
{
    if(exit)
    {
        close();
    }
    else
    {
        ui->label_2->setText(str);
    }
}
