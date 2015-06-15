#include "dialogdisplayrange.h"
#include "ui_dialogdisplayrange.h"
#include "../formkeyboard.h"

extern QString stylesheet;

DialogDisplayRange::DialogDisplayRange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDisplayRange)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

DialogDisplayRange::~DialogDisplayRange()
{
    delete ui;
}

void DialogDisplayRange::on_pushButton_2_clicked()
{
    reject();
}

void DialogDisplayRange::on_pushButton_clicked()
{
    if(ui->spinBoxLower->value() < ui->spinBoxUpper->value())
        emit displayRange(ui->spinBoxUpper->value(),ui->spinBoxLower->value());
    accept();
}

void DialogDisplayRange::setRange(int upper, int lower)
{
    ui->spinBoxLower->setValue(lower);
    ui->spinBoxUpper->setValue(upper);
}

void DialogDisplayRange::on_toolButton_clicked()
{
    FormKeyboard kbd(NULL,true);
    kbd.exec();
    ui->spinBoxUpper->setValue(kbd.getString().toInt());
}

void DialogDisplayRange::on_toolButton_2_clicked()
{
    FormKeyboard kbd(NULL,true);
    kbd.exec();
    ui->spinBoxLower->setValue(kbd.getString().toInt());
}
