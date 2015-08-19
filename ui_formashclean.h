/********************************************************************************
** Form generated from reading UI file 'formashclean.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMASHCLEAN_H
#define UI_FORMASHCLEAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAshClean
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_thresholdFront;
    QSpinBox *spinBox_interval;
    QLabel *label_2;
    QRadioButton *radioButtonAuto;
    QLabel *label_4;
    QSpinBox *spinBox_thresholdEnd;
    QRadioButton *radioButtonTiming;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QToolButton *toolButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpinBox *spinBox_delay;
    QLabel *label_9;
    QToolButton *toolButton_manual;
    QLabel *label;
    QToolButton *toolButton_2;

    void setupUi(QWidget *FormAshClean)
    {
        if (FormAshClean->objectName().isEmpty())
            FormAshClean->setObjectName(QString::fromUtf8("FormAshClean"));
        FormAshClean->resize(1069, 520);
        gridLayout_3 = new QGridLayout(FormAshClean);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(100);
        gridLayout_3->setVerticalSpacing(30);
        gridLayout_3->setContentsMargins(50, 30, 50, 30);
        groupBox = new QGroupBox(FormAshClean);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox_thresholdFront = new QSpinBox(groupBox);
        spinBox_thresholdFront->setObjectName(QString::fromUtf8("spinBox_thresholdFront"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_thresholdFront->sizePolicy().hasHeightForWidth());
        spinBox_thresholdFront->setSizePolicy(sizePolicy1);
        spinBox_thresholdFront->setMinimumSize(QSize(150, 50));
        spinBox_thresholdFront->setMinimum(0);
        spinBox_thresholdFront->setMaximum(255);

        gridLayout->addWidget(spinBox_thresholdFront, 1, 3, 1, 1);

        spinBox_interval = new QSpinBox(groupBox);
        spinBox_interval->setObjectName(QString::fromUtf8("spinBox_interval"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_interval->sizePolicy().hasHeightForWidth());
        spinBox_interval->setSizePolicy(sizePolicy2);
        spinBox_interval->setMinimumSize(QSize(150, 50));
        spinBox_interval->setMinimum(1);
        spinBox_interval->setMaximum(99);
        spinBox_interval->setValue(30);

        gridLayout->addWidget(spinBox_interval, 0, 3, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        radioButtonAuto = new QRadioButton(groupBox);
        radioButtonAuto->setObjectName(QString::fromUtf8("radioButtonAuto"));
        sizePolicy3.setHeightForWidth(radioButtonAuto->sizePolicy().hasHeightForWidth());
        radioButtonAuto->setSizePolicy(sizePolicy3);
        radioButtonAuto->setMinimumSize(QSize(200, 0));
        radioButtonAuto->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"    width:30px;\n"
"    height:30px;\n"
"}\n"
"QRadioButton{\n"
"color:rgb(0,0,0);}"));

        gridLayout->addWidget(radioButtonAuto, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_4, 0, 5, 1, 2);

        spinBox_thresholdEnd = new QSpinBox(groupBox);
        spinBox_thresholdEnd->setObjectName(QString::fromUtf8("spinBox_thresholdEnd"));
        sizePolicy1.setHeightForWidth(spinBox_thresholdEnd->sizePolicy().hasHeightForWidth());
        spinBox_thresholdEnd->setSizePolicy(sizePolicy1);
        spinBox_thresholdEnd->setMinimumSize(QSize(150, 50));
        spinBox_thresholdEnd->setMinimum(0);
        spinBox_thresholdEnd->setMaximum(255);

        gridLayout->addWidget(spinBox_thresholdEnd, 2, 3, 1, 1);

        radioButtonTiming = new QRadioButton(groupBox);
        radioButtonTiming->setObjectName(QString::fromUtf8("radioButtonTiming"));
        sizePolicy3.setHeightForWidth(radioButtonTiming->sizePolicy().hasHeightForWidth());
        radioButtonTiming->setSizePolicy(sizePolicy3);
        radioButtonTiming->setMinimumSize(QSize(200, 0));
        radioButtonTiming->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
"{\n"
"    width:30px;\n"
"    height:30px;\n"
"}\n"
"QRadioButton{\n"
"color:rgb(0,0,0);}"));
        radioButtonTiming->setChecked(true);

        gridLayout->addWidget(radioButtonTiming, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_3, 1, 1, 2, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_5, 1, 6, 2, 1);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 2);

        toolButton = new QToolButton(FormAshClean);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);
        toolButton->setMinimumSize(QSize(0, 40));

        gridLayout_3->addWidget(toolButton, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(FormAshClean);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        groupBox_2->setFlat(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, 300, -1);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        label_6->setScaledContents(false);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        spinBox_delay = new QSpinBox(groupBox_2);
        spinBox_delay->setObjectName(QString::fromUtf8("spinBox_delay"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBox_delay->sizePolicy().hasHeightForWidth());
        spinBox_delay->setSizePolicy(sizePolicy4);
        spinBox_delay->setMinimumSize(QSize(150, 50));
        spinBox_delay->setStyleSheet(QString::fromUtf8(""));
        spinBox_delay->setMinimum(1);
        spinBox_delay->setMaximum(60);
        spinBox_delay->setValue(30);

        gridLayout_2->addWidget(spinBox_delay, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_9, 0, 5, 1, 1);

        toolButton_manual = new QToolButton(groupBox_2);
        toolButton_manual->setObjectName(QString::fromUtf8("toolButton_manual"));
        sizePolicy.setHeightForWidth(toolButton_manual->sizePolicy().hasHeightForWidth());
        toolButton_manual->setSizePolicy(sizePolicy);
        toolButton_manual->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(toolButton_manual, 0, 6, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        label = new QLabel(FormAshClean);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(0, 40));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 2);

        toolButton_2 = new QToolButton(FormAshClean);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);
        toolButton_2->setMinimumSize(QSize(0, 40));

        gridLayout_3->addWidget(toolButton_2, 3, 0, 1, 1);


        retranslateUi(FormAshClean);

        QMetaObject::connectSlotsByName(FormAshClean);
    } // setupUi

    void retranslateUi(QWidget *FormAshClean)
    {
        FormAshClean->setWindowTitle(QApplication::translate("FormAshClean", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormAshClean", "\343\200\220\346\227\266\351\227\264\351\227\264\351\232\224", 0, QApplication::UnicodeUTF8));
        radioButtonAuto->setText(QApplication::translate("FormAshClean", "\345\205\250\350\207\252\345\212\250\346\270\205\347\201\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormAshClean", "\357\274\210\345\210\206\357\274\211\343\200\221", 0, QApplication::UnicodeUTF8));
        radioButtonTiming->setText(QApplication::translate("FormAshClean", "\345\256\232\346\227\266\346\270\205\347\201\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormAshClean", "\343\200\220\344\272\256\345\272\246\351\230\210\345\200\274", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FormAshClean", "\345\211\215\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FormAshClean", "\345\220\216\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormAshClean", "\357\274\210\345\215\225\344\275\215\357\274\211\343\200\221", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormAshClean", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FormAshClean", "\357\274\210\347\247\222\357\274\211", 0, QApplication::UnicodeUTF8));
        toolButton_manual->setText(QApplication::translate("FormAshClean", "\346\211\213\345\212\250\346\270\205\347\201\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormAshClean", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAshClean: public Ui_FormAshClean {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMASHCLEAN_H
