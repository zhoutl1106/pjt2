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
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAccuracyAdjust
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSlider *verticalSlider12;
    QLCDNumber *lcdNumber13;
    QSlider *verticalSlider13;
    QLabel *label_3;
    QLCDNumber *lcdNumber11;
    QLCDNumber *lcdNumber12;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *verticalSlider11;
    QWidget *widget_11u;
    QWidget *widget_12u;
    QWidget *widget_13u;
    QWidget *widget_13d;
    QWidget *widget_12d;
    QWidget *widget_11d;
    QGridLayout *gridLayout_2;
    QSlider *verticalSlider22;
    QLCDNumber *lcdNumber23;
    QSlider *verticalSlider23;
    QLCDNumber *lcdNumber21;
    QLCDNumber *lcdNumber22;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *verticalSlider21;
    QWidget *widget_21u;
    QWidget *widget_22u;
    QWidget *widget_23u;
    QWidget *widget_23d;
    QWidget *widget_15;
    QWidget *widget_22d;
    QWidget *widget_21d;
    QGridLayout *gridLayout_3;
    QSlider *verticalSlider32;
    QLCDNumber *lcdNumber33;
    QSlider *verticalSlider33;
    QLCDNumber *lcdNumber31;
    QLCDNumber *lcdNumber32;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *verticalSlider31;
    QWidget *widget_31u;
    QWidget *widget_32u;
    QWidget *widget_33u;
    QWidget *widget_33d;
    QWidget *widget_32d;
    QWidget *widget_31d;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QLabel *label;

    void setupUi(QWidget *FormAccuracyAdjust)
    {
        if (FormAccuracyAdjust->objectName().isEmpty())
            FormAccuracyAdjust->setObjectName(QString::fromUtf8("FormAccuracyAdjust"));
        FormAccuracyAdjust->resize(1024, 520);
        gridLayout_4 = new QGridLayout(FormAccuracyAdjust);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(20);
        gridLayout_4->setContentsMargins(50, 20, 50, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        label_6 = new QLabel(FormAccuracyAdjust);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        verticalSlider12 = new QSlider(FormAccuracyAdjust);
        verticalSlider12->setObjectName(QString::fromUtf8("verticalSlider12"));
        verticalSlider12->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalSlider12->sizePolicy().hasHeightForWidth());
        verticalSlider12->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(verticalSlider12, 2, 3, 1, 1, Qt::AlignHCenter);

        lcdNumber13 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber13->setObjectName(QString::fromUtf8("lcdNumber13"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber13->sizePolicy().hasHeightForWidth());
        lcdNumber13->setSizePolicy(sizePolicy2);
        lcdNumber13->setMinimumSize(QSize(0, 30));
        lcdNumber13->setSmallDecimalPoint(true);
        lcdNumber13->setDigitCount(3);
        lcdNumber13->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber13, 2, 6, 1, 1);

        verticalSlider13 = new QSlider(FormAccuracyAdjust);
        verticalSlider13->setObjectName(QString::fromUtf8("verticalSlider13"));
        verticalSlider13->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider13->sizePolicy().hasHeightForWidth());
        verticalSlider13->setSizePolicy(sizePolicy1);
        verticalSlider13->setMinimumSize(QSize(25, 0));
        verticalSlider13->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider13->setMinimum(-5);
        verticalSlider13->setMaximum(5);
        verticalSlider13->setTracking(true);
        verticalSlider13->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider13, 2, 5, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(FormAccuracyAdjust);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 1, 1, 6);

        lcdNumber11 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber11->setObjectName(QString::fromUtf8("lcdNumber11"));
        sizePolicy2.setHeightForWidth(lcdNumber11->sizePolicy().hasHeightForWidth());
        lcdNumber11->setSizePolicy(sizePolicy2);
        lcdNumber11->setMinimumSize(QSize(0, 30));
        lcdNumber11->setSmallDecimalPoint(true);
        lcdNumber11->setDigitCount(4);
        lcdNumber11->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber11, 2, 2, 1, 1);

        lcdNumber12 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber12->setObjectName(QString::fromUtf8("lcdNumber12"));
        sizePolicy2.setHeightForWidth(lcdNumber12->sizePolicy().hasHeightForWidth());
        lcdNumber12->setSizePolicy(sizePolicy2);
        lcdNumber12->setMinimumSize(QSize(0, 30));
        lcdNumber12->setSmallDecimalPoint(true);
        lcdNumber12->setDigitCount(4);
        lcdNumber12->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber12, 2, 4, 1, 1);

        label_4 = new QLabel(FormAccuracyAdjust);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(FormAccuracyAdjust);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        verticalSlider11 = new QSlider(FormAccuracyAdjust);
        verticalSlider11->setObjectName(QString::fromUtf8("verticalSlider11"));
        verticalSlider11->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider11->sizePolicy().hasHeightForWidth());
        verticalSlider11->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(verticalSlider11, 2, 1, 1, 1, Qt::AlignHCenter);

        widget_11u = new QWidget(FormAccuracyAdjust);
        widget_11u->setObjectName(QString::fromUtf8("widget_11u"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(40);
        sizePolicy3.setVerticalStretch(40);
        sizePolicy3.setHeightForWidth(widget_11u->sizePolicy().hasHeightForWidth());
        widget_11u->setSizePolicy(sizePolicy3);
        widget_11u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_11u, 1, 0, 1, 2);

        widget_12u = new QWidget(FormAccuracyAdjust);
        widget_12u->setObjectName(QString::fromUtf8("widget_12u"));
        sizePolicy3.setHeightForWidth(widget_12u->sizePolicy().hasHeightForWidth());
        widget_12u->setSizePolicy(sizePolicy3);
        widget_12u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_12u, 1, 3, 1, 1);

        widget_13u = new QWidget(FormAccuracyAdjust);
        widget_13u->setObjectName(QString::fromUtf8("widget_13u"));
        sizePolicy3.setHeightForWidth(widget_13u->sizePolicy().hasHeightForWidth());
        widget_13u->setSizePolicy(sizePolicy3);
        widget_13u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_13u, 1, 5, 1, 1);

        widget_13d = new QWidget(FormAccuracyAdjust);
        widget_13d->setObjectName(QString::fromUtf8("widget_13d"));
        sizePolicy3.setHeightForWidth(widget_13d->sizePolicy().hasHeightForWidth());
        widget_13d->setSizePolicy(sizePolicy3);
        widget_13d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_13d, 3, 5, 1, 1);

        widget_12d = new QWidget(FormAccuracyAdjust);
        widget_12d->setObjectName(QString::fromUtf8("widget_12d"));
        sizePolicy3.setHeightForWidth(widget_12d->sizePolicy().hasHeightForWidth());
        widget_12d->setSizePolicy(sizePolicy3);
        widget_12d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_12d, 3, 3, 1, 1);

        widget_11d = new QWidget(FormAccuracyAdjust);
        widget_11d->setObjectName(QString::fromUtf8("widget_11d"));
        sizePolicy3.setHeightForWidth(widget_11d->sizePolicy().hasHeightForWidth());
        widget_11d->setSizePolicy(sizePolicy3);
        widget_11d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_11d, 3, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        verticalSlider22 = new QSlider(FormAccuracyAdjust);
        verticalSlider22->setObjectName(QString::fromUtf8("verticalSlider22"));
        verticalSlider22->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider22->sizePolicy().hasHeightForWidth());
        verticalSlider22->setSizePolicy(sizePolicy1);
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

        gridLayout_2->addWidget(verticalSlider22, 2, 2, 1, 1, Qt::AlignHCenter);

        lcdNumber23 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber23->setObjectName(QString::fromUtf8("lcdNumber23"));
        sizePolicy2.setHeightForWidth(lcdNumber23->sizePolicy().hasHeightForWidth());
        lcdNumber23->setSizePolicy(sizePolicy2);
        lcdNumber23->setMinimumSize(QSize(0, 30));
        lcdNumber23->setSmallDecimalPoint(true);
        lcdNumber23->setDigitCount(3);
        lcdNumber23->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber23, 2, 5, 1, 1);

        verticalSlider23 = new QSlider(FormAccuracyAdjust);
        verticalSlider23->setObjectName(QString::fromUtf8("verticalSlider23"));
        verticalSlider23->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider23->sizePolicy().hasHeightForWidth());
        verticalSlider23->setSizePolicy(sizePolicy1);
        verticalSlider23->setMinimumSize(QSize(25, 0));
        verticalSlider23->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider23->setMinimum(-5);
        verticalSlider23->setMaximum(5);
        verticalSlider23->setTracking(true);
        verticalSlider23->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider23, 2, 4, 1, 1, Qt::AlignHCenter);

        lcdNumber21 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber21->setObjectName(QString::fromUtf8("lcdNumber21"));
        sizePolicy2.setHeightForWidth(lcdNumber21->sizePolicy().hasHeightForWidth());
        lcdNumber21->setSizePolicy(sizePolicy2);
        lcdNumber21->setMinimumSize(QSize(0, 30));
        lcdNumber21->setSmallDecimalPoint(true);
        lcdNumber21->setDigitCount(4);
        lcdNumber21->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber21, 2, 1, 1, 1);

        lcdNumber22 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber22->setObjectName(QString::fromUtf8("lcdNumber22"));
        sizePolicy2.setHeightForWidth(lcdNumber22->sizePolicy().hasHeightForWidth());
        lcdNumber22->setSizePolicy(sizePolicy2);
        lcdNumber22->setMinimumSize(QSize(0, 30));
        lcdNumber22->setSmallDecimalPoint(true);
        lcdNumber22->setDigitCount(4);
        lcdNumber22->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber22, 2, 3, 1, 1);

        label_9 = new QLabel(FormAccuracyAdjust);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(FormAccuracyAdjust);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 4, 0, 1, 6);

        label_7 = new QLabel(FormAccuracyAdjust);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(FormAccuracyAdjust);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 4, 1, 1);

        verticalSlider21 = new QSlider(FormAccuracyAdjust);
        verticalSlider21->setObjectName(QString::fromUtf8("verticalSlider21"));
        verticalSlider21->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider21->sizePolicy().hasHeightForWidth());
        verticalSlider21->setSizePolicy(sizePolicy1);
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

        gridLayout_2->addWidget(verticalSlider21, 2, 0, 1, 1, Qt::AlignHCenter);

        widget_21u = new QWidget(FormAccuracyAdjust);
        widget_21u->setObjectName(QString::fromUtf8("widget_21u"));
        sizePolicy3.setHeightForWidth(widget_21u->sizePolicy().hasHeightForWidth());
        widget_21u->setSizePolicy(sizePolicy3);
        widget_21u->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_21u, 1, 0, 1, 1);

        widget_22u = new QWidget(FormAccuracyAdjust);
        widget_22u->setObjectName(QString::fromUtf8("widget_22u"));
        sizePolicy3.setHeightForWidth(widget_22u->sizePolicy().hasHeightForWidth());
        widget_22u->setSizePolicy(sizePolicy3);
        widget_22u->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_22u, 1, 2, 1, 1);

        widget_23u = new QWidget(FormAccuracyAdjust);
        widget_23u->setObjectName(QString::fromUtf8("widget_23u"));
        sizePolicy3.setHeightForWidth(widget_23u->sizePolicy().hasHeightForWidth());
        widget_23u->setSizePolicy(sizePolicy3);
        widget_23u->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_23u, 1, 4, 1, 1);

        widget_23d = new QWidget(FormAccuracyAdjust);
        widget_23d->setObjectName(QString::fromUtf8("widget_23d"));
        sizePolicy3.setHeightForWidth(widget_23d->sizePolicy().hasHeightForWidth());
        widget_23d->setSizePolicy(sizePolicy3);
        widget_23d->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_23d, 3, 4, 1, 1);

        widget_15 = new QWidget(FormAccuracyAdjust);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        sizePolicy3.setHeightForWidth(widget_15->sizePolicy().hasHeightForWidth());
        widget_15->setSizePolicy(sizePolicy3);
        widget_15->setMinimumSize(QSize(40, 40));
        widget_22d = new QWidget(widget_15);
        widget_22d->setObjectName(QString::fromUtf8("widget_22d"));
        widget_22d->setGeometry(QRect(0, 0, 40, 40));
        sizePolicy3.setHeightForWidth(widget_22d->sizePolicy().hasHeightForWidth());
        widget_22d->setSizePolicy(sizePolicy3);
        widget_22d->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_15, 3, 2, 1, 1);

        widget_21d = new QWidget(FormAccuracyAdjust);
        widget_21d->setObjectName(QString::fromUtf8("widget_21d"));
        sizePolicy3.setHeightForWidth(widget_21d->sizePolicy().hasHeightForWidth());
        widget_21d->setSizePolicy(sizePolicy3);
        widget_21d->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_21d, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        verticalSlider32 = new QSlider(FormAccuracyAdjust);
        verticalSlider32->setObjectName(QString::fromUtf8("verticalSlider32"));
        verticalSlider32->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider32->sizePolicy().hasHeightForWidth());
        verticalSlider32->setSizePolicy(sizePolicy1);
        verticalSlider32->setMinimumSize(QSize(25, 0));
        verticalSlider32->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider32->setMinimum(-255);
        verticalSlider32->setMaximum(255);
        verticalSlider32->setTracking(true);
        verticalSlider32->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider32, 2, 2, 1, 1, Qt::AlignHCenter);

        lcdNumber33 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber33->setObjectName(QString::fromUtf8("lcdNumber33"));
        sizePolicy2.setHeightForWidth(lcdNumber33->sizePolicy().hasHeightForWidth());
        lcdNumber33->setSizePolicy(sizePolicy2);
        lcdNumber33->setMinimumSize(QSize(0, 30));
        lcdNumber33->setSmallDecimalPoint(true);
        lcdNumber33->setDigitCount(3);
        lcdNumber33->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber33, 2, 5, 1, 1);

        verticalSlider33 = new QSlider(FormAccuracyAdjust);
        verticalSlider33->setObjectName(QString::fromUtf8("verticalSlider33"));
        verticalSlider33->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider33->sizePolicy().hasHeightForWidth());
        verticalSlider33->setSizePolicy(sizePolicy1);
        verticalSlider33->setMinimumSize(QSize(25, 0));
        verticalSlider33->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider33->setMinimum(-5);
        verticalSlider33->setMaximum(5);
        verticalSlider33->setTracking(true);
        verticalSlider33->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider33, 2, 4, 1, 1, Qt::AlignHCenter);

        lcdNumber31 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber31->setObjectName(QString::fromUtf8("lcdNumber31"));
        sizePolicy2.setHeightForWidth(lcdNumber31->sizePolicy().hasHeightForWidth());
        lcdNumber31->setSizePolicy(sizePolicy2);
        lcdNumber31->setMinimumSize(QSize(0, 30));
        lcdNumber31->setSmallDecimalPoint(true);
        lcdNumber31->setDigitCount(4);
        lcdNumber31->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber31, 2, 1, 1, 1);

        lcdNumber32 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber32->setObjectName(QString::fromUtf8("lcdNumber32"));
        sizePolicy2.setHeightForWidth(lcdNumber32->sizePolicy().hasHeightForWidth());
        lcdNumber32->setSizePolicy(sizePolicy2);
        lcdNumber32->setMinimumSize(QSize(0, 30));
        lcdNumber32->setSmallDecimalPoint(true);
        lcdNumber32->setDigitCount(4);
        lcdNumber32->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber32, 2, 3, 1, 1);

        label_13 = new QLabel(FormAccuracyAdjust);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(FormAccuracyAdjust);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_14, 4, 0, 1, 6);

        label_11 = new QLabel(FormAccuracyAdjust);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 0, 2, 1, 1);

        label_12 = new QLabel(FormAccuracyAdjust);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 0, 4, 1, 1);

        verticalSlider31 = new QSlider(FormAccuracyAdjust);
        verticalSlider31->setObjectName(QString::fromUtf8("verticalSlider31"));
        verticalSlider31->setEnabled(false);
        sizePolicy1.setHeightForWidth(verticalSlider31->sizePolicy().hasHeightForWidth());
        verticalSlider31->setSizePolicy(sizePolicy1);
        verticalSlider31->setMinimumSize(QSize(25, 0));
        verticalSlider31->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider31->setMinimum(-255);
        verticalSlider31->setMaximum(255);
        verticalSlider31->setTracking(true);
        verticalSlider31->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider31, 2, 0, 1, 1, Qt::AlignHCenter);

        widget_31u = new QWidget(FormAccuracyAdjust);
        widget_31u->setObjectName(QString::fromUtf8("widget_31u"));
        sizePolicy3.setHeightForWidth(widget_31u->sizePolicy().hasHeightForWidth());
        widget_31u->setSizePolicy(sizePolicy3);
        widget_31u->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_31u, 1, 0, 1, 1);

        widget_32u = new QWidget(FormAccuracyAdjust);
        widget_32u->setObjectName(QString::fromUtf8("widget_32u"));
        sizePolicy3.setHeightForWidth(widget_32u->sizePolicy().hasHeightForWidth());
        widget_32u->setSizePolicy(sizePolicy3);
        widget_32u->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_32u, 1, 2, 1, 1);

        widget_33u = new QWidget(FormAccuracyAdjust);
        widget_33u->setObjectName(QString::fromUtf8("widget_33u"));
        sizePolicy3.setHeightForWidth(widget_33u->sizePolicy().hasHeightForWidth());
        widget_33u->setSizePolicy(sizePolicy3);
        widget_33u->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_33u, 1, 4, 1, 1);

        widget_33d = new QWidget(FormAccuracyAdjust);
        widget_33d->setObjectName(QString::fromUtf8("widget_33d"));
        sizePolicy3.setHeightForWidth(widget_33d->sizePolicy().hasHeightForWidth());
        widget_33d->setSizePolicy(sizePolicy3);
        widget_33d->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_33d, 3, 4, 1, 1);

        widget_32d = new QWidget(FormAccuracyAdjust);
        widget_32d->setObjectName(QString::fromUtf8("widget_32d"));
        sizePolicy3.setHeightForWidth(widget_32d->sizePolicy().hasHeightForWidth());
        widget_32d->setSizePolicy(sizePolicy3);
        widget_32d->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_32d, 3, 2, 1, 1);

        widget_31d = new QWidget(FormAccuracyAdjust);
        widget_31d->setObjectName(QString::fromUtf8("widget_31d"));
        sizePolicy3.setHeightForWidth(widget_31d->sizePolicy().hasHeightForWidth());
        widget_31d->setSizePolicy(sizePolicy3);
        widget_31d->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_31d, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(100);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(FormAccuracyAdjust);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(widget);

        toolButton_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton_2);

        toolButton = new QToolButton(FormAccuracyAdjust);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton);


        gridLayout_4->addLayout(verticalLayout, 1, 3, 1, 1);

        label = new QLabel(FormAccuracyAdjust);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 4);


        retranslateUi(FormAccuracyAdjust);

        QMetaObject::connectSlotsByName(FormAccuracyAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormAccuracyAdjust)
    {
        FormAccuracyAdjust->setWindowTitle(QApplication::translate("FormAccuracyAdjust", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\200\346\254\241\351\200\211", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\214\346\254\241\351\200\211", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\211\346\254\241\351\200\211", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormAccuracyAdjust", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormAccuracyAdjust", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormAccuracyAdjust", "\347\262\276\345\272\246\350\260\203\346\225\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAccuracyAdjust: public Ui_FormAccuracyAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACCURACYADJUST_H
