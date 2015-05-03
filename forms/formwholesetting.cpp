#include "formwholesetting.h"
#include "ui_formwholesetting.h"

extern bool isBeep;
void beep(int);

FormWholeSetting::FormWholeSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormWholeSetting)
{
    ui->setupUi(this);
    setWindowModality(Qt::ApplicationModal);
}

FormWholeSetting::~FormWholeSetting()
{
    delete ui;
}

void FormWholeSetting::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    isBeep = temp;
}

void FormWholeSetting::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(6);
}
