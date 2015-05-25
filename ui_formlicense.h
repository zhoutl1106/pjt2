/********************************************************************************
** Form generated from reading UI file 'formlicense.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLICENSE_H
#define UI_FORMLICENSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLicense
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *FormLicense)
    {
        if (FormLicense->objectName().isEmpty())
            FormLicense->setObjectName(QString::fromUtf8("FormLicense"));
        FormLicense->resize(1024, 520);
        FormLicense->setStyleSheet(QString::fromUtf8("QWidget #FormLicense{border-image: url(:/image/licenseBkg.png);}"));
        gridLayout = new QGridLayout(FormLicense);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(320, 150, 320, 80);
        widget = new QWidget(FormLicense);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 1, 1, 1, 1);

        lineEdit = new QLineEdit(FormLicense);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(FormLicense);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(FormLicense);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(FormLicense);

        QMetaObject::connectSlotsByName(FormLicense);
    } // setupUi

    void retranslateUi(QWidget *FormLicense)
    {
        FormLicense->setWindowTitle(QApplication::translate("FormLicense", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormLicense", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormLicense", "\350\264\246\345\217\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormLicense: public Ui_FormLicense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLICENSE_H
