#include "dialogmodemem.h"
#include "ui_dialogmodemem.h"
#include "../dialogautoclosemessagebox.h"
#include <QDebug>
#include "../dialog.h"

void beep(int length_us, int index = 0);
extern bool isBeep;
extern QString stylesheet;
extern Dialog *g_dialog;

DialogModeMem::DialogModeMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModeMem)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

DialogModeMem::~DialogModeMem()
{
    delete ui;
}

void DialogModeMem::setTitle(QString str)
{
    ui->labelTitle->setText(str);
}

void DialogModeMem::setModeAndMem(int mode, int index)
{
    switch(index)
    {
    case 1: ui->radioButton_1->setChecked(true); break;
    case 2: ui->radioButton_2->setChecked(true); break;
    case 3: ui->radioButton_3->setChecked(true); break;
    case 4: ui->radioButton_4->setChecked(true); break;
    case 5: ui->radioButton_5->setChecked(true); break;
    case 6: ui->radioButton_6->setChecked(true); break;
    case 7: ui->radioButton_7->setChecked(true); break;
    case 8: ui->radioButton_8->setChecked(true); break;
    }
    m_mode = mode;
}

void DialogModeMem::on_pushButtonRead_clicked()
{
    if(isBeep)beep(50000,35);
    int mem = 0;
    QString str = "是否读取\n";
    str += ui->labelTitle->text();
    if(ui->radioButton_1->isChecked())
    {
        mem = 1;
        str += "1参数？";
    }
    if(ui->radioButton_2->isChecked())
    {
        mem = 2;
        str += "2参数？";
    }
    if(ui->radioButton_3->isChecked())
    {
        mem = 3;
        str += "3参数？";
    }
    if(ui->radioButton_4->isChecked())
    {
        mem = 4;
        str += "4参数？";
    }
    if(ui->radioButton_5->isChecked())
    {
        mem = 5;
        str += "5参数？";
    }
    if(ui->radioButton_6->isChecked())
    {
        mem = 6;
        str += "6参数？";
    }
    if(ui->radioButton_7->isChecked())
    {
        mem = 7;
        str += "7参数？";
    }
    if(ui->radioButton_8->isChecked())
    {
        mem = 8;
        str += "8参数？";
    }
    DialogAutoCloseMessageBox box(NULL,"读取",str,"是","否",10,true);
    if(box.exec() == QDialog::Accepted)
    {
        g_dialog->fileManager->readConfig(m_mode,mem);
        g_dialog->fileManager->configChange();
        accept();
    }
}

void DialogModeMem::on_pushButtonWrite_clicked()
{
    if(isBeep)beep(50000,35);
    int mem = 0;
    QString str = "是否保存当前参数到\n";
    str += ui->labelTitle->text();
    if(ui->radioButton_1->isChecked())
    {
        mem = 1;
        str += "1中？";
    }
    if(ui->radioButton_2->isChecked())
    {
        mem = 2;
        str += "2中？";
    }
    if(ui->radioButton_3->isChecked())
    {
        mem = 3;
        str += "3中？";
    }
    if(ui->radioButton_4->isChecked())
    {
        mem = 4;
        str += "4中？";
    }
    if(ui->radioButton_5->isChecked())
    {
        mem = 5;
        str += "5中？";
    }
    if(ui->radioButton_6->isChecked())
    {
        mem = 6;
        str += "6中？";
    }
    if(ui->radioButton_7->isChecked())
    {
        mem = 7;
        str += "7中？";
    }
    if(ui->radioButton_8->isChecked())
    {
        mem = 8;
        str += "8中？";
    }
    DialogAutoCloseMessageBox box(NULL,"保存",str,"是","否",10,true);
    if(box.exec() == QDialog::Accepted)
    {
        qDebug()<<"ready to save"<<m_mode<<mem;
        g_dialog->fileManager->writeConfig(m_mode,mem);
        //g_dialog->fileManager->configChange();
        accept();
    }
}

void DialogModeMem::on_pushButtonCancel_clicked()
{
    if(isBeep)beep(50000,35);
    reject();
}

void DialogModeMem::on_radioButton_1_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_2_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_3_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_4_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_5_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_6_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_7_clicked()
{
    if(isBeep)beep(50000,35);
}

void DialogModeMem::on_radioButton_8_clicked()
{
    if(isBeep)beep(50000,35);
}
