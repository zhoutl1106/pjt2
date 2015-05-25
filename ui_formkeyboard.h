/********************************************************************************
** Form generated from reading UI file 'formkeyboard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKEYBOARD_H
#define UI_FORMKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormKeyboard
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_0;
    QPushButton *pushButton_4;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_C;

    void setupUi(QWidget *FormKeyboard)
    {
        if (FormKeyboard->objectName().isEmpty())
            FormKeyboard->setObjectName(QString::fromUtf8("FormKeyboard"));
        FormKeyboard->setWindowModality(Qt::ApplicationModal);
        FormKeyboard->resize(403, 400);
        FormKeyboard->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	font-size: 30px;	\n"
"	border-image: url(:/image/lowerBkg.png);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    border-image: url(:/image/btnG.png);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/image/btnR.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(FormKeyboard);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(FormKeyboard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 0);\n"
"font: 25pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(\"\");"));

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_0 = new QPushButton(FormKeyboard);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(FormKeyboard);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_OK = new QPushButton(FormKeyboard);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        sizePolicy.setHeightForWidth(pushButton_OK->sizePolicy().hasHeightForWidth());
        pushButton_OK->setSizePolicy(sizePolicy);
        pushButton_OK->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_OK, 1, 4, 4, 1);

        pushButton_7 = new QPushButton(FormKeyboard);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(FormKeyboard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(FormKeyboard);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_3 = new QPushButton(FormKeyboard);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_8 = new QPushButton(FormKeyboard);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(FormKeyboard);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(FormKeyboard);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(FormKeyboard);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_C = new QPushButton(FormKeyboard);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        sizePolicy.setHeightForWidth(pushButton_C->sizePolicy().hasHeightForWidth());
        pushButton_C->setSizePolicy(sizePolicy);
        pushButton_C->setStyleSheet(QString::fromUtf8("border-image: url(:/image/backspace.png);"));

        gridLayout->addWidget(pushButton_C, 4, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(FormKeyboard);

        QMetaObject::connectSlotsByName(FormKeyboard);
    } // setupUi

    void retranslateUi(QWidget *FormKeyboard)
    {
        FormKeyboard->setWindowTitle(QApplication::translate("FormKeyboard", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("FormKeyboard", "0", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("FormKeyboard", "4", 0, QApplication::UnicodeUTF8));
        pushButton_OK->setText(QApplication::translate("FormKeyboard", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("FormKeyboard", "7", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("FormKeyboard", "2", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("FormKeyboard", "9", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("FormKeyboard", "3", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("FormKeyboard", "8", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("FormKeyboard", "1", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("FormKeyboard", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("FormKeyboard", "6", 0, QApplication::UnicodeUTF8));
        pushButton_C->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormKeyboard: public Ui_FormKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKEYBOARD_H
