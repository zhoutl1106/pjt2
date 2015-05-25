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
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_delay;
    QLabel *label_9;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_pulseWidth;
    QLabel *label_12;
    QToolButton *toolButton_OK;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetCamera;
    QLabel *label_2;
    QSpinBox *spinBoxChannel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QToolButton *toolButton_singleTest;
    QLabel *label_3;
    QSpinBox *spinBoxGroup;
    QLabel *label_4;
    QSpinBox *spinBoxPos;
    QLabel *label_5;
    QToolButton *toolButton_autoTest;
    QToolButton *toolButton_reset;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_valveOn;
    QToolButton *toolButton;

    void setupUi(QWidget *FormValveTest)
    {
        if (FormValveTest->objectName().isEmpty())
            FormValveTest->setObjectName(QString::fromUtf8("FormValveTest"));
        FormValveTest->resize(1024, 520);
        verticalLayout_2 = new QVBoxLayout(FormValveTest);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(50, 20, 50, 20);
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_6);

        doubleSpinBox_delay = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_delay->setObjectName(QString::fromUtf8("doubleSpinBox_delay"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(doubleSpinBox_delay->sizePolicy().hasHeightForWidth());
        doubleSpinBox_delay->setSizePolicy(sizePolicy2);
        doubleSpinBox_delay->setMinimumSize(QSize(150, 50));
        doubleSpinBox_delay->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox_delay->setDecimals(1);
        doubleSpinBox_delay->setMaximum(99.9);
        doubleSpinBox_delay->setSingleStep(0.1);
        doubleSpinBox_delay->setValue(1);

        horizontalLayout_2->addWidget(doubleSpinBox_delay);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_9);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_11);

        doubleSpinBox_pulseWidth = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_pulseWidth->setObjectName(QString::fromUtf8("doubleSpinBox_pulseWidth"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_pulseWidth->sizePolicy().hasHeightForWidth());
        doubleSpinBox_pulseWidth->setSizePolicy(sizePolicy2);
        doubleSpinBox_pulseWidth->setMinimumSize(QSize(150, 50));
        doubleSpinBox_pulseWidth->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox_pulseWidth->setDecimals(1);
        doubleSpinBox_pulseWidth->setMinimum(0.1);
        doubleSpinBox_pulseWidth->setMaximum(99.9);
        doubleSpinBox_pulseWidth->setSingleStep(0.1);
        doubleSpinBox_pulseWidth->setValue(1);

        horizontalLayout_2->addWidget(doubleSpinBox_pulseWidth);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_12);

        toolButton_OK = new QToolButton(groupBox_2);
        toolButton_OK->setObjectName(QString::fromUtf8("toolButton_OK"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(toolButton_OK->sizePolicy().hasHeightForWidth());
        toolButton_OK->setSizePolicy(sizePolicy4);
        toolButton_OK->setMinimumSize(QSize(150, 40));

        horizontalLayout_2->addWidget(toolButton_OK);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widgetCamera = new QWidget(groupBox_2);
        widgetCamera->setObjectName(QString::fromUtf8("widgetCamera"));
        sizePolicy.setHeightForWidth(widgetCamera->sizePolicy().hasHeightForWidth());
        widgetCamera->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widgetCamera);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        spinBoxChannel = new QSpinBox(groupBox_2);
        spinBoxChannel->setObjectName(QString::fromUtf8("spinBoxChannel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBoxChannel->sizePolicy().hasHeightForWidth());
        spinBoxChannel->setSizePolicy(sizePolicy5);
        spinBoxChannel->setMinimumSize(QSize(0, 50));
        spinBoxChannel->setMinimum(1);
        spinBoxChannel->setMaximum(7);

        horizontalLayout->addWidget(spinBoxChannel);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(FormValveTest);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton_singleTest = new QToolButton(groupBox);
        toolButton_singleTest->setObjectName(QString::fromUtf8("toolButton_singleTest"));
        sizePolicy4.setHeightForWidth(toolButton_singleTest->sizePolicy().hasHeightForWidth());
        toolButton_singleTest->setSizePolicy(sizePolicy4);
        toolButton_singleTest->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(toolButton_singleTest, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        spinBoxGroup = new QSpinBox(groupBox);
        spinBoxGroup->setObjectName(QString::fromUtf8("spinBoxGroup"));
        sizePolicy2.setHeightForWidth(spinBoxGroup->sizePolicy().hasHeightForWidth());
        spinBoxGroup->setSizePolicy(sizePolicy2);
        spinBoxGroup->setMinimumSize(QSize(150, 50));
        spinBoxGroup->setStyleSheet(QString::fromUtf8(""));
        spinBoxGroup->setMinimum(1);
        spinBoxGroup->setMaximum(14);

        gridLayout->addWidget(spinBoxGroup, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        spinBoxPos = new QSpinBox(groupBox);
        spinBoxPos->setObjectName(QString::fromUtf8("spinBoxPos"));
        sizePolicy2.setHeightForWidth(spinBoxPos->sizePolicy().hasHeightForWidth());
        spinBoxPos->setSizePolicy(sizePolicy2);
        spinBoxPos->setMinimumSize(QSize(150, 50));
        spinBoxPos->setStyleSheet(QString::fromUtf8(""));
        spinBoxPos->setMinimum(1);
        spinBoxPos->setMaximum(64);

        gridLayout->addWidget(spinBoxPos, 0, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        toolButton_autoTest = new QToolButton(groupBox);
        toolButton_autoTest->setObjectName(QString::fromUtf8("toolButton_autoTest"));
        sizePolicy4.setHeightForWidth(toolButton_autoTest->sizePolicy().hasHeightForWidth());
        toolButton_autoTest->setSizePolicy(sizePolicy4);
        toolButton_autoTest->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(toolButton_autoTest, 1, 1, 1, 1);

        toolButton_reset = new QToolButton(groupBox);
        toolButton_reset->setObjectName(QString::fromUtf8("toolButton_reset"));
        sizePolicy4.setHeightForWidth(toolButton_reset->sizePolicy().hasHeightForWidth());
        toolButton_reset->setSizePolicy(sizePolicy4);
        toolButton_reset->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(toolButton_reset, 1, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(200);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        toolButton_valveOn = new QToolButton(FormValveTest);
        toolButton_valveOn->setObjectName(QString::fromUtf8("toolButton_valveOn"));
        sizePolicy.setHeightForWidth(toolButton_valveOn->sizePolicy().hasHeightForWidth());
        toolButton_valveOn->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(toolButton_valveOn);

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
        label_6->setText(QApplication::translate("FormValveTest", "\345\220\271\345\230\264\n"
"\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FormValveTest", "\357\274\210\346\257\253\347\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("FormValveTest", "\345\274\200\351\230\200\n"
"\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("FormValveTest", "\357\274\210\346\257\253\347\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        toolButton_OK->setText(QApplication::translate("FormValveTest", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormValveTest", "\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FormValveTest", "\346\270\205\347\201\260\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        toolButton_singleTest->setText(QApplication::translate("FormValveTest", "\346\211\213\345\212\250\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormValveTest", "\347\254\254", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormValveTest", "\347\273\204            \347\254\254", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormValveTest", "\344\270\252", 0, QApplication::UnicodeUTF8));
        toolButton_autoTest->setText(QApplication::translate("FormValveTest", "\350\277\236\347\273\255\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        toolButton_reset->setText(QApplication::translate("FormValveTest", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        toolButton_valveOn->setText(QApplication::translate("FormValveTest", "\345\226\267\351\230\200\347\233\221\346\216\247", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormValveTest", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormValveTest: public Ui_FormValveTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMVALVETEST_H
