/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *labelDate;
    QLabel *labelHour;
    QLabel *labelMinute;
    QStackedWidget *stackedWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1024, 600);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 381, 51));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        labelDate = new QLabel(Dialog);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setGeometry(QRect(560, 40, 171, 31));
        QFont font;
        font.setPointSize(20);
        labelDate->setFont(font);
        labelHour = new QLabel(Dialog);
        labelHour->setObjectName(QString::fromUtf8("labelHour"));
        labelHour->setGeometry(QRect(433, 25, 49, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(31);
        labelHour->setFont(font1);
        labelHour->setStyleSheet(QString::fromUtf8("border-image: url(:/image/timebkg.png);\n"
"font: 31pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        labelMinute = new QLabel(Dialog);
        labelMinute->setObjectName(QString::fromUtf8("labelMinute"));
        labelMinute->setGeometry(QRect(500, 25, 49, 41));
        labelMinute->setFont(font1);
        labelMinute->setStyleSheet(QString::fromUtf8("border-image: url(:/image/timebkg.png);\n"
"font: 31pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 80, 1024, 520));

        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\346\250\241\345\274\217/", 0, QApplication::UnicodeUTF8));
        labelDate->setText(QApplication::translate("Dialog", "0000/00/00", 0, QApplication::UnicodeUTF8));
        labelHour->setText(QApplication::translate("Dialog", "00", 0, QApplication::UnicodeUTF8));
        labelMinute->setText(QApplication::translate("Dialog", "00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
