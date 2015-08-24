/********************************************************************************
** Form generated from reading UI file 'formvalvetest.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMVALVETEST_H
#define UI_FORMVALVETEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormValveTest
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_OK;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_delay;
    QLabel *label_9;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_pulseWidth;
    QLabel *label_12;
    QWidget *widgetCamera;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton_OK_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *spinBoxGroup;
    QLabel *label_4;
    QSpinBox *spinBoxPos;
    QLabel *label_5;
    QToolButton *toolButton_singleTest;
    QToolButton *toolButton_autoTest;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton;

    void setupUi(QWidget *FormValveTest)
    {
        if (FormValveTest->objectName().isEmpty())
            FormValveTest->setObjectName(QString::fromUtf8("FormValveTest"));
        FormValveTest->resize(1024, 520);
        verticalLayout_2 = new QVBoxLayout(FormValveTest);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(100, -1, 100, 50);
        label = new QLabel(FormValveTest);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        groupBox_2 = new QGroupBox(FormValveTest);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_1 = new QRadioButton(groupBox_2);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_1->sizePolicy().hasHeightForWidth());
        radioButton_1->setSizePolicy(sizePolicy1);
        radioButton_1->setMinimumSize(QSize(0, 30));
        radioButton_1->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy1.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy1);
        radioButton_2->setMinimumSize(QSize(0, 30));
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy1.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy1);
        radioButton_3->setMinimumSize(QSize(0, 30));
        radioButton_3->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        sizePolicy1.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy1);
        radioButton_4->setMinimumSize(QSize(0, 30));
        radioButton_4->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        sizePolicy1.setHeightForWidth(radioButton_5->sizePolicy().hasHeightForWidth());
        radioButton_5->setSizePolicy(sizePolicy1);
        radioButton_5->setMinimumSize(QSize(0, 30));
        radioButton_5->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(groupBox_2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        sizePolicy1.setHeightForWidth(radioButton_6->sizePolicy().hasHeightForWidth());
        radioButton_6->setSizePolicy(sizePolicy1);
        radioButton_6->setMinimumSize(QSize(0, 30));
        radioButton_6->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupBox_2);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        sizePolicy1.setHeightForWidth(radioButton_7->sizePolicy().hasHeightForWidth());
        radioButton_7->setSizePolicy(sizePolicy1);
        radioButton_7->setMinimumSize(QSize(0, 30));
        radioButton_7->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"	width:0 px;\n"
"	height: 0 px;\n"
"}\n"
"QRadioButton:checked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout_3->addWidget(radioButton_7);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolButton_OK = new QToolButton(groupBox_2);
        toolButton_OK->setObjectName(QString::fromUtf8("toolButton_OK"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton_OK->sizePolicy().hasHeightForWidth());
        toolButton_OK->setSizePolicy(sizePolicy2);
        toolButton_OK->setMinimumSize(QSize(150, 40));

        gridLayout_2->addWidget(toolButton_OK, 0, 5, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        doubleSpinBox_delay = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_delay->setObjectName(QString::fromUtf8("doubleSpinBox_delay"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(doubleSpinBox_delay->sizePolicy().hasHeightForWidth());
        doubleSpinBox_delay->setSizePolicy(sizePolicy4);
        doubleSpinBox_delay->setMinimumSize(QSize(150, 50));
        doubleSpinBox_delay->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox_delay->setDecimals(1);
        doubleSpinBox_delay->setMinimum(0.1);
        doubleSpinBox_delay->setMaximum(99.9);
        doubleSpinBox_delay->setSingleStep(0.1);
        doubleSpinBox_delay->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_delay, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        doubleSpinBox_pulseWidth = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_pulseWidth->setObjectName(QString::fromUtf8("doubleSpinBox_pulseWidth"));
        sizePolicy4.setHeightForWidth(doubleSpinBox_pulseWidth->sizePolicy().hasHeightForWidth());
        doubleSpinBox_pulseWidth->setSizePolicy(sizePolicy4);
        doubleSpinBox_pulseWidth->setMinimumSize(QSize(150, 50));
        doubleSpinBox_pulseWidth->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox_pulseWidth->setDecimals(1);
        doubleSpinBox_pulseWidth->setMinimum(0.1);
        doubleSpinBox_pulseWidth->setMaximum(99.9);
        doubleSpinBox_pulseWidth->setSingleStep(0.1);
        doubleSpinBox_pulseWidth->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_pulseWidth, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_12, 1, 2, 1, 1);

        widgetCamera = new QWidget(groupBox_2);
        widgetCamera->setObjectName(QString::fromUtf8("widgetCamera"));
        sizePolicy.setHeightForWidth(widgetCamera->sizePolicy().hasHeightForWidth());
        widgetCamera->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(widgetCamera, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 3, 1, 1);

        toolButton_OK_2 = new QToolButton(groupBox_2);
        toolButton_OK_2->setObjectName(QString::fromUtf8("toolButton_OK_2"));
        sizePolicy2.setHeightForWidth(toolButton_OK_2->sizePolicy().hasHeightForWidth());
        toolButton_OK_2->setSizePolicy(sizePolicy2);
        toolButton_OK_2->setMinimumSize(QSize(150, 40));

        gridLayout_2->addWidget(toolButton_OK_2, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(FormValveTest);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        spinBoxGroup = new QSpinBox(groupBox);
        spinBoxGroup->setObjectName(QString::fromUtf8("spinBoxGroup"));
        sizePolicy4.setHeightForWidth(spinBoxGroup->sizePolicy().hasHeightForWidth());
        spinBoxGroup->setSizePolicy(sizePolicy4);
        spinBoxGroup->setMinimumSize(QSize(150, 50));
        spinBoxGroup->setStyleSheet(QString::fromUtf8(""));
        spinBoxGroup->setMinimum(0);
        spinBoxGroup->setMaximum(15);

        gridLayout->addWidget(spinBoxGroup, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        spinBoxPos = new QSpinBox(groupBox);
        spinBoxPos->setObjectName(QString::fromUtf8("spinBoxPos"));
        sizePolicy4.setHeightForWidth(spinBoxPos->sizePolicy().hasHeightForWidth());
        spinBoxPos->setSizePolicy(sizePolicy4);
        spinBoxPos->setMinimumSize(QSize(150, 50));
        spinBoxPos->setStyleSheet(QString::fromUtf8(""));
        spinBoxPos->setMinimum(0);
        spinBoxPos->setMaximum(65);

        gridLayout->addWidget(spinBoxPos, 0, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        toolButton_singleTest = new QToolButton(groupBox);
        toolButton_singleTest->setObjectName(QString::fromUtf8("toolButton_singleTest"));
        sizePolicy2.setHeightForWidth(toolButton_singleTest->sizePolicy().hasHeightForWidth());
        toolButton_singleTest->setSizePolicy(sizePolicy2);
        toolButton_singleTest->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(toolButton_singleTest, 1, 2, 1, 1);

        toolButton_autoTest = new QToolButton(groupBox);
        toolButton_autoTest->setObjectName(QString::fromUtf8("toolButton_autoTest"));
        sizePolicy2.setHeightForWidth(toolButton_autoTest->sizePolicy().hasHeightForWidth());
        toolButton_autoTest->setSizePolicy(sizePolicy2);
        toolButton_autoTest->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(toolButton_autoTest, 1, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(200);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(200, -1, 200, -1);
        toolButton = new QToolButton(FormValveTest);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_4->addWidget(toolButton);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(FormValveTest);

        QMetaObject::connectSlotsByName(FormValveTest);
    } // setupUi

    void retranslateUi(QWidget *FormValveTest)
    {
        FormValveTest->setWindowTitle(QApplication::translate("FormValveTest", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormValveTest", "\345\226\267\351\230\200\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FormValveTest", "\345\237\272\346\234\254\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        radioButton_1->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2231", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2232", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2233", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2234", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2235", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2236", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\2237", 0, QApplication::UnicodeUTF8));
        toolButton_OK->setText(QApplication::translate("FormValveTest", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormValveTest", "\345\220\271\345\230\264\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FormValveTest", "\357\274\210\346\257\253\347\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("FormValveTest", "\345\274\200\351\230\200\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("FormValveTest", "\357\274\210\346\257\253\347\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        toolButton_OK_2->setText(QApplication::translate("FormValveTest", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FormValveTest", "\346\270\205\347\201\260\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormValveTest", "\347\254\254", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormValveTest", "\347\273\204            \347\254\254", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormValveTest", "\344\270\252", 0, QApplication::UnicodeUTF8));
        toolButton_singleTest->setText(QApplication::translate("FormValveTest", "\345\215\225\344\270\252\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        toolButton_autoTest->setText(QApplication::translate("FormValveTest", "\350\277\236\347\273\255\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormValveTest", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormValveTest: public Ui_FormValveTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMVALVETEST_H
