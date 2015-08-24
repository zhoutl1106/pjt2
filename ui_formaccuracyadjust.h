/********************************************************************************
** Form generated from reading UI file 'formaccuracyadjust.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMACCURACYADJUST_H
#define UI_FORMACCURACYADJUST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAccuracyAdjust
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QWidget *widget_12d;
    QWidget *widget_11d;
    QLCDNumber *lcdNumber12;
    QLCDNumber *lcdNumber11;
    QSlider *verticalSlider12;
    QWidget *widget_12u;
    QLabel *label_6;
    QLabel *label_15;
    QSlider *verticalSlider11;
    QWidget *widget_11u;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButtonValve;
    QToolButton *toolButtonVibrator;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QWidget *widget_22d;
    QWidget *widget_21d;
    QLCDNumber *lcdNumber22;
    QLCDNumber *lcdNumber21;
    QSlider *verticalSlider22;
    QWidget *widget_22u;
    QLabel *label_7;
    QLabel *label_16;
    QSlider *verticalSlider21;
    QWidget *widget_21u;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *FormAccuracyAdjust)
    {
        if (FormAccuracyAdjust->objectName().isEmpty())
            FormAccuracyAdjust->setObjectName(QString::fromUtf8("FormAccuracyAdjust"));
        FormAccuracyAdjust->resize(1024, 520);
        gridLayout_3 = new QGridLayout(FormAccuracyAdjust);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(100);
        gridLayout_3->setVerticalSpacing(20);
        gridLayout_3->setContentsMargins(50, -1, 50, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        widget_12d = new QWidget(FormAccuracyAdjust);
        widget_12d->setObjectName(QString::fromUtf8("widget_12d"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(widget_12d->sizePolicy().hasHeightForWidth());
        widget_12d->setSizePolicy(sizePolicy);
        widget_12d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_12d, 5, 3, 1, 1);

        widget_11d = new QWidget(FormAccuracyAdjust);
        widget_11d->setObjectName(QString::fromUtf8("widget_11d"));
        sizePolicy.setHeightForWidth(widget_11d->sizePolicy().hasHeightForWidth());
        widget_11d->setSizePolicy(sizePolicy);
        widget_11d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_11d, 5, 1, 1, 1);

        lcdNumber12 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber12->setObjectName(QString::fromUtf8("lcdNumber12"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lcdNumber12->sizePolicy().hasHeightForWidth());
        lcdNumber12->setSizePolicy(sizePolicy1);
        lcdNumber12->setMinimumSize(QSize(0, 30));
        lcdNumber12->setSmallDecimalPoint(true);
        lcdNumber12->setDigitCount(4);
        lcdNumber12->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber12, 4, 4, 1, 1);

        lcdNumber11 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber11->setObjectName(QString::fromUtf8("lcdNumber11"));
        sizePolicy1.setHeightForWidth(lcdNumber11->sizePolicy().hasHeightForWidth());
        lcdNumber11->setSizePolicy(sizePolicy1);
        lcdNumber11->setMinimumSize(QSize(0, 30));
        lcdNumber11->setSmallDecimalPoint(true);
        lcdNumber11->setDigitCount(4);
        lcdNumber11->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber11, 4, 2, 1, 1);

        verticalSlider12 = new QSlider(FormAccuracyAdjust);
        verticalSlider12->setObjectName(QString::fromUtf8("verticalSlider12"));
        verticalSlider12->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(verticalSlider12->sizePolicy().hasHeightForWidth());
        verticalSlider12->setSizePolicy(sizePolicy2);
        verticalSlider12->setMinimumSize(QSize(25, 0));
        verticalSlider12->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
"     /*border: 1px solid #999999;\n"
"     height: 330px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"	width:15px;\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 5px 0;\n"
" }\n"
" \n"
"QSlider::handle {\n"
"	border-image: url(:/image/slider.png);\n"
"     width: 25px;\n"
"     margin: -15px -25px; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        verticalSlider12->setMinimum(-255);
        verticalSlider12->setMaximum(255);
        verticalSlider12->setTracking(true);
        verticalSlider12->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider12, 4, 3, 1, 1, Qt::AlignHCenter);

        widget_12u = new QWidget(FormAccuracyAdjust);
        widget_12u->setObjectName(QString::fromUtf8("widget_12u"));
        sizePolicy.setHeightForWidth(widget_12u->sizePolicy().hasHeightForWidth());
        widget_12u->setSizePolicy(sizePolicy);
        widget_12u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_12u, 3, 3, 1, 1);

        label_6 = new QLabel(FormAccuracyAdjust);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        QFont font;
        font.setPointSize(15);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_15 = new QLabel(FormAccuracyAdjust);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 0, 1, 1, 4);

        verticalSlider11 = new QSlider(FormAccuracyAdjust);
        verticalSlider11->setObjectName(QString::fromUtf8("verticalSlider11"));
        verticalSlider11->setEnabled(false);
        sizePolicy2.setHeightForWidth(verticalSlider11->sizePolicy().hasHeightForWidth());
        verticalSlider11->setSizePolicy(sizePolicy2);
        verticalSlider11->setMinimumSize(QSize(25, 0));
        verticalSlider11->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
"     /*border: 1px solid #999999;\n"
"     height: 330px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"	width:15px;\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 5px 0;\n"
" }\n"
" \n"
"QSlider::handle {\n"
"	border-image: url(:/image/slider.png);\n"
"     width: 25px;\n"
"     margin: -15px -25px; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        verticalSlider11->setMinimum(-255);
        verticalSlider11->setMaximum(255);
        verticalSlider11->setTracking(true);
        verticalSlider11->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider11, 4, 1, 1, 1, Qt::AlignHCenter);

        widget_11u = new QWidget(FormAccuracyAdjust);
        widget_11u->setObjectName(QString::fromUtf8("widget_11u"));
        sizePolicy.setHeightForWidth(widget_11u->sizePolicy().hasHeightForWidth());
        widget_11u->setSizePolicy(sizePolicy);
        widget_11u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_11u, 3, 1, 1, 1);

        label_4 = new QLabel(FormAccuracyAdjust);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButtonValve = new QToolButton(FormAccuracyAdjust);
        toolButtonValve->setObjectName(QString::fromUtf8("toolButtonValve"));
        sizePolicy1.setHeightForWidth(toolButtonValve->sizePolicy().hasHeightForWidth());
        toolButtonValve->setSizePolicy(sizePolicy1);
        toolButtonValve->setMinimumSize(QSize(150, 50));

        verticalLayout->addWidget(toolButtonValve);

        toolButtonVibrator = new QToolButton(FormAccuracyAdjust);
        toolButtonVibrator->setObjectName(QString::fromUtf8("toolButtonVibrator"));
        sizePolicy1.setHeightForWidth(toolButtonVibrator->sizePolicy().hasHeightForWidth());
        toolButtonVibrator->setSizePolicy(sizePolicy1);
        toolButtonVibrator->setMinimumSize(QSize(150, 50));

        verticalLayout->addWidget(toolButtonVibrator);

        toolButton_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy1.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy1);
        toolButton_2->setMinimumSize(QSize(150, 50));

        verticalLayout->addWidget(toolButton_2);

        toolButton = new QToolButton(FormAccuracyAdjust);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMinimumSize(QSize(150, 50));

        verticalLayout->addWidget(toolButton);


        gridLayout_3->addLayout(verticalLayout, 1, 2, 2, 1);

        label = new QLabel(FormAccuracyAdjust);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        widget_22d = new QWidget(FormAccuracyAdjust);
        widget_22d->setObjectName(QString::fromUtf8("widget_22d"));
        sizePolicy.setHeightForWidth(widget_22d->sizePolicy().hasHeightForWidth());
        widget_22d->setSizePolicy(sizePolicy);
        widget_22d->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_22d, 5, 3, 1, 1);

        widget_21d = new QWidget(FormAccuracyAdjust);
        widget_21d->setObjectName(QString::fromUtf8("widget_21d"));
        sizePolicy.setHeightForWidth(widget_21d->sizePolicy().hasHeightForWidth());
        widget_21d->setSizePolicy(sizePolicy);
        widget_21d->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_21d, 5, 1, 1, 1);

        lcdNumber22 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber22->setObjectName(QString::fromUtf8("lcdNumber22"));
        sizePolicy1.setHeightForWidth(lcdNumber22->sizePolicy().hasHeightForWidth());
        lcdNumber22->setSizePolicy(sizePolicy1);
        lcdNumber22->setMinimumSize(QSize(0, 30));
        lcdNumber22->setSmallDecimalPoint(true);
        lcdNumber22->setDigitCount(4);
        lcdNumber22->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber22, 4, 4, 1, 1);

        lcdNumber21 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber21->setObjectName(QString::fromUtf8("lcdNumber21"));
        sizePolicy1.setHeightForWidth(lcdNumber21->sizePolicy().hasHeightForWidth());
        lcdNumber21->setSizePolicy(sizePolicy1);
        lcdNumber21->setMinimumSize(QSize(0, 30));
        lcdNumber21->setSmallDecimalPoint(true);
        lcdNumber21->setDigitCount(4);
        lcdNumber21->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber21, 4, 2, 1, 1);

        verticalSlider22 = new QSlider(FormAccuracyAdjust);
        verticalSlider22->setObjectName(QString::fromUtf8("verticalSlider22"));
        verticalSlider22->setEnabled(false);
        sizePolicy2.setHeightForWidth(verticalSlider22->sizePolicy().hasHeightForWidth());
        verticalSlider22->setSizePolicy(sizePolicy2);
        verticalSlider22->setMinimumSize(QSize(25, 0));
        verticalSlider22->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
"     /*border: 1px solid #999999;\n"
"     height: 330px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"	width:15px;\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 5px 0;\n"
" }\n"
" \n"
"QSlider::handle {\n"
"	border-image: url(:/image/slider.png);\n"
"     width: 25px;\n"
"     margin: -15px -25px; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        verticalSlider22->setMinimum(-255);
        verticalSlider22->setMaximum(255);
        verticalSlider22->setTracking(true);
        verticalSlider22->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider22, 4, 3, 1, 1, Qt::AlignHCenter);

        widget_22u = new QWidget(FormAccuracyAdjust);
        widget_22u->setObjectName(QString::fromUtf8("widget_22u"));
        sizePolicy.setHeightForWidth(widget_22u->sizePolicy().hasHeightForWidth());
        widget_22u->setSizePolicy(sizePolicy);
        widget_22u->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_22u, 3, 3, 1, 1);

        label_7 = new QLabel(FormAccuracyAdjust);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        label_16 = new QLabel(FormAccuracyAdjust);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_16, 0, 1, 1, 4);

        verticalSlider21 = new QSlider(FormAccuracyAdjust);
        verticalSlider21->setObjectName(QString::fromUtf8("verticalSlider21"));
        verticalSlider21->setEnabled(false);
        sizePolicy2.setHeightForWidth(verticalSlider21->sizePolicy().hasHeightForWidth());
        verticalSlider21->setSizePolicy(sizePolicy2);
        verticalSlider21->setMinimumSize(QSize(25, 0));
        verticalSlider21->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
"     /*border: 1px solid #999999;\n"
"     height: 330px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"	width:15px;\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 5px 0;\n"
" }\n"
" \n"
"QSlider::handle {\n"
"	border-image: url(:/image/slider.png);\n"
"     width: 25px;\n"
"     margin: -15px -25px; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }"));
        verticalSlider21->setMinimum(-255);
        verticalSlider21->setMaximum(255);
        verticalSlider21->setTracking(true);
        verticalSlider21->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider21, 4, 1, 1, 1, Qt::AlignHCenter);

        widget_21u = new QWidget(FormAccuracyAdjust);
        widget_21u->setObjectName(QString::fromUtf8("widget_21u"));
        sizePolicy.setHeightForWidth(widget_21u->sizePolicy().hasHeightForWidth());
        widget_21u->setSizePolicy(sizePolicy);
        widget_21u->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_21u, 3, 1, 1, 1);

        label_5 = new QLabel(FormAccuracyAdjust);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_1 = new QRadioButton(FormAccuracyAdjust);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(radioButton_1->sizePolicy().hasHeightForWidth());
        radioButton_1->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(20);
        radioButton_1->setFont(font1);
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
        radioButton_1->setChecked(true);

        horizontalLayout->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(FormAccuracyAdjust);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy4.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy4);
        radioButton_2->setFont(font1);
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

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(FormAccuracyAdjust);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy4.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy4);
        radioButton_3->setFont(font1);
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

        horizontalLayout->addWidget(radioButton_3);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(FormAccuracyAdjust);

        QMetaObject::connectSlotsByName(FormAccuracyAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormAccuracyAdjust)
    {
        FormAccuracyAdjust->setWindowTitle(QApplication::translate("FormAccuracyAdjust", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("FormAccuracyAdjust", "\345\211\215\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        toolButtonValve->setText(QApplication::translate("FormAccuracyAdjust", "\345\226\267\351\230\200 \345\205\263", 0, QApplication::UnicodeUTF8));
        toolButtonVibrator->setText(QApplication::translate("FormAccuracyAdjust", "\344\276\233\346\226\231 \345\205\263", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormAccuracyAdjust", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormAccuracyAdjust", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormAccuracyAdjust", "\347\262\276\345\272\246\350\260\203\346\225\264", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("FormAccuracyAdjust", "\345\220\216\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        radioButton_1->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\200\346\254\241\351\200\211", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\214\346\254\241\351\200\211", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\211\346\254\241\351\200\211", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAccuracyAdjust: public Ui_FormAccuracyAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACCURACYADJUST_H
