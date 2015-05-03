#include "dialogdisplayrange.h"
#include "ui_dialogdisplayrange.h"

DialogDisplayRange::DialogDisplayRange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDisplayRange)
{
    ui->setupUi(this);
}

DialogDisplayRange::~DialogDisplayRange()
{
    delete ui;
}

void DialogDisplayRange::on_pushButton_2_clicked()
{
    close();
}

void DialogDisplayRange::on_pushButton_clicked()
{
    emit displayRange(ui->spinBoxUpper->value(),ui->spinBoxLower->value());
    close();
}

void DialogDisplayRange::setRange(int upper, int lower)
{
    ui->spinBoxLower->setValue(lower);
    ui->spinBoxUpper->setValue(upper);
}
