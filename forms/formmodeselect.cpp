#include "formmodeselect.h"
#include "ui_formmodeselect.h"
#include "../dialogautoclosemessagebox.h"
#include <QFile>
#include "../dialog.h"

extern Dialog* g_dialog;
void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;

FormModeSelect::FormModeSelect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormModeSelect)
{
    ui->setupUi(this);
    buttonBkgChecked = "font-size:50px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);";
    buttonBkgUnchecked = "font-size:50px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);";
    //setStyleSheet(stylesheet);
    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);
    dlgMem = new DialogModeMem;
}

FormModeSelect::~FormModeSelect()
{
    delete ui;
}

void FormModeSelect::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    qDebug()<<g_dialog->fileManager->mode<<g_dialog->fileManager->mem;
    setSelect(g_dialog->fileManager->mode,g_dialog->fileManager->mem);
    isBeep = temp;
}

void FormModeSelect::setSelect(int mode, int mem)
{
    this->mode = mode;
    if(mode > 5 || mode < 1 || mem > 8 || mem < 1)
        return;

    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);
    switch(mode)
    {
    case 1:ui->mode_1->setStyleSheet(buttonBkgChecked);break;
    case 2:ui->mode_2->setStyleSheet(buttonBkgChecked);break;
    case 3:ui->mode_3->setStyleSheet(buttonBkgChecked);break;
    case 4:ui->mode_4->setStyleSheet(buttonBkgChecked);break;
    case 5:ui->mode_5->setStyleSheet(buttonBkgChecked);break;
    }

    qDebug()<<"set select"<<mode<<mem;
}

void FormModeSelect::on_toolButton_clicked()
{
    beep(50000,29);
    emit switchToPage(2);
}

void FormModeSelect::on_mode_1_clicked()
{
    if(isBeep)beep(50000,31);
    mode = 1;
    setSelect(mode,1);
    dlgMem->setTitle("选异色记忆");
    dlgMem->setModeAndMem(mode,g_dialog->fileManager->mem);
    dlgMem->exec();
}

void FormModeSelect::on_mode_2_clicked()
{
    if(isBeep)beep(50000,32);
    mode = 2;
    setSelect(mode,1);
    dlgMem->setTitle("选腹白记忆");
    dlgMem->setModeAndMem(mode,g_dialog->fileManager->mem);
    dlgMem->exec();
}

void FormModeSelect::on_mode_3_clicked()
{
    if(isBeep)beep(50000,33);
    mode = 3;
    setSelect(mode,1);
    dlgMem->setTitle("黄白同选记忆");
    dlgMem->setModeAndMem(mode,g_dialog->fileManager->mem);
    dlgMem->exec();
}

void FormModeSelect::on_mode_4_clicked()
{
    if(isBeep)beep(50000,34);
    mode = 4;
    setSelect(mode,1);
    dlgMem->setTitle("选糯米记忆");
    dlgMem->setModeAndMem(mode,g_dialog->fileManager->mem);
    dlgMem->exec();
}

void FormModeSelect::on_mode_5_clicked()
{
    if(isBeep)beep(50000,35);
    mode = 5;
    setSelect(mode,1);
    dlgMem->setTitle("选黑米记忆");
    dlgMem->setModeAndMem(mode,g_dialog->fileManager->mem);
    dlgMem->exec();
}
