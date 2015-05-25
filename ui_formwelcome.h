/********************************************************************************
** Form generated from reading UI file 'formwelcome.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWELCOME_H
#define UI_FORMWELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormWelcome
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *FormWelcome)
    {
        if (FormWelcome->objectName().isEmpty())
            FormWelcome->setObjectName(QString::fromUtf8("FormWelcome"));
        FormWelcome->resize(400, 300);
        verticalLayout = new QVBoxLayout(FormWelcome);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(FormWelcome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/welcome.png);"));

        verticalLayout->addWidget(label);


        retranslateUi(FormWelcome);

        QMetaObject::connectSlotsByName(FormWelcome);
    } // setupUi

    void retranslateUi(QWidget *FormWelcome)
    {
        FormWelcome->setWindowTitle(QApplication::translate("FormWelcome", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormWelcome: public Ui_FormWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWELCOME_H
