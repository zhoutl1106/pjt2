#include "formadmin.h"
#include "ui_formadmin.h"
#include <QVBoxLayout>
#include "../dialog.h"

FormAdmin::FormAdmin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout;
    keyboard = new FormKeyboard;
    layout->addWidget(keyboard);
    ui->widget->setLayout(layout);
    connect(keyboard,SIGNAL(sendText(QString)),this,SLOT(getLicenseString(QString)));
}

FormAdmin::~FormAdmin()
{
    delete ui;
}


void FormAdmin::getLicenseString(QString str)
{
    if(str.compare("1") == 0)
        emit switchToPage(6);
    else
        emit switchToPage(2);
}
