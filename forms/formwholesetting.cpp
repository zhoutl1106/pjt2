#include "formwholesetting.h"
#include "ui_formwholesetting.h"
#include <QVBoxLayout>
#include "../dialog.h"

extern bool isBeep;
void beep(int length_us, int index = 0);
extern QString stylesheet;
extern Dialog* g_dialog;

FormWholeSetting::FormWholeSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormWholeSetting)
{
    ui->setupUi(this);
    setWindowModality(Qt::ApplicationModal);
    setStyleSheet(stylesheet);
    list.append(ui->widget_1);
    list.append(ui->widget_2);
    list.append(ui->widget_3);
    list.append(ui->widget_4);
    list.append(ui->widget_5);
    list.append(ui->widget_6);
    list.append(ui->widget_7);
    for(int i = 0;i<7;i++)
    {
        btn[i] = new MultiStatusToolButton(NULL,3,"一次","font-size:20px;border-image: url(:/image/btnR.png);color: rgb(255, 255, 255);",
                                           "二次","font-size:20px;border-image: url(:/image/btnG.png);color: rgb(255, 255, 255);",
                                           "三次","font-size:20px;border-image: url(:/image/btnB.png);color: rgb(255, 255, 255);"
                                           );
        QVBoxLayout* box = new QVBoxLayout;
        box->addWidget(btn[i]);
        box->setMargin(0);
        list.at(i)->setLayout(box);
    }
}

FormWholeSetting::~FormWholeSetting()
{
    delete ui;
}

void FormWholeSetting::updateData()
{
    bool temp = isBeep;
    isBeep = false;

    for(int i = 0;i<7;i++)
    {
        btn[i]->setCurrentIndex(g_dialog->fileManager->config.times[i] - 1);
    }

    isBeep = temp;
}

void FormWholeSetting::on_toolButton_clicked()
{
    if(isBeep)beep(50000,101);

    for(int i = 0;i<7;i++)
    {
        g_dialog->fileManager->config.times[i] = g_dialog->fileManager->config.times[i + 7] = btn[i]->currentIndex() + 1;
    }

    emit switchToPage(6);
}
