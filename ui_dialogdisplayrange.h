/********************************************************************************
** Form generated from reading UI file 'dialogdisplayrange.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDISPLAYRANGE_H
#define UI_DIALOGDISPLAYRANGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DialogDisplayRange
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxUpper;
    QLabel *label_2;
    QSpinBox *spinBoxLower;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogDisplayRange)
    {
        if (DialogDisplayRange->objectName().isEmpty())
            DialogDisplayRange->setObjectName(QString::fromUtf8("DialogDisplayRange"));
        DialogDisplayRange->setWindowModality(Qt::ApplicationModal);
        DialogDisplayRange->resize(350, 250);
        DialogDisplayRange->setStyleSheet(QString::fromUtf8("QDialog {border-image: url(:/image/tipsBkg.png);}\n"
"QWidget\n"
"{\n"
"    font-size:30px;\n"
"}\n"
"QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/btnG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/btnR.png);\n"
"}\n"
"QPushButton\n"
"{\n"
"    border-image: url(:/image/btnG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/image/btnR.png);\n"
"}\n"
"QSpinBox\n"
"{\n"
"        text-align:center;\n"
"        color:rgb(255,255,255);\n"
"        border-image: url(:/image/btnR.png) no-repeat;\n"
"}\n"
"\n"
"QSpinBox::up-button\n"
"{\n"
"        subcontrol-position:right;\n"
"        width:50px;\n"
"        height:50px;\n"
"        image: url(:/image/upArrow.png);\n"
"}\n"
"\n"
"QSpinBox::down-button\n"
"{\n"
"        subcontrol-position:left;\n"
"        width:50px;\n"
"        height:50px;\n"
"        image: url(:/image/downArrow.png);\n"
"}\n"
""));
        gridLayout = new QGridLayout(DialogDisplayRange);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 50, -1, 10);
        label = new QLabel(DialogDisplayRange);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        spinBoxUpper = new QSpinBox(DialogDisplayRange);
        spinBoxUpper->setObjectName(QString::fromUtf8("spinBoxUpper"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxUpper->sizePolicy().hasHeightForWidth());
        spinBoxUpper->setSizePolicy(sizePolicy1);
        spinBoxUpper->setMinimumSize(QSize(0, 50));
        spinBoxUpper->setMaximum(4096);
        spinBoxUpper->setValue(2100);

        gridLayout->addWidget(spinBoxUpper, 0, 3, 1, 1);

        label_2 = new QLabel(DialogDisplayRange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        spinBoxLower = new QSpinBox(DialogDisplayRange);
        spinBoxLower->setObjectName(QString::fromUtf8("spinBoxLower"));
        sizePolicy1.setHeightForWidth(spinBoxLower->sizePolicy().hasHeightForWidth());
        spinBoxLower->setSizePolicy(sizePolicy1);
        spinBoxLower->setMinimumSize(QSize(0, 50));
        spinBoxLower->setMaximum(4096);

        gridLayout->addWidget(spinBoxLower, 1, 3, 1, 1);

        toolButton = new QToolButton(DialogDisplayRange);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton, 0, 4, 1, 1);

        toolButton_2 = new QToolButton(DialogDisplayRange);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton_2, 1, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        pushButton = new QPushButton(DialogDisplayRange);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(DialogDisplayRange);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 3);


        retranslateUi(DialogDisplayRange);

        QMetaObject::connectSlotsByName(DialogDisplayRange);
    } // setupUi

    void retranslateUi(QDialog *DialogDisplayRange)
    {
        DialogDisplayRange->setWindowTitle(QApplication::translate("DialogDisplayRange", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogDisplayRange", "\344\270\212\347\225\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogDisplayRange", "\344\270\213\347\225\214", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("DialogDisplayRange", "...", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("DialogDisplayRange", "...", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogDisplayRange", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DialogDisplayRange", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogDisplayRange: public Ui_DialogDisplayRange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDISPLAYRANGE_H
