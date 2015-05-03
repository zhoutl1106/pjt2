#include "formshutdown.h"
#include "ui_formshutdown.h"

FormShutdown::FormShutdown(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormShutdown)
{
    ui->setupUi(this);
}

FormShutdown::~FormShutdown()
{
    delete ui;
}
