/********************************************************************************
** Form generated from reading UI file 'formvalvetest.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMVALVETEST_H
#define UI_FORMVALVETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormValveTest
{
public:
    QToolButton *toolButton;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *doubleSpinBox_delay;
    QToolButton *toolButton_loopTest_3;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_pulseWidth;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *camera;
    QLabel *label_2;
    QSpinBox *spinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_singleTest;
    QLabel *label_3;
    QSpinBox *spinBoxGroup;
    QLabel *label_4;
    QSpinBox *spinBoxPos;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_autoTest;
    QToolButton *toolButton_loopTest_4;
    QToolButton *toolButton_valveOn;

    void setupUi(QWidget *FormValveTest)
    {
        if (FormValveTest->objectName().isEmpty())
            FormValveTest->setObjectName(QStringLiteral("FormValveTest"));
        FormValveTest->resize(1024, 600);
        toolButton = new QToolButton(FormValveTest);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(630, 500, 200, 80));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(80, 0));
        label = new QLabel(FormValveTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 0, 181, 61));
        label->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(FormValveTest);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 50, 891, 181));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(233, 233, 233);"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        doubleSpinBox_delay = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_delay->setObjectName(QStringLiteral("doubleSpinBox_delay"));
        sizePolicy.setHeightForWidth(doubleSpinBox_delay->sizePolicy().hasHeightForWidth());
        doubleSpinBox_delay->setSizePolicy(sizePolicy);
        doubleSpinBox_delay->setMinimumSize(QSize(150, 50));
        doubleSpinBox_delay->setStyleSheet(QLatin1String("QSpinBox\n"
"{	\n"
"	text-align:center;\n"
"	color:rgb(255,255,255);\n"
"	border-image: url(:/icons/spinBkg.png) no-repeat;\n"
"}\n"
"\n"
"QSpinBox::up-button\n"
"{	\n"
"	width:30px;\n"
"	height:30px;\n"
"	image: url(:/icons/upArrow.png);\n"
"}\n"
"\n"
"QSpinBox::down-button\n"
"{	\n"
"	width:30px;\n"
"	height:30px;\n"
"	image: url(:/icons/downArrow.png);\n"
"}"));
        doubleSpinBox_delay->setDecimals(1);
        doubleSpinBox_delay->setSingleStep(0.1);
        doubleSpinBox_delay->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_delay, 0, 2, 1, 1);

        toolButton_loopTest_3 = new QToolButton(groupBox_2);
        toolButton_loopTest_3->setObjectName(QStringLiteral("toolButton_loopTest_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_loopTest_3->sizePolicy().hasHeightForWidth());
        toolButton_loopTest_3->setSizePolicy(sizePolicy1);
        toolButton_loopTest_3->setMinimumSize(QSize(150, 80));

        gridLayout_2->addWidget(toolButton_loopTest_3, 0, 7, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);

        doubleSpinBox_pulseWidth = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_pulseWidth->setObjectName(QStringLiteral("doubleSpinBox_pulseWidth"));
        sizePolicy.setHeightForWidth(doubleSpinBox_pulseWidth->sizePolicy().hasHeightForWidth());
        doubleSpinBox_pulseWidth->setSizePolicy(sizePolicy);
        doubleSpinBox_pulseWidth->setMinimumSize(QSize(150, 50));
        doubleSpinBox_pulseWidth->setStyleSheet(QStringLiteral(""));
        doubleSpinBox_pulseWidth->setDecimals(1);
        doubleSpinBox_pulseWidth->setMinimum(0.1);
        doubleSpinBox_pulseWidth->setSingleStep(0.1);
        doubleSpinBox_pulseWidth->setValue(1);

        gridLayout_2->addWidget(doubleSpinBox_pulseWidth, 0, 5, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_11, 0, 4, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_12, 0, 6, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        camera = new QComboBox(groupBox_2);
        camera->setObjectName(QStringLiteral("camera"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy4);
        camera->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(camera);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy5);
        spinBox->setMinimumSize(QSize(0, 50));
        spinBox->setMinimum(1);
        spinBox->setMaximum(7);

        horizontalLayout_3->addWidget(spinBox);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 2, 1, 4);

        groupBox = new QGroupBox(FormValveTest);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 250, 891, 241));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(233, 233, 233);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolButton_singleTest = new QToolButton(groupBox);
        toolButton_singleTest->setObjectName(QStringLiteral("toolButton_singleTest"));
        sizePolicy1.setHeightForWidth(toolButton_singleTest->sizePolicy().hasHeightForWidth());
        toolButton_singleTest->setSizePolicy(sizePolicy1);
        toolButton_singleTest->setMinimumSize(QSize(0, 80));

        horizontalLayout_2->addWidget(toolButton_singleTest);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        spinBoxGroup = new QSpinBox(groupBox);
        spinBoxGroup->setObjectName(QStringLiteral("spinBoxGroup"));
        sizePolicy.setHeightForWidth(spinBoxGroup->sizePolicy().hasHeightForWidth());
        spinBoxGroup->setSizePolicy(sizePolicy);
        spinBoxGroup->setMinimumSize(QSize(150, 50));
        spinBoxGroup->setStyleSheet(QStringLiteral(""));
        spinBoxGroup->setMinimum(1);
        spinBoxGroup->setMaximum(14);

        horizontalLayout_2->addWidget(spinBoxGroup);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        spinBoxPos = new QSpinBox(groupBox);
        spinBoxPos->setObjectName(QStringLiteral("spinBoxPos"));
        sizePolicy.setHeightForWidth(spinBoxPos->sizePolicy().hasHeightForWidth());
        spinBoxPos->setSizePolicy(sizePolicy);
        spinBoxPos->setMinimumSize(QSize(150, 50));
        spinBoxPos->setStyleSheet(QStringLiteral(""));
        spinBoxPos->setMinimum(1);
        spinBoxPos->setMaximum(64);

        horizontalLayout_2->addWidget(spinBoxPos);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(180);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(90, -1, 90, -1);
        toolButton_autoTest = new QToolButton(groupBox);
        toolButton_autoTest->setObjectName(QStringLiteral("toolButton_autoTest"));
        sizePolicy1.setHeightForWidth(toolButton_autoTest->sizePolicy().hasHeightForWidth());
        toolButton_autoTest->setSizePolicy(sizePolicy1);
        toolButton_autoTest->setMinimumSize(QSize(0, 60));

        horizontalLayout->addWidget(toolButton_autoTest);

        toolButton_loopTest_4 = new QToolButton(groupBox);
        toolButton_loopTest_4->setObjectName(QStringLiteral("toolButton_loopTest_4"));
        sizePolicy1.setHeightForWidth(toolButton_loopTest_4->sizePolicy().hasHeightForWidth());
        toolButton_loopTest_4->setSizePolicy(sizePolicy1);
        toolButton_loopTest_4->setMinimumSize(QSize(0, 60));

        horizontalLayout->addWidget(toolButton_loopTest_4);


        verticalLayout->addLayout(horizontalLayout);

        toolButton_valveOn = new QToolButton(FormValveTest);
        toolButton_valveOn->setObjectName(QStringLiteral("toolButton_valveOn"));
        toolButton_valveOn->setGeometry(QRect(200, 500, 200, 80));
        sizePolicy1.setHeightForWidth(toolButton_valveOn->sizePolicy().hasHeightForWidth());
        toolButton_valveOn->setSizePolicy(sizePolicy1);

        retranslateUi(FormValveTest);

        QMetaObject::connectSlotsByName(FormValveTest);
    } // setupUi

    void retranslateUi(QWidget *FormValveTest)
    {
        FormValveTest->setWindowTitle(QApplication::translate("FormValveTest", "Form", 0));
        toolButton->setText(QApplication::translate("FormValveTest", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("FormValveTest", "\345\226\267\351\230\200\350\256\276\347\275\256", 0));
        groupBox_2->setTitle(QApplication::translate("FormValveTest", "\345\237\272\346\234\254\345\217\202\346\225\260", 0));
        toolButton_loopTest_3->setText(QApplication::translate("FormValveTest", "\347\241\256\345\256\232", 0));
        label_9->setText(QApplication::translate("FormValveTest", "\357\274\210\346\257\253\347\247\222\357\274\211", 0));
        label_11->setText(QApplication::translate("FormValveTest", "\345\274\200\351\230\200\n"
"\346\227\266\351\227\264", 0));
        label_12->setText(QApplication::translate("FormValveTest", "\357\274\210\346\257\253\347\247\222\357\274\211", 0));
        label_6->setText(QApplication::translate("FormValveTest", "\345\220\271\345\230\264\n"
"\345\273\266\346\227\266", 0));
        camera->clear();
        camera->insertItems(0, QStringList()
         << QApplication::translate("FormValveTest", "\345\211\215\347\233\270\346\234\272", 0)
         << QApplication::translate("FormValveTest", "\345\220\216\347\233\270\346\234\272", 0)
        );
        label_2->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\223", 0));
        groupBox->setTitle(QApplication::translate("FormValveTest", "\346\270\205\347\201\260\346\250\241\345\274\217", 0));
        toolButton_singleTest->setText(QApplication::translate("FormValveTest", "\346\211\213\345\212\250\346\265\213\350\257\225", 0));
        label_3->setText(QApplication::translate("FormValveTest", "\347\254\254", 0));
        label_4->setText(QApplication::translate("FormValveTest", "\347\273\204            \347\254\254", 0));
        label_5->setText(QApplication::translate("FormValveTest", "\344\270\252", 0));
        toolButton_autoTest->setText(QApplication::translate("FormValveTest", "\350\277\236\347\273\255\346\265\213\350\257\225", 0));
        toolButton_loopTest_4->setText(QApplication::translate("FormValveTest", "\345\244\215\344\275\215", 0));
        toolButton_valveOn->setText(QApplication::translate("FormValveTest", "\345\226\267\351\230\200\347\233\221\346\216\247", 0));
    } // retranslateUi

};

namespace Ui {
    class FormValveTest: public Ui_FormValveTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMVALVETEST_H
