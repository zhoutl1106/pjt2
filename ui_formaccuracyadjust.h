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
    QToolButton *toolButton_1d_2;
    QToolButton *toolButton_13u;
    QLCDNumber *lcdNumber1_3;
    QToolButton *toolButton_12u;
    QToolButton *toolButton_1d_3;
    QSlider *verticalSlider13;
    QLabel *label_3;
    QToolButton *toolButton_11u;
    QToolButton *toolButton_1d;
    QLCDNumber *lcdNumber1;
    QLCDNumber *lcdNumber1_2;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *verticalSlider11;
    QGridLayout *gridLayout_2;
    QSlider *verticalSlider12_2;
    QToolButton *toolButton_1d_4;
    QToolButton *toolButton_13u_2;
    QLCDNumber *lcdNumber1_4;
    QToolButton *toolButton_12u_2;
    QToolButton *toolButton_1d_5;
    QSlider *verticalSlider13_2;
    QToolButton *toolButton_11u_2;
    QToolButton *toolButton_1d_6;
    QLCDNumber *lcdNumber1_5;
    QLCDNumber *lcdNumber1_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *verticalSlider11_2;
    QGridLayout *gridLayout_3;
    QSlider *verticalSlider12_3;
    QToolButton *toolButton_1d_7;
    QToolButton *toolButton_13u_3;
    QLCDNumber *lcdNumber1_7;
    QToolButton *toolButton_12u_3;
    QToolButton *toolButton_1d_8;
    QSlider *verticalSlider13_3;
    QToolButton *toolButton_11u_3;
    QToolButton *toolButton_1d_9;
    QLCDNumber *lcdNumber1_8;
    QLCDNumber *lcdNumber1_9;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *verticalSlider11_3;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_Camera;
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
        verticalSlider12->setMaximum(100);
        verticalSlider12->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider12, 2, 3, 1, 1, Qt::AlignHCenter);

        toolButton_1d_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_2->setObjectName(QStringLiteral("toolButton_1d_2"));
        toolButton_1d_2->setMinimumSize(QSize(40, 40));
        toolButton_1d_2->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout->addWidget(toolButton_1d_2, 3, 3, 1, 1);

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

        lcdNumber1_3 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_3->setObjectName(QStringLiteral("lcdNumber1_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber1_3->sizePolicy().hasHeightForWidth());
        lcdNumber1_3->setSizePolicy(sizePolicy2);
        lcdNumber1_3->setMinimumSize(QSize(0, 30));
        lcdNumber1_3->setSmallDecimalPoint(true);
        lcdNumber1_3->setDigitCount(3);
        lcdNumber1_3->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber1_3, 2, 6, 1, 1);

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

        toolButton_1d_3 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_3->setObjectName(QStringLiteral("toolButton_1d_3"));
        toolButton_1d_3->setMinimumSize(QSize(40, 40));
        toolButton_1d_3->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout->addWidget(toolButton_1d_3, 3, 5, 1, 1);

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
        verticalSlider13->setMaximum(100);
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

        toolButton_1d = new QToolButton(FormAccuracyAdjust);
        toolButton_1d->setObjectName(QStringLiteral("toolButton_1d"));
        toolButton_1d->setMinimumSize(QSize(40, 40));
        toolButton_1d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout->addWidget(toolButton_1d, 3, 1, 1, 1, Qt::AlignHCenter);

        lcdNumber1 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1->setObjectName(QStringLiteral("lcdNumber1"));
        sizePolicy2.setHeightForWidth(lcdNumber1->sizePolicy().hasHeightForWidth());
        lcdNumber1->setSizePolicy(sizePolicy2);
        lcdNumber1->setMinimumSize(QSize(0, 30));
        lcdNumber1->setSmallDecimalPoint(true);
        lcdNumber1->setDigitCount(3);
        lcdNumber1->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber1, 2, 2, 1, 1);

        lcdNumber1_2 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_2->setObjectName(QStringLiteral("lcdNumber1_2"));
        sizePolicy2.setHeightForWidth(lcdNumber1_2->sizePolicy().hasHeightForWidth());
        lcdNumber1_2->setSizePolicy(sizePolicy2);
        lcdNumber1_2->setMinimumSize(QSize(0, 30));
        lcdNumber1_2->setSmallDecimalPoint(true);
        lcdNumber1_2->setDigitCount(3);
        lcdNumber1_2->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber1_2, 2, 4, 1, 1);

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
        verticalSlider11->setMaximum(100);
        verticalSlider11->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider11, 2, 1, 1, 1, Qt::AlignHCenter);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        verticalSlider12_2 = new QSlider(FormAccuracyAdjust);
        verticalSlider12_2->setObjectName(QStringLiteral("verticalSlider12_2"));
        sizePolicy1.setHeightForWidth(verticalSlider12_2->sizePolicy().hasHeightForWidth());
        verticalSlider12_2->setSizePolicy(sizePolicy1);
        verticalSlider12_2->setMinimumSize(QSize(25, 0));
        verticalSlider12_2->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider12_2->setMaximum(100);
        verticalSlider12_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider12_2, 2, 2, 1, 1, Qt::AlignHCenter);

        toolButton_1d_4 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_4->setObjectName(QStringLiteral("toolButton_1d_4"));
        toolButton_1d_4->setMinimumSize(QSize(40, 40));
        toolButton_1d_4->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_1d_4, 3, 2, 1, 1);

        toolButton_13u_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_13u_2->setObjectName(QStringLiteral("toolButton_13u_2"));
        toolButton_13u_2->setMinimumSize(QSize(40, 40));
        toolButton_13u_2->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_13u_2, 1, 4, 1, 1);

        lcdNumber1_4 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_4->setObjectName(QStringLiteral("lcdNumber1_4"));
        sizePolicy2.setHeightForWidth(lcdNumber1_4->sizePolicy().hasHeightForWidth());
        lcdNumber1_4->setSizePolicy(sizePolicy2);
        lcdNumber1_4->setMinimumSize(QSize(0, 30));
        lcdNumber1_4->setSmallDecimalPoint(true);
        lcdNumber1_4->setDigitCount(3);
        lcdNumber1_4->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber1_4, 2, 5, 1, 1);

        toolButton_12u_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_12u_2->setObjectName(QStringLiteral("toolButton_12u_2"));
        toolButton_12u_2->setMinimumSize(QSize(40, 40));
        toolButton_12u_2->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_12u_2, 1, 2, 1, 1);

        toolButton_1d_5 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_5->setObjectName(QStringLiteral("toolButton_1d_5"));
        toolButton_1d_5->setMinimumSize(QSize(40, 40));
        toolButton_1d_5->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_1d_5, 3, 4, 1, 1);

        verticalSlider13_2 = new QSlider(FormAccuracyAdjust);
        verticalSlider13_2->setObjectName(QStringLiteral("verticalSlider13_2"));
        sizePolicy1.setHeightForWidth(verticalSlider13_2->sizePolicy().hasHeightForWidth());
        verticalSlider13_2->setSizePolicy(sizePolicy1);
        verticalSlider13_2->setMinimumSize(QSize(25, 0));
        verticalSlider13_2->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider13_2->setMaximum(100);
        verticalSlider13_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider13_2, 2, 4, 1, 1, Qt::AlignHCenter);

        toolButton_11u_2 = new QToolButton(FormAccuracyAdjust);
        toolButton_11u_2->setObjectName(QStringLiteral("toolButton_11u_2"));
        toolButton_11u_2->setMinimumSize(QSize(40, 40));
        toolButton_11u_2->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_11u_2, 1, 0, 1, 1, Qt::AlignHCenter);

        toolButton_1d_6 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_6->setObjectName(QStringLiteral("toolButton_1d_6"));
        toolButton_1d_6->setMinimumSize(QSize(40, 40));
        toolButton_1d_6->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_1d_6, 3, 0, 1, 1, Qt::AlignHCenter);

        lcdNumber1_5 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_5->setObjectName(QStringLiteral("lcdNumber1_5"));
        sizePolicy2.setHeightForWidth(lcdNumber1_5->sizePolicy().hasHeightForWidth());
        lcdNumber1_5->setSizePolicy(sizePolicy2);
        lcdNumber1_5->setMinimumSize(QSize(0, 30));
        lcdNumber1_5->setSmallDecimalPoint(true);
        lcdNumber1_5->setDigitCount(3);
        lcdNumber1_5->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber1_5, 2, 1, 1, 1);

        lcdNumber1_6 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_6->setObjectName(QStringLiteral("lcdNumber1_6"));
        sizePolicy2.setHeightForWidth(lcdNumber1_6->sizePolicy().hasHeightForWidth());
        lcdNumber1_6->setSizePolicy(sizePolicy2);
        lcdNumber1_6->setMinimumSize(QSize(0, 30));
        lcdNumber1_6->setSmallDecimalPoint(true);
        lcdNumber1_6->setDigitCount(3);
        lcdNumber1_6->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber1_6, 2, 3, 1, 1);

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

        verticalSlider11_2 = new QSlider(FormAccuracyAdjust);
        verticalSlider11_2->setObjectName(QStringLiteral("verticalSlider11_2"));
        sizePolicy1.setHeightForWidth(verticalSlider11_2->sizePolicy().hasHeightForWidth());
        verticalSlider11_2->setSizePolicy(sizePolicy1);
        verticalSlider11_2->setMinimumSize(QSize(25, 0));
        verticalSlider11_2->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider11_2->setMaximum(100);
        verticalSlider11_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider11_2, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_4->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        verticalSlider12_3 = new QSlider(FormAccuracyAdjust);
        verticalSlider12_3->setObjectName(QStringLiteral("verticalSlider12_3"));
        sizePolicy1.setHeightForWidth(verticalSlider12_3->sizePolicy().hasHeightForWidth());
        verticalSlider12_3->setSizePolicy(sizePolicy1);
        verticalSlider12_3->setMinimumSize(QSize(25, 0));
        verticalSlider12_3->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider12_3->setMaximum(100);
        verticalSlider12_3->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider12_3, 2, 2, 1, 1, Qt::AlignHCenter);

        toolButton_1d_7 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_7->setObjectName(QStringLiteral("toolButton_1d_7"));
        toolButton_1d_7->setMinimumSize(QSize(40, 40));
        toolButton_1d_7->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_1d_7, 3, 2, 1, 1);

        toolButton_13u_3 = new QToolButton(FormAccuracyAdjust);
        toolButton_13u_3->setObjectName(QStringLiteral("toolButton_13u_3"));
        toolButton_13u_3->setMinimumSize(QSize(40, 40));
        toolButton_13u_3->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_13u_3, 1, 4, 1, 1);

        lcdNumber1_7 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_7->setObjectName(QStringLiteral("lcdNumber1_7"));
        sizePolicy2.setHeightForWidth(lcdNumber1_7->sizePolicy().hasHeightForWidth());
        lcdNumber1_7->setSizePolicy(sizePolicy2);
        lcdNumber1_7->setMinimumSize(QSize(0, 30));
        lcdNumber1_7->setSmallDecimalPoint(true);
        lcdNumber1_7->setDigitCount(3);
        lcdNumber1_7->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber1_7, 2, 5, 1, 1);

        toolButton_12u_3 = new QToolButton(FormAccuracyAdjust);
        toolButton_12u_3->setObjectName(QStringLiteral("toolButton_12u_3"));
        toolButton_12u_3->setMinimumSize(QSize(40, 40));
        toolButton_12u_3->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_12u_3, 1, 2, 1, 1);

        toolButton_1d_8 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_8->setObjectName(QStringLiteral("toolButton_1d_8"));
        toolButton_1d_8->setMinimumSize(QSize(40, 40));
        toolButton_1d_8->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_1d_8, 3, 4, 1, 1);

        verticalSlider13_3 = new QSlider(FormAccuracyAdjust);
        verticalSlider13_3->setObjectName(QStringLiteral("verticalSlider13_3"));
        sizePolicy1.setHeightForWidth(verticalSlider13_3->sizePolicy().hasHeightForWidth());
        verticalSlider13_3->setSizePolicy(sizePolicy1);
        verticalSlider13_3->setMinimumSize(QSize(25, 0));
        verticalSlider13_3->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider13_3->setMaximum(100);
        verticalSlider13_3->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider13_3, 2, 4, 1, 1, Qt::AlignHCenter);

        toolButton_11u_3 = new QToolButton(FormAccuracyAdjust);
        toolButton_11u_3->setObjectName(QStringLiteral("toolButton_11u_3"));
        toolButton_11u_3->setMinimumSize(QSize(40, 40));
        toolButton_11u_3->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_11u_3, 1, 0, 1, 1, Qt::AlignHCenter);

        toolButton_1d_9 = new QToolButton(FormAccuracyAdjust);
        toolButton_1d_9->setObjectName(QStringLiteral("toolButton_1d_9"));
        toolButton_1d_9->setMinimumSize(QSize(40, 40));
        toolButton_1d_9->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_1d_9, 3, 0, 1, 1, Qt::AlignHCenter);

        lcdNumber1_8 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_8->setObjectName(QStringLiteral("lcdNumber1_8"));
        sizePolicy2.setHeightForWidth(lcdNumber1_8->sizePolicy().hasHeightForWidth());
        lcdNumber1_8->setSizePolicy(sizePolicy2);
        lcdNumber1_8->setMinimumSize(QSize(0, 30));
        lcdNumber1_8->setSmallDecimalPoint(true);
        lcdNumber1_8->setDigitCount(3);
        lcdNumber1_8->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber1_8, 2, 1, 1, 1);

        lcdNumber1_9 = new QLCDNumber(FormAccuracyAdjust);
        lcdNumber1_9->setObjectName(QStringLiteral("lcdNumber1_9"));
        sizePolicy2.setHeightForWidth(lcdNumber1_9->sizePolicy().hasHeightForWidth());
        lcdNumber1_9->setSizePolicy(sizePolicy2);
        lcdNumber1_9->setMinimumSize(QSize(0, 30));
        lcdNumber1_9->setSmallDecimalPoint(true);
        lcdNumber1_9->setDigitCount(3);
        lcdNumber1_9->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_3->addWidget(lcdNumber1_9, 2, 3, 1, 1);

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

        verticalSlider11_3 = new QSlider(FormAccuracyAdjust);
        verticalSlider11_3->setObjectName(QStringLiteral("verticalSlider11_3"));
        sizePolicy1.setHeightForWidth(verticalSlider11_3->sizePolicy().hasHeightForWidth());
        verticalSlider11_3->setSizePolicy(sizePolicy1);
        verticalSlider11_3->setMinimumSize(QSize(25, 0));
        verticalSlider11_3->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider11_3->setMaximum(100);
        verticalSlider11_3->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider11_3, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_4->addLayout(gridLayout_3, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(100);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton_Camera = new QToolButton(FormAccuracyAdjust);
        toolButton_Camera->setObjectName(QStringLiteral("toolButton_Camera"));
        sizePolicy.setHeightForWidth(toolButton_Camera->sizePolicy().hasHeightForWidth());
        toolButton_Camera->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton_Camera);

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
        toolButton_1d_2->setText(QString());
        toolButton_13u->setText(QString());
        toolButton_12u->setText(QString());
        toolButton_1d_3->setText(QString());
        label_3->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\200\346\254\241\351\200\211", 0));
        toolButton_11u->setText(QString());
        toolButton_1d->setText(QString());
        label_4->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0));
        label_5->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0));
        toolButton_1d_4->setText(QString());
        toolButton_13u_2->setText(QString());
        toolButton_12u_2->setText(QString());
        toolButton_1d_5->setText(QString());
        toolButton_11u_2->setText(QString());
        toolButton_1d_6->setText(QString());
        label_9->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0));
        label_10->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\200\346\254\241\351\200\211", 0));
        label_7->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0));
        label_8->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0));
        toolButton_1d_7->setText(QString());
        toolButton_13u_3->setText(QString());
        toolButton_12u_3->setText(QString());
        toolButton_1d_8->setText(QString());
        toolButton_11u_3->setText(QString());
        toolButton_1d_9->setText(QString());
        label_13->setText(QApplication::translate("FormAccuracyAdjust", "\344\272\256", 0));
        label_14->setText(QApplication::translate("FormAccuracyAdjust", "\344\270\200\346\254\241\351\200\211", 0));
        label_11->setText(QApplication::translate("FormAccuracyAdjust", "\346\232\227", 0));
        label_12->setText(QApplication::translate("FormAccuracyAdjust", "\346\226\221\347\202\271", 0));
        toolButton_Camera->setText(QApplication::translate("FormAccuracyAdjust", "\345\211\215\347\233\270\346\234\272", 0));
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
