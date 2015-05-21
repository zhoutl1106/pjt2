#include "formkeyboard.h"
#include "ui_formkeyboard.h"
#include <QDebug>

void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;

FormKeyboard::FormKeyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormKeyboard)
{
    ui->setupUi(this);
    str.clear();
    setStyleSheet(stylesheet);
}

FormKeyboard::~FormKeyboard()
{
    delete ui;
}

QString FormKeyboard::getString()
{
    //qDebug()<<"get string";
    return str;
}

void FormKeyboard::on_pushButton_C_clicked()
{
    if(isBeep)beep(50000);
    str.remove(str.length()-1,1);
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_OK_clicked()
{
    if(isBeep)beep(50000);
    emit sendText(ui->lineEdit->text());
    str.clear();
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_0_clicked()
{
    if(isBeep)beep(50000);
    str.append('0');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_1_clicked()
{
    if(isBeep)beep(50000);
    str.append('1');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_2_clicked()
{
    if(isBeep)beep(50000);
    str.append('2');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_3_clicked()
{
    if(isBeep)beep(50000);
    str.append('3');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_4_clicked()
{
    if(isBeep)beep(50000);
    str.append('4');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_5_clicked()
{
    if(isBeep)beep(50000);
    str.append('5');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_6_clicked()
{
    if(isBeep)beep(50000);
    str.append('6');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_7_clicked()
{
    if(isBeep)beep(50000);
    str.append('7');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_8_clicked()
{
    if(isBeep)beep(50000);
    str.append('8');
    ui->lineEdit->setText(str);
}

void FormKeyboard::on_pushButton_9_clicked()
{
    if(isBeep)beep(50000);
    str.append('9');
    ui->lineEdit->setText(str);
}
