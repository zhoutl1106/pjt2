/********************************************************************************
** Form generated from reading UI file 'formadmin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMADMIN_H
#define UI_FORMADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAdmin
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *widget;

    void setupUi(QWidget *FormAdmin)
    {
        if (FormAdmin->objectName().isEmpty())
            FormAdmin->setObjectName(QString::fromUtf8("FormAdmin"));
        FormAdmin->resize(1024, 520);
        horizontalLayout = new QHBoxLayout(FormAdmin);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(200, 80, 200, 80);
        label_2 = new QLabel(FormAdmin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        QFont font;
        font.setPointSize(24);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_2);

        widget = new QWidget(FormAdmin);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout->addWidget(widget);


        retranslateUi(FormAdmin);

        QMetaObject::connectSlotsByName(FormAdmin);
    } // setupUi

    void retranslateUi(QWidget *FormAdmin)
    {
        FormAdmin->setWindowTitle(QApplication::translate("FormAdmin", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormAdmin", "\350\257\267\350\276\223\345\205\245\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAdmin: public Ui_FormAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADMIN_H
