/********************************************************************************
** Form generated from reading UI file 'formshutdown.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSHUTDOWN_H
#define UI_FORMSHUTDOWN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormShutdown
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *FormShutdown)
    {
        if (FormShutdown->objectName().isEmpty())
            FormShutdown->setObjectName(QString::fromUtf8("FormShutdown"));
        FormShutdown->resize(400, 300);
        verticalLayout = new QVBoxLayout(FormShutdown);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(FormShutdown);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/shutdownBkg.png);"));

        verticalLayout->addWidget(label);


        retranslateUi(FormShutdown);

        QMetaObject::connectSlotsByName(FormShutdown);
    } // setupUi

    void retranslateUi(QWidget *FormShutdown)
    {
        FormShutdown->setWindowTitle(QApplication::translate("FormShutdown", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormShutdown: public Ui_FormShutdown {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSHUTDOWN_H
