#include "formwholesetting.h"
#include "ui_formwholesetting.h"
#include <QVBoxLayout>
#include "../dialog.h"
#include <QFileDialog>
#include <QNetworkInterface>

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
        //qDebug()<<"select times"<<i<<g_dialog->fileManager->config.times[i] - 1;
        btn[i]->setCurrentIndex(g_dialog->fileManager->config.times[i] - 1);
    }

    QList<QHostAddress> address =
            QNetworkInterface::allAddresses();
    foreach (QHostAddress addr, address) {
        if(addr.toString().startsWith("192"))
        {
            ui->spinBox->setValue(addr.toString().right(3).toInt());
            break;
        }
    }
    //qDebug()<<"ip"<<info.addresses().first().toString();

    isBeep = temp;
}

void FormWholeSetting::on_toolButton_clicked()
{
    if(isBeep)beep(50000,101);

    for(int i = 0;i<7;i++)
    {
        g_dialog->fileManager->config.times[i] = g_dialog->fileManager->config.times[i + 7] = btn[i]->currentIndex() + 1;
        //qDebug()<<"times"<<i<<g_dialog->fileManager->config.times[i];
    }
    updateData();
    emit switchToPage(6);
}

void FormWholeSetting::on_toolButtonMain_clicked()
{
    if(isBeep)beep(50000,101);
    QString str = QFileDialog::getOpenFileName();
    if(str.isEmpty())
        return;
    QString str1("cp ");
    str1 += str + " /pjt2";
    system(str1.toStdString().c_str());
    DialogAutoCloseMessageBox box1(NULL,"关机","主程序更新成功\n请重启工控机","是","",10,true);
    box1.exec();
    emit switchToPage(7);
}

void FormWholeSetting::on_toolButtonCfg_clicked()
{
    if(isBeep)beep(50000,101);
    QString str = QFileDialog::getExistingDirectory();
    if(str.isEmpty())
        return;
    system("rm -rf /dat/zt_config*");
    QString str1("cp ");
    if(!str.endsWith('/'))
        str.append('/');
    str1 += str + "* /dat";
    system(str1.toStdString().c_str());
    DialogAutoCloseMessageBox box1(NULL,"关机","配置文件更新成功\n请重启工控机","是","",10,true);
    box1.exec();
    emit switchToPage(7);
}

void FormWholeSetting::on_toolButtonIP_clicked()
{
    if(isBeep)beep(50000,101);
    QString str("source /dat/writeIp ");
    str += QString::number(ui->spinBox->value());
    system(str.toStdString().c_str());
    DialogAutoCloseMessageBox box1(NULL,"关机","IP地址更新成功\n请重启工控机","是","",10,true);
    box1.exec();
    emit switchToPage(7);
}

void FormWholeSetting::on_spinBox_valueChanged(int arg1)
{
    if(isBeep)beep(50000,101);
}
