/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>

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
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1024, 600);
        Dialog->setStyleSheet(QStringLiteral("QDialog {border-image: url(:/image/bkg.png);}"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 381, 51));
        labelDate = new QLabel(Dialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(560, 40, 171, 31));
        QFont font;
        font.setPointSize(20);
        labelDate->setFont(font);
        labelHour = new QLabel(Dialog);
        labelHour->setObjectName(QStringLiteral("labelHour"));
        labelHour->setGeometry(QRect(433, 25, 49, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(31);
        labelHour->setFont(font1);
        labelMinute = new QLabel(Dialog);
        labelMinute->setObjectName(QStringLiteral("labelMinute"));
        labelMinute->setGeometry(QRect(500, 25, 49, 41));
        labelMinute->setFont(font1);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 80, 1024, 520));

        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\346\250\241\345\274\217/", 0));
        labelDate->setText(QApplication::translate("Dialog", "0000/00/00", 0));
        labelHour->setText(QApplication::translate("Dialog", "00", 0));
        labelMinute->setText(QApplication::translate("Dialog", "00", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
