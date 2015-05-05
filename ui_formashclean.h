/********************************************************************************
** Form generated from reading UI file 'formashclean.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMASHCLEAN_H
#define UI_FORMASHCLEAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAshClean
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonTiming;
    QLabel *label_2;
    QSpinBox *spinBox_interval;
    QLabel *label_4;
    QRadioButton *radioButtonAuto;
    QLabel *label_3;
    QSpinBox *spinBox_threshold;
    QLabel *label_5;
    QToolButton *toolButton_manual;
    QToolButton *toolButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLabel *label_6;
    QSpinBox *spinBox_delay;
    QLabel *label;

    void setupUi(QWidget *FormAshClean)
    {
        if (FormAshClean->objectName().isEmpty())
            FormAshClean->setObjectName(QStringLiteral("FormAshClean"));
        FormAshClean->resize(1024, 520);
        gridLayout_3 = new QGridLayout(FormAshClean);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(100);
        gridLayout_3->setVerticalSpacing(30);
        gridLayout_3->setContentsMargins(50, 30, 50, 30);
        groupBox = new QGroupBox(FormAshClean);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButtonTiming = new QRadioButton(groupBox);
        radioButtonTiming->setObjectName(QStringLiteral("radioButtonTiming"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButtonTiming->sizePolicy().hasHeightForWidth());
        radioButtonTiming->setSizePolicy(sizePolicy1);
        radioButtonTiming->setMinimumSize(QSize(200, 0));
        radioButtonTiming->setStyleSheet(QLatin1String("QRadioButton::indicator\n"
"{\n"
"    width:30px;\n"
"    height:30px;\n"
"}\n"
"QRadioButton{\n"
"color:rgb(0,0,0);}"));
        radioButtonTiming->setChecked(true);

        gridLayout->addWidget(radioButtonTiming, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        spinBox_interval = new QSpinBox(groupBox);
        spinBox_interval->setObjectName(QStringLiteral("spinBox_interval"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_interval->sizePolicy().hasHeightForWidth());
        spinBox_interval->setSizePolicy(sizePolicy2);
        spinBox_interval->setMinimumSize(QSize(150, 50));
        spinBox_interval->setMinimum(1);
        spinBox_interval->setMaximum(120);
        spinBox_interval->setValue(30);

        gridLayout->addWidget(spinBox_interval, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        radioButtonAuto = new QRadioButton(groupBox);
        radioButtonAuto->setObjectName(QStringLiteral("radioButtonAuto"));
        sizePolicy1.setHeightForWidth(radioButtonAuto->sizePolicy().hasHeightForWidth());
        radioButtonAuto->setSizePolicy(sizePolicy1);
        radioButtonAuto->setMinimumSize(QSize(200, 0));
        radioButtonAuto->setStyleSheet(QLatin1String("QRadioButton::indicator\n"
"{\n"
"    width:30px;\n"
"    height:30px;\n"
"}\n"
"QRadioButton{\n"
"color:rgb(0,0,0);}"));

        gridLayout->addWidget(radioButtonAuto, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        spinBox_threshold = new QSpinBox(groupBox);
        spinBox_threshold->setObjectName(QStringLiteral("spinBox_threshold"));
        sizePolicy2.setHeightForWidth(spinBox_threshold->sizePolicy().hasHeightForWidth());
        spinBox_threshold->setSizePolicy(sizePolicy2);
        spinBox_threshold->setMinimumSize(QSize(150, 50));
        spinBox_threshold->setMinimum(1);
        spinBox_threshold->setMaximum(255);

        gridLayout->addWidget(spinBox_threshold, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 2);

        toolButton_manual = new QToolButton(FormAshClean);
        toolButton_manual->setObjectName(QStringLiteral("toolButton_manual"));
        sizePolicy.setHeightForWidth(toolButton_manual->sizePolicy().hasHeightForWidth());
        toolButton_manual->setSizePolicy(sizePolicy);
        toolButton_manual->setMinimumSize(QSize(0, 40));

        gridLayout_3->addWidget(toolButton_manual, 3, 0, 1, 1);

        toolButton = new QToolButton(FormAshClean);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy3);
        toolButton->setMinimumSize(QSize(0, 40));

        gridLayout_3->addWidget(toolButton, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(FormAshClean);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setScaledContents(false);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 2);

        spinBox_delay = new QSpinBox(groupBox_2);
        spinBox_delay->setObjectName(QStringLiteral("spinBox_delay"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBox_delay->sizePolicy().hasHeightForWidth());
        spinBox_delay->setSizePolicy(sizePolicy5);
        spinBox_delay->setMinimumSize(QSize(150, 50));
        spinBox_delay->setStyleSheet(QStringLiteral(""));
        spinBox_delay->setMinimum(5);
        spinBox_delay->setMaximum(60);
        spinBox_delay->setValue(30);

        gridLayout_2->addWidget(spinBox_delay, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        label = new QLabel(FormAshClean);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMinimumSize(QSize(0, 40));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 2);


        retranslateUi(FormAshClean);

        QMetaObject::connectSlotsByName(FormAshClean);
    } // setupUi

    void retranslateUi(QWidget *FormAshClean)
    {
        FormAshClean->setWindowTitle(QApplication::translate("FormAshClean", "Form", 0));
        groupBox->setTitle(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\346\250\241\345\274\217", 0));
        radioButtonTiming->setText(QApplication::translate("FormAshClean", "\345\256\232\346\227\266\346\270\205\347\201\260", 0));
        label_2->setText(QApplication::translate("FormAshClean", "\343\200\220\346\227\266\351\227\264\351\227\264\351\232\224", 0));
        label_4->setText(QApplication::translate("FormAshClean", "\357\274\210\345\210\206\357\274\211\343\200\221", 0));
        radioButtonAuto->setText(QApplication::translate("FormAshClean", "\345\205\250\350\207\252\345\212\250\346\270\205\347\201\260", 0));
        label_3->setText(QApplication::translate("FormAshClean", "\343\200\220\344\272\256\345\272\246\351\230\210\345\200\274", 0));
        label_5->setText(QApplication::translate("FormAshClean", "\357\274\210\345\215\225\344\275\215\357\274\211\343\200\221", 0));
        toolButton_manual->setText(QApplication::translate("FormAshClean", "\346\211\213\345\212\250\346\270\205\347\201\260", 0));
        toolButton->setText(QApplication::translate("FormAshClean", "\347\241\256\345\256\232", 0));
        groupBox_2->setTitle(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\346\250\241\345\274\217", 0));
        label_9->setText(QApplication::translate("FormAshClean", "\357\274\210\347\247\222\357\274\211", 0));
        label_6->setText(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\345\273\266\346\227\266", 0));
        label->setText(QApplication::translate("FormAshClean", "\346\270\205\347\201\260\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class FormAshClean: public Ui_FormAshClean {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMASHCLEAN_H
