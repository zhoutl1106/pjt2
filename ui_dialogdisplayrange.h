/********************************************************************************
** Form generated from reading UI file 'dialogdisplayrange.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDISPLAYRANGE_H
#define UI_DIALOGDISPLAYRANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogDisplayRange
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxUpper;
    QLabel *label_2;
    QSpinBox *spinBoxLower;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogDisplayRange)
    {
        if (DialogDisplayRange->objectName().isEmpty())
            DialogDisplayRange->setObjectName(QStringLiteral("DialogDisplayRange"));
        DialogDisplayRange->resize(320, 240);
        gridLayout = new QGridLayout(DialogDisplayRange);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogDisplayRange);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxUpper = new QSpinBox(DialogDisplayRange);
        spinBoxUpper->setObjectName(QStringLiteral("spinBoxUpper"));
        spinBoxUpper->setMaximum(4096);
        spinBoxUpper->setValue(2100);

        gridLayout->addWidget(spinBoxUpper, 0, 1, 1, 1);

        label_2 = new QLabel(DialogDisplayRange);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxLower = new QSpinBox(DialogDisplayRange);
        spinBoxLower->setObjectName(QStringLiteral("spinBoxLower"));
        spinBoxLower->setMaximum(4096);

        gridLayout->addWidget(spinBoxLower, 1, 1, 1, 1);

        pushButton = new QPushButton(DialogDisplayRange);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(DialogDisplayRange);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);


        retranslateUi(DialogDisplayRange);

        QMetaObject::connectSlotsByName(DialogDisplayRange);
    } // setupUi

    void retranslateUi(QDialog *DialogDisplayRange)
    {
        DialogDisplayRange->setWindowTitle(QApplication::translate("DialogDisplayRange", "Dialog", 0));
        label->setText(QApplication::translate("DialogDisplayRange", "\344\270\212\347\225\214", 0));
        label_2->setText(QApplication::translate("DialogDisplayRange", "\344\270\213\347\225\214", 0));
        pushButton->setText(QApplication::translate("DialogDisplayRange", "OK", 0));
        pushButton_2->setText(QApplication::translate("DialogDisplayRange", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogDisplayRange: public Ui_DialogDisplayRange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDISPLAYRANGE_H
