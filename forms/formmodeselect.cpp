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
    memBkgChecked = "font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);";
    memBkgUnChecked = "font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);";
    setStyleSheet(stylesheet);
    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);

    list.append(ui->mem_11);
    list.append(ui->mem_12);
    list.append(ui->mem_13);
    list.append(ui->mem_21);
    list.append(ui->mem_22);
    list.append(ui->mem_23);
    list.append(ui->mem_31);
    list.append(ui->mem_32);
    list.append(ui->mem_33);
    list.append(ui->mem_41);
    list.append(ui->mem_42);
    list.append(ui->mem_43);
    list.append(ui->mem_51);
    list.append(ui->mem_52);
    list.append(ui->mem_53);

//    on_mode_1_clicked();
}

FormModeSelect::~FormModeSelect()
{
    delete ui;
}

void FormModeSelect::updateData()
{
    bool temp = isBeep;
    isBeep = false;
    switch(g_dialog->fileManager->mode)
    {
    case 1:on_mode_1_clicked();break;
    case 2:on_mode_2_clicked();break;
    case 3:on_mode_3_clicked();break;
    case 4:on_mode_4_clicked();break;
    case 5:on_mode_5_clicked();break;
    }
    qDebug()<<g_dialog->fileManager->mode<<g_dialog->fileManager->mem;
    setSelect(g_dialog->fileManager->mode,g_dialog->fileManager->mem);
    isBeep = temp;
}

void FormModeSelect::setSelect(int mode, int mem)
{
    if(mode > 5 || mode < 1 || mem > 3 || mem < 1)
        return;
    ui->mem_11->setStyleSheet(memBkgUnChecked);
    ui->mem_12->setStyleSheet(memBkgUnChecked);
    ui->mem_13->setStyleSheet(memBkgUnChecked);
    ui->mem_21->setStyleSheet(memBkgUnChecked);
    ui->mem_22->setStyleSheet(memBkgUnChecked);
    ui->mem_23->setStyleSheet(memBkgUnChecked);
    ui->mem_31->setStyleSheet(memBkgUnChecked);
    ui->mem_32->setStyleSheet(memBkgUnChecked);
    ui->mem_33->setStyleSheet(memBkgUnChecked);
    ui->mem_41->setStyleSheet(memBkgUnChecked);
    ui->mem_42->setStyleSheet(memBkgUnChecked);
    ui->mem_43->setStyleSheet(memBkgUnChecked);
    ui->mem_51->setStyleSheet(memBkgUnChecked);
    ui->mem_52->setStyleSheet(memBkgUnChecked);
    ui->mem_53->setStyleSheet(memBkgUnChecked);
    list.at((mode-1)*3 + mem - 1)->setStyleSheet(memBkgChecked);
}

void FormModeSelect::on_toolButton_clicked()
{
    if(isBeep)beep(50000);
    emit switchToPage(2);
}

void FormModeSelect::on_toolButton_2_clicked()
{
    if(isBeep)beep(50000);
    DialogAutoCloseMessageBox box(NULL,"保存","是否保存模式参数","是","否",10,true);
    if(box.exec() == QDialog::Accepted)
    {
        g_dialog->fileManager->writeConfig(mode,mem);
        //g_dialog->fileManager->configChange();
    }
}

void FormModeSelect::on_mode_1_clicked()
{
    if(isBeep)beep(50000);
    mode = 1;
    mem = 1;
    ui->mode_1->setStyleSheet(buttonBkgChecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);
    setSelect(mode,mem);
}

void FormModeSelect::on_mode_2_clicked()
{
    if(isBeep)beep(50000);
    mode = 2;
    mem = 1;
    ui->mode_2->setStyleSheet(buttonBkgChecked);
    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);
    setSelect(mode,mem);
}

void FormModeSelect::on_mode_3_clicked()
{
    if(isBeep)beep(50000);
    mode = 3;
    mem = 1;
    ui->mode_3->setStyleSheet(buttonBkgChecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);
    setSelect(mode,mem);
}

void FormModeSelect::on_mode_4_clicked()
{
    if(isBeep)beep(50000);
    mode = 4;
    mem = 1;
    ui->mode_4->setStyleSheet(buttonBkgChecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    ui->mode_5->setStyleSheet(buttonBkgUnchecked);
    setSelect(mode,mem);
}

void FormModeSelect::on_mode_5_clicked()
{
    if(isBeep)beep(50000);
    mode = 5;
    mem = 1;
    ui->mode_5->setStyleSheet(buttonBkgChecked);
    ui->mode_2->setStyleSheet(buttonBkgUnchecked);
    ui->mode_3->setStyleSheet(buttonBkgUnchecked);
    ui->mode_4->setStyleSheet(buttonBkgUnchecked);
    ui->mode_1->setStyleSheet(buttonBkgUnchecked);
    setSelect(mode,mem);
}

void FormModeSelect::on_toolButton_3_clicked()
{
    if(isBeep)beep(50000);
    DialogAutoCloseMessageBox box(NULL,"保存","是否读取模式参数","是","否",10,true);
    if(box.exec() == QDialog::Accepted)
    {
        g_dialog->fileManager->readConfig(mode,mem);
        g_dialog->fileManager->configChange();
    }
}

void FormModeSelect::on_mem_11_clicked()
{
    if(mode == 1)
    {
        if(isBeep)beep(50000);
        mem = 1;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_12_clicked()
{
    if(mode == 1)
    {
        if(isBeep)beep(50000);
        mem = 2;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_13_clicked()
{
    if(mode == 1)
    {
        if(isBeep)beep(50000);
        mem = 3;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_21_clicked()
{
    if(mode == 2)
    {
        if(isBeep)beep(50000);
        mem = 1;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_22_clicked()
{
    if(mode == 2)
    {
        if(isBeep)beep(50000);
        mem = 2;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_23_clicked()
{
    if(mode == 2)
    {
        if(isBeep)beep(50000);
        mem = 3;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_31_clicked()
{
    if(mode == 3)
    {
        if(isBeep)beep(50000);
        mem = 1;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_32_clicked()
{
    if(mode == 3)
    {
        if(isBeep)beep(50000);
        mem = 2;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_33_clicked()
{
    if(mode == 3)
    {
        if(isBeep)beep(50000);
        mem = 3;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_41_clicked()
{
    if(mode == 4)
    {
        if(isBeep)beep(50000);
        mem = 1;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_42_clicked()
{
    if(mode == 4)
    {
        if(isBeep)beep(50000);
        mem = 2;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_43_clicked()
{
    if(mode == 4)
    {
        if(isBeep)beep(50000);
        mem = 3;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_51_clicked()
{
    if(mode == 5)
    {
        if(isBeep)beep(50000);
        mem = 1;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_52_clicked()
{
    if(mode == 5)
    {
        if(isBeep)beep(50000);
        mem = 2;
        setSelect(mode,mem);
    }
}

void FormModeSelect::on_mem_53_clicked()
{
    if(mode == 5)
    {
        if(isBeep)beep(50000);
        mem = 3;
        setSelect(mode,mem);
    }
}
