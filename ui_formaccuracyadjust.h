/********************************************************************************
** Form generated from reading UI file 'formaccuracyadjust.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMACCURACYADJUST_H
#define UI_FORMACCURACYADJUST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAccuracyAdjust
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSlider *verticalSlider12;
    QToolButton *toolButton_12d;
    QToolButton *toolButton_13u;
    QLCDNumber *lcdNumber13;
    QToolButton *toolButton_12u;
    QToolButton *toolButton_13d;
    QSlider *verticalSlider13;
    QLabel *label_3;
    QToolButton *toolButton_11u;
    QToolButton *toolButton_11d;
    QLCDNumber *lcdNumber11;
    QLCDNumber *lcdNumber12;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *verticalSlider11;
    QGridLayout *gridLayout_2;
    QSlider *verticalSlider22;
    QToolButton *toolButton_22d;
    QToolButton *toolButton_23u;
    QLCDNumber *lcdNumber23;
    QToolButton *toolButton_22u;
    QToolButton *toolButton_23d;
    QSlider *verticalSlider23;
    QToolButton *toolButton_21u;
    QToolButton *toolButton_21d;
    QLCDNumber *lcdNumber21;
    QLCDNumber *lcdNumber22;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *verticalSlider21;
    QGridLayout *gridLayout_3;
    QSlider *verticalSlider32;
    QToolButton *toolButton_32d;
    QToolButton *toolButton_33u;
    QLCDNumber *lcdNumber33;
    QToolButton *toolButton_32u;
    QToolButton *toolButton_33d;
    QSlider *verticalSlider33;
    QToolButton *toolButton_31u;
    QToolButton *toolButton_31d;
    QLCDNumber *lcdNumber31;
    QLCDNumber *lcdNumber32;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *verticalSlider31;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QLabel *label;

    void setupUi(QWidget *FormAccuracyAdjust)
    {
        if (FormAccuracyAdjust->objectName().isEmpty())
            FormAccuracyAdjust->setObjectName(QStringLiteral("FormAccuracyAdjust"));
        FormAccuracyAdjust->resize(1024, 520);
        gridLayout_4 = new QGridLayout(FormAccuracyAdjust);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(30);
        gridLayout_4->setVerticalSpacing(20);
        gridLayout_4->setContentsMargins(50, 20, 50, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        label_6 = new QLabel(FormAccuracyAdjust);
        label_6->setObjectName(QStringLiteral("label_6"));
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
        verticalSlider12->setObjectName(QStringLiteral("verticalSlider12"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalSlider12->sizePolicy().hasHeightForWidth());
        verticalSlider12->setSizePolicy(sizePolicy1);
        verticalSlider12->setMinimumSize(QSize(25, 0));
        verticalSlider12->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider12->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider12, 2, 3, 1, 1, Qt::AlignHCenter);

        toolButton_12d = new QToolButton(FormAccuracyAdjust);
        toolButton_12d->setObjectName(QStringLiteral("toolButton_12d"));
        toolButton_12d->setMinimumSize(QSize(40, 40));
        toolButton_12d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout->addWidget(toolButton_12d, 3, 3, 1, 1);

        toolButton_13u = new QToolButton(FormAccuracyAdjust);
        toolButton_13u->setObjectName(QStringLiteral("toolButton_13u"));
        toolButton_13u->setMinimumSize(QSize(40, 40));
        toolButton_13u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout->addWidget(toolButton_13u, 1, 5, 1, 1);

        lcdNumber13 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber13->setObjectName(QStringLiteral("lcdNumber13"));
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

        toolButton_12u = new QToolButton(FormAccuracyAdjust);
        toolButton_12u->setObjectName(QStringLiteral("toolButton_12u"));
        toolButton_12u->setMinimumSize(QSize(40, 40));
        toolButton_12u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout->addWidget(toolButton_12u, 1, 3, 1, 1);

        toolButton_13d = new QToolButton(FormAccuracyAdjust);
        toolButton_13d->setObjectName(QStringLiteral("toolButton_13d"));
        toolButton_13d->setMinimumSize(QSize(40, 40));
        toolButton_13d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout->addWidget(toolButton_13d, 3, 5, 1, 1);

        verticalSlider13 = new QSlider(FormAccuracyAdjust);
        verticalSlider13->setObjectName(QStringLiteral("verticalSlider13"));
        sizePolicy1.setHeightForWidth(verticalSlider13->sizePolicy().hasHeightForWidth());
        verticalSlider13->setSizePolicy(sizePolicy1);
        verticalSlider13->setMinimumSize(QSize(25, 0));
        verticalSlider13->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider13->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider13, 2, 5, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(FormAccuracyAdjust);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 1, 1, 6);

        toolButton_11u = new QToolButton(FormAccuracyAdjust);
        toolButton_11u->setObjectName(QStringLiteral("toolButton_11u"));
        toolButton_11u->setMinimumSize(QSize(40, 40));
        toolButton_11u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout->addWidget(toolButton_11u, 1, 1, 1, 1, Qt::AlignHCenter);

        toolButton_11d = new QToolButton(FormAccuracyAdjust);
        toolButton_11d->setObjectName(QStringLiteral("toolButton_11d"));
        toolButton_11d->setMinimumSize(QSize(40, 40));
        toolButton_11d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout->addWidget(toolButton_11d, 3, 1, 1, 1, Qt::AlignHCenter);

        lcdNumber11 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber11->setObjectName(QStringLiteral("lcdNumber11"));
        sizePolicy2.setHeightForWidth(lcdNumber11->sizePolicy().hasHeightForWidth());
        lcdNumber11->setSizePolicy(sizePolicy2);
        lcdNumber11->setMinimumSize(QSize(0, 30));
        lcdNumber11->setSmallDecimalPoint(true);
        lcdNumber11->setDigitCount(4);
        lcdNumber11->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber11, 2, 2, 1, 1);

        lcdNumber12 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber12->setObjectName(QStringLiteral("lcdNumber12"));
        sizePolicy2.setHeightForWidth(lcdNumber12->sizePolicy().hasHeightForWidth());
        lcdNumber12->setSizePolicy(sizePolicy2);
        lcdNumber12->setMinimumSize(QSize(0, 30));
        lcdNumber12->setSmallDecimalPoint(true);
        lcdNumber12->setDigitCount(4);
        lcdNumber12->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber12, 2, 4, 1, 1);

        label_4 = new QLabel(FormAccuracyAdjust);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(FormAccuracyAdjust);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        verticalSlider11 = new QSlider(FormAccuracyAdjust);
        verticalSlider11->setObjectName(QStringLiteral("verticalSlider11"));
        sizePolicy1.setHeightForWidth(verticalSlider11->sizePolicy().hasHeightForWidth());
        verticalSlider11->setSizePolicy(sizePolicy1);
        verticalSlider11->setMinimumSize(QSize(25, 0));
        verticalSlider11->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider11->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider11, 2, 1, 1, 1, Qt::AlignHCenter);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        verticalSlider22 = new QSlider(FormAccuracyAdjust);
        verticalSlider22->setObjectName(QStringLiteral("verticalSlider22"));
        sizePolicy1.setHeightForWidth(verticalSlider22->sizePolicy().hasHeightForWidth());
        verticalSlider22->setSizePolicy(sizePolicy1);
        verticalSlider22->setMinimumSize(QSize(25, 0));
        verticalSlider22->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider22->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider22, 2, 2, 1, 1, Qt::AlignHCenter);

        toolButton_22d = new QToolButton(FormAccuracyAdjust);
        toolButton_22d->setObjectName(QStringLiteral("toolButton_22d"));
        toolButton_22d->setMinimumSize(QSize(40, 40));
        toolButton_22d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout_2->addWidget(toolButton_22d, 3, 2, 1, 1);

        toolButton_23u = new QToolButton(FormAccuracyAdjust);
        toolButton_23u->setObjectName(QStringLiteral("toolButton_23u"));
        toolButton_23u->setMinimumSize(QSize(40, 40));
        toolButton_23u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout_2->addWidget(toolButton_23u, 1, 4, 1, 1);

        lcdNumber23 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber23->setObjectName(QStringLiteral("lcdNumber23"));
        sizePolicy2.setHeightForWidth(lcdNumber23->sizePolicy().hasHeightForWidth());
        lcdNumber23->setSizePolicy(sizePolicy2);
        lcdNumber23->setMinimumSize(QSize(0, 30));
        lcdNumber23->setSmallDecimalPoint(true);
        lcdNumber23->setDigitCount(3);
        lcdNumber23->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber23, 2, 5, 1, 1);

        toolButton_22u = new QToolButton(FormAccuracyAdjust);
        toolButton_22u->setObjectName(QStringLiteral("toolButton_22u"));
        toolButton_22u->setMinimumSize(QSize(40, 40));
        toolButton_22u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout_2->addWidget(toolButton_22u, 1, 2, 1, 1);

        toolButton_23d = new QToolButton(FormAccuracyAdjust);
        toolButton_23d->setObjectName(QStringLiteral("toolButton_23d"));
        toolButton_23d->setMinimumSize(QSize(40, 40));
        toolButton_23d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout_2->addWidget(toolButton_23d, 3, 4, 1, 1);

        verticalSlider23 = new QSlider(FormAccuracyAdjust);
        verticalSlider23->setObjectName(QStringLiteral("verticalSlider23"));
        sizePolicy1.setHeightForWidth(verticalSlider23->sizePolicy().hasHeightForWidth());
        verticalSlider23->setSizePolicy(sizePolicy1);
        verticalSlider23->setMinimumSize(QSize(25, 0));
        verticalSlider23->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider23->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider23, 2, 4, 1, 1, Qt::AlignHCenter);

        toolButton_21u = new QToolButton(FormAccuracyAdjust);
        toolButton_21u->setObjectName(QStringLiteral("toolButton_21u"));
        toolButton_21u->setMinimumSize(QSize(40, 40));
        toolButton_21u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout_2->addWidget(toolButton_21u, 1, 0, 1, 1, Qt::AlignHCenter);

        toolButton_21d = new QToolButton(FormAccuracyAdjust);
        toolButton_21d->setObjectName(QStringLiteral("toolButton_21d"));
        toolButton_21d->setMinimumSize(QSize(40, 40));
        toolButton_21d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout_2->addWidget(toolButton_21d, 3, 0, 1, 1, Qt::AlignHCenter);

        lcdNumber21 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber21->setObjectName(QStringLiteral("lcdNumber21"));
        sizePolicy2.setHeightForWidth(lcdNumber21->sizePolicy().hasHeightForWidth());
        lcdNumber21->setSizePolicy(sizePolicy2);
        lcdNumber21->setMinimumSize(QSize(0, 30));
        lcdNumber21->setSmallDecimalPoint(true);
        lcdNumber21->setDigitCount(4);
        lcdNumber21->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber21, 2, 1, 1, 1);

        lcdNumber22 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber22->setObjectName(QStringLiteral("lcdNumber22"));
        sizePolicy2.setHeightForWidth(lcdNumber22->sizePolicy().hasHeightForWidth());
        lcdNumber22->setSizePolicy(sizePolicy2);
        lcdNumber22->setMinimumSize(QSize(0, 30));
        lcdNumber22->setSmallDecimalPoint(true);
        lcdNumber22->setDigitCount(4);
        lcdNumber22->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber22, 2, 3, 1, 1);

        label_9 = new QLabel(FormAccuracyAdjust);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(FormAccuracyAdjust);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 4, 0, 1, 6);

        label_7 = new QLabel(FormAccuracyAdjust);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(FormAccuracyAdjust);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 4, 1, 1);

        verticalSlider21 = new QSlider(FormAccuracyAdjust);
        verticalSlider21->setObjectName(QStringLiteral("verticalSlider21"));
        sizePolicy1.setHeightForWidth(verticalSlider21->sizePolicy().hasHeightForWidth());
        verticalSlider21->setSizePolicy(sizePolicy1);
        verticalSlider21->setMinimumSize(QSize(25, 0));
        verticalSlider21->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider21->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider21, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_4->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        verticalSlider32 = new QSlider(FormAccuracyAdjust);
        verticalSlider32->setObjectName(QStringLiteral("verticalSlider32"));
        sizePolicy1.setHeightForWidth(verticalSlider32->sizePolicy().hasHeightForWidth());
        verticalSlider32->setSizePolicy(sizePolicy1);
        verticalSlider32->setMinimumSize(QSize(25, 0));
        verticalSlider32->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider32->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider32, 2, 2, 1, 1, Qt::AlignHCenter);

        toolButton_32d = new QToolButton(FormAccuracyAdjust);
        toolButton_32d->setObjectName(QStringLiteral("toolButton_32d"));
        toolButton_32d->setMinimumSize(QSize(40, 40));
        toolButton_32d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout_3->addWidget(toolButton_32d, 3, 2, 1, 1);

        toolButton_33u = new QToolButton(FormAccuracyAdjust);
        toolButton_33u->setObjectName(QStringLiteral("toolButton_33u"));
        toolButton_33u->setMinimumSize(QSize(40, 40));
        toolButton_33u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout_3->addWidget(toolButton_33u, 1, 4, 1, 1);

        lcdNumber33 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber33->setObjectName(QStringLiteral("lcdNumber33"));
        sizePolicy2.setHeightForWidth(lcdNumber33->sizePolicy().hasHeightForWidth());
        lcdNumber33->setSizePolicy(sizePolicy2);
        lcdNumber33->setMinimumSize(QSize(0, 30));
        lcdNumber33->setSmallDecimalPoint(true);
        lcdNumber33->setDigitCount(3);
        lcdNumber33->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber33, 2, 5, 1, 1);

        toolButton_32u = new QToolButton(FormAccuracyAdjust);
        toolButton_32u->setObjectName(QStringLiteral("toolButton_32u"));
        toolButton_32u->setMinimumSize(QSize(40, 40));
        toolButton_32u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout_3->addWidget(toolButton_32u, 1, 2, 1, 1);

        toolButton_33d = new QToolButton(FormAccuracyAdjust);
        toolButton_33d->setObjectName(QStringLiteral("toolButton_33d"));
        toolButton_33d->setMinimumSize(QSize(40, 40));
        toolButton_33d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout_3->addWidget(toolButton_33d, 3, 4, 1, 1);

        verticalSlider33 = new QSlider(FormAccuracyAdjust);
        verticalSlider33->setObjectName(QStringLiteral("verticalSlider33"));
        sizePolicy1.setHeightForWidth(verticalSlider33->sizePolicy().hasHeightForWidth());
        verticalSlider33->setSizePolicy(sizePolicy1);
        verticalSlider33->setMinimumSize(QSize(25, 0));
        verticalSlider33->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider33->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider33, 2, 4, 1, 1, Qt::AlignHCenter);

        toolButton_31u = new QToolButton(FormAccuracyAdjust);
        toolButton_31u->setObjectName(QStringLiteral("toolButton_31u"));
        toolButton_31u->setMinimumSize(QSize(40, 40));
        toolButton_31u->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/upG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/upR.png);\n"
"}"));

        gridLayout_3->addWidget(toolButton_31u, 1, 0, 1, 1, Qt::AlignHCenter);

        toolButton_31d = new QToolButton(FormAccuracyAdjust);
        toolButton_31d->setObjectName(QStringLiteral("toolButton_31d"));
        toolButton_31d->setMinimumSize(QSize(40, 40));
        toolButton_31d->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	font-size:20px;\n"
"    border-image: url(:/image/downG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/downR.png);\n"
"}"));

        gridLayout_3->addWidget(toolButton_31d, 3, 0, 1, 1, Qt::AlignHCenter);

        lcdNumber31 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber31->setObjectName(QStringLiteral("lcdNumber31"));
        sizePolicy2.setHeightForWidth(lcdNumber31->sizePolicy().hasHeightForWidth());
        lcdNumber31->setSizePolicy(sizePolicy2);
        lcdNumber31->setMinimumSize(QSize(0, 30));
        lcdNumber31->setSmallDecimalPoint(true);
        lcdNumber31->setDigitCount(4);
        lcdNumber31->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber31, 2, 1, 1, 1);

        lcdNumber32 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber32->setObjectName(QStringLiteral("lcdNumber32"));
        sizePolicy2.setHeightForWidth(lcdNumber32->sizePolicy().hasHeightForWidth());
        lcdNumber32->setSizePolicy(sizePolicy2);
        lcdNumber32->setMinimumSize(QSize(0, 30));
        lcdNumber32->setSmallDecimalPoint(true);
        lcdNumber32->setDigitCount(4);
        lcdNumber32->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber32, 2, 3, 1, 1);

        label_13 = new QLabel(FormAccuracyAdjust);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(FormAccuracyAdjust);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_14, 4, 0, 1, 6);

        label_11 = new QLabel(FormAccuracyAdjust);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 0, 2, 1, 1);

        label_12 = new QLabel(FormAccuracyAdjust);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 0, 4, 1, 1);

        verticalSlider31 = new QSlider(FormAccuracyAdjust);
        verticalSlider31->setObjectName(QStringLiteral("verticalSlider31"));
        sizePolicy1.setHeightForWidth(verticalSlider31->sizePolicy().hasHeightForWidth());
        verticalSlider31->setSizePolicy(sizePolicy1);
        verticalSlider31->setMinimumSize(QSize(25, 0));
        verticalSlider31->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider31->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider31, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_4->addLayout(gridLayout_3, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(100);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(FormAccuracyAdjust);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(widget);

        toolButton_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton_2);

        toolButton = new QToolButton(FormAccuracyAdjust);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton);


        gridLayout_4->addLayout(verticalLayout, 1, 3, 1, 1);

        label = new QLabel(FormAccuracyAdjust);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 4);


        retranslateUi(FormAccuracyAdjust);

        QMetaObject::connectSlotsByName(FormAccuracyAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormAccuracyAdjust)
    {
        FormAccuracyAdjust->setWindowTitle(QApplication::translate("FormAccuracyAdjust", "Form", 0));
        label_6->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0));
        toolButton_12d->setText(QString());
        toolButton_13u->setText(QString());
        toolButton_12u->setText(QString());
        toolButton_13d->setText(QString());
        label_3->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\200\346\254\241\351\200\211", 0));
        toolButton_11u->setText(QString());
        toolButton_11d->setText(QString());
        label_4->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0));
        label_5->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0));
        toolButton_22d->setText(QString());
        toolButton_23u->setText(QString());
        toolButton_22u->setText(QString());
        toolButton_23d->setText(QString());
        toolButton_21u->setText(QString());
        toolButton_21d->setText(QString());
        label_9->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0));
        label_10->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\214\346\254\241\351\200\211", 0));
        label_7->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0));
        label_8->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0));
        toolButton_32d->setText(QString());
        toolButton_33u->setText(QString());
        toolButton_32u->setText(QString());
        toolButton_33d->setText(QString());
        toolButton_31u->setText(QString());
        toolButton_31d->setText(QString());
        label_13->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0));
        label_14->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\211\346\254\241\351\200\211", 0));
        label_11->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0));
        label_12->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0));
        toolButton_2->setText(QApplication::translate("FormAccuracyAdjust", "\347\241\256\345\256\232", 0));
        toolButton->setText(QApplication::translate("FormAccuracyAdjust", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("FormAccuracyAdjust", "\347\262\276\345\272\246\350\260\203\346\225\264", 0));
    } // retranslateUi

};

namespace Ui {
    class FormAccuracyAdjust: public Ui_FormAccuracyAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACCURACYADJUST_H
