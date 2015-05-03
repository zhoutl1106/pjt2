#include "formlicense.h"
#include "ui_formlicense.h"
#include <QVBoxLayout>
#include "../dialog.h"
#include <QTime>

extern Dialog* g_dialog;

FormLicense::FormLicense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormLicense)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout;
    keyboard = new FormKeyboard;
    layout->addWidget(keyboard);
    ui->widget->setLayout(layout);
    qsrand(QTime::currentTime().msecsSinceStartOfDay());
    int randomNum = qrand()*89999999.0/RAND_MAX + 10000000;
    ui->lineEdit->setText(QString::number(randomNum));
    connect(keyboard,SIGNAL(sendText(QString)),this,SLOT(getLicenseString(QString)));
}

FormLicense::~FormLicense()
{
    delete ui;
}

void FormLicense::getLicenseString(QString str)
{
    if(g_dialog->fileManager->passwardReceived(ui->lineEdit->text(),str))
        emit switchToPage(0);
}
