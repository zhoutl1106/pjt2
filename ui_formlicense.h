/********************************************************************************
** Form generated from reading UI file 'formlicense.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLICENSE_H
#define UI_FORMLICENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

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
            FormLicense->setObjectName(QStringLiteral("FormLicense"));
        FormLicense->resize(1024, 520);
        FormLicense->setStyleSheet(QStringLiteral("QWidget #FormLicense{border-image: url(:/image/licenseBkg.png);}"));
        gridLayout = new QGridLayout(FormLicense);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(320, 150, 320, 80);
        widget = new QWidget(FormLicense);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 1, 1, 1, 1);

        lineEdit = new QLineEdit(FormLicense);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(FormLicense);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(FormLicense);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(FormLicense);

        QMetaObject::connectSlotsByName(FormLicense);
    } // setupUi

    void retranslateUi(QWidget *FormLicense)
    {
        FormLicense->setWindowTitle(QApplication::translate("FormLicense", "Form", 0));
        label->setText(QApplication::translate("FormLicense", "\347\224\250\346\210\267", 0));
        label_2->setText(QApplication::translate("FormLicense", "\350\264\246\345\217\267", 0));
    } // retranslateUi

};

namespace Ui {
    class FormLicense: public Ui_FormLicense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLICENSE_H
