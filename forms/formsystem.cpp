#include "formsystem.h"
#include "ui_formsystem.h"

void beep(int);
extern bool isBeep;
extern QString stylesheet;

FormSystem::FormSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSystem)
{
    ui->setupUi(this);
    setStyleSheet(stylesheet);
}

FormSystem::~FormSystem()
{
    delete ui;
}

void FormSystem::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(2);
}

void FormSystem::on_toolButton_7_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(9);
}

void FormSystem::on_toolButton_5_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(11);
}

void FormSystem::on_toolButton_8_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(13);
}

void FormSystem::on_toolButton_4_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(10);
}

void FormSystem::on_toolButton_9_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(12);
}
