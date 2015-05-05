/********************************************************************************
** Form generated from reading UI file 'formvibrationadjust.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMVIBRATIONADJUST_H
#define UI_FORMVIBRATIONADJUST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormVibrationAdjust
{
public:
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSlider1;
    QToolButton *toolButton_1u;
    QToolButton *toolButton_1d;
    QLCDNumber *lcdNumber1;
    QPushButton *pushButton_v1;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_2d;
    QToolButton *toolButton_2u;
    QSlider *verticalSlider2;
    QLCDNumber *lcdNumber2;
    QPushButton *pushButton_v2;
    QGridLayout *gridLayout_3;
    QToolButton *toolButton_3u;
    QToolButton *toolButton_3d;
    QSlider *verticalSlider3;
    QLCDNumber *lcdNumber3;
    QPushButton *pushButton_v3;
    QGridLayout *gridLayout_4;
    QToolButton *toolButton_4u;
    QToolButton *toolButton_4d;
    QSlider *verticalSlider4;
    QLCDNumber *lcdNumber4;
    QPushButton *pushButton_v4;
    QGridLayout *gridLayout_5;
    QToolButton *toolButton_5u;
    QToolButton *toolButton_5d;
    QSlider *verticalSlider5;
    QLCDNumber *lcdNumber5;
    QPushButton *pushButton_v5;
    QGridLayout *gridLayout_6;
    QToolButton *toolButton_6d;
    QToolButton *toolButton_6u;
    QSlider *verticalSlider6;
    QLCDNumber *lcdNumber6;
    QPushButton *pushButton_v6;
    QGridLayout *gridLayout_7;
    QToolButton *toolButton_7d;
    QToolButton *toolButton_7u;
    QSlider *verticalSlider7;
    QLCDNumber *lcdNumber7;
    QPushButton *pushButton_v7;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QToolButton *toolButtonValve;
    QToolButton *toolButtonVibrator;
    QToolButton *toolButton_Single;
    QToolButton *toolButton_All;
    QLabel *label;

    void setupUi(QWidget *FormVibrationAdjust)
    {
        if (FormVibrationAdjust->objectName().isEmpty())
            FormVibrationAdjust->setObjectName(QStringLiteral("FormVibrationAdjust"));
        FormVibrationAdjust->resize(1043, 520);
        gridLayout_8 = new QGridLayout(FormVibrationAdjust);
        gridLayout_8->setSpacing(20);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(80, 20, 80, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalSlider1 = new QSlider(FormVibrationAdjust);
        verticalSlider1->setObjectName(QStringLiteral("verticalSlider1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider1->sizePolicy().hasHeightForWidth());
        verticalSlider1->setSizePolicy(sizePolicy);
        verticalSlider1->setMinimumSize(QSize(25, 0));
        verticalSlider1->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider1->setMaximum(100);
        verticalSlider1->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider1);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        toolButton_1u = new QToolButton(FormVibrationAdjust);
        toolButton_1u->setObjectName(QStringLiteral("toolButton_1u"));
        toolButton_1u->setMinimumSize(QSize(40, 40));
        toolButton_1u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout->addWidget(toolButton_1u, 0, 0, 1, 1, Qt::AlignHCenter);

        toolButton_1d = new QToolButton(FormVibrationAdjust);
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

        gridLayout->addWidget(toolButton_1d, 2, 0, 1, 1, Qt::AlignHCenter);

        lcdNumber1 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber1->setObjectName(QStringLiteral("lcdNumber1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lcdNumber1->sizePolicy().hasHeightForWidth());
        lcdNumber1->setSizePolicy(sizePolicy1);
        lcdNumber1->setMinimumSize(QSize(0, 30));
        lcdNumber1->setSmallDecimalPoint(true);
        lcdNumber1->setDigitCount(3);
        lcdNumber1->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber1, 1, 1, 1, 1);

        pushButton_v1 = new QPushButton(FormVibrationAdjust);
        pushButton_v1->setObjectName(QStringLiteral("pushButton_v1"));
        sizePolicy1.setHeightForWidth(pushButton_v1->sizePolicy().hasHeightForWidth());
        pushButton_v1->setSizePolicy(sizePolicy1);
        pushButton_v1->setMinimumSize(QSize(0, 40));
        pushButton_v1->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(pushButton_v1, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        toolButton_2d = new QToolButton(FormVibrationAdjust);
        toolButton_2d->setObjectName(QStringLiteral("toolButton_2d"));
        toolButton_2d->setMinimumSize(QSize(40, 40));
        toolButton_2d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_2d, 2, 0, 1, 1, Qt::AlignHCenter);

        toolButton_2u = new QToolButton(FormVibrationAdjust);
        toolButton_2u->setObjectName(QStringLiteral("toolButton_2u"));
        toolButton_2u->setMinimumSize(QSize(40, 40));
        toolButton_2u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_2->addWidget(toolButton_2u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider2 = new QSlider(FormVibrationAdjust);
        verticalSlider2->setObjectName(QStringLiteral("verticalSlider2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(verticalSlider2->sizePolicy().hasHeightForWidth());
        verticalSlider2->setSizePolicy(sizePolicy2);
        verticalSlider2->setMinimumSize(QSize(0, 0));
        verticalSlider2->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider2->setMaximum(100);
        verticalSlider2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider2, 1, 0, 1, 1);

        lcdNumber2 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber2->setObjectName(QStringLiteral("lcdNumber2"));
        sizePolicy1.setHeightForWidth(lcdNumber2->sizePolicy().hasHeightForWidth());
        lcdNumber2->setSizePolicy(sizePolicy1);
        lcdNumber2->setMinimumSize(QSize(0, 30));
        lcdNumber2->setSmallDecimalPoint(true);
        lcdNumber2->setDigitCount(3);

        gridLayout_2->addWidget(lcdNumber2, 1, 1, 1, 1);

        pushButton_v2 = new QPushButton(FormVibrationAdjust);
        pushButton_v2->setObjectName(QStringLiteral("pushButton_v2"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_v2->sizePolicy().hasHeightForWidth());
        pushButton_v2->setSizePolicy(sizePolicy3);
        pushButton_v2->setMinimumSize(QSize(0, 40));
        pushButton_v2->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_2->addWidget(pushButton_v2, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        toolButton_3u = new QToolButton(FormVibrationAdjust);
        toolButton_3u->setObjectName(QStringLiteral("toolButton_3u"));
        toolButton_3u->setMinimumSize(QSize(40, 40));
        toolButton_3u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_3u, 0, 0, 1, 1, Qt::AlignHCenter);

        toolButton_3d = new QToolButton(FormVibrationAdjust);
        toolButton_3d->setObjectName(QStringLiteral("toolButton_3d"));
        toolButton_3d->setMinimumSize(QSize(40, 40));
        toolButton_3d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_3->addWidget(toolButton_3d, 2, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider3 = new QSlider(FormVibrationAdjust);
        verticalSlider3->setObjectName(QStringLiteral("verticalSlider3"));
        sizePolicy2.setHeightForWidth(verticalSlider3->sizePolicy().hasHeightForWidth());
        verticalSlider3->setSizePolicy(sizePolicy2);
        verticalSlider3->setMinimumSize(QSize(0, 0));
        verticalSlider3->setStyleSheet(QLatin1String("QSlider::groove {\n"
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
        verticalSlider3->setMaximum(100);
        verticalSlider3->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider3, 1, 0, 1, 1);

        lcdNumber3 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber3->setObjectName(QStringLiteral("lcdNumber3"));
        sizePolicy1.setHeightForWidth(lcdNumber3->sizePolicy().hasHeightForWidth());
        lcdNumber3->setSizePolicy(sizePolicy1);
        lcdNumber3->setMinimumSize(QSize(0, 30));
        lcdNumber3->setSmallDecimalPoint(true);
        lcdNumber3->setDigitCount(3);

        gridLayout_3->addWidget(lcdNumber3, 1, 1, 1, 1);

        pushButton_v3 = new QPushButton(FormVibrationAdjust);
        pushButton_v3->setObjectName(QStringLiteral("pushButton_v3"));
        sizePolicy3.setHeightForWidth(pushButton_v3->sizePolicy().hasHeightForWidth());
        pushButton_v3->setSizePolicy(sizePolicy3);
        pushButton_v3->setMinimumSize(QSize(0, 40));
        pushButton_v3->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_3->addWidget(pushButton_v3, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_3, 1, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(10);
        toolButton_4u = new QToolButton(FormVibrationAdjust);
        toolButton_4u->setObjectName(QStringLiteral("toolButton_4u"));
        toolButton_4u->setMinimumSize(QSize(40, 40));
        toolButton_4u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_4->addWidget(toolButton_4u, 0, 0, 1, 1, Qt::AlignHCenter);

        toolButton_4d = new QToolButton(FormVibrationAdjust);
        toolButton_4d->setObjectName(QStringLiteral("toolButton_4d"));
        toolButton_4d->setMinimumSize(QSize(40, 40));
        toolButton_4d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_4->addWidget(toolButton_4d, 2, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider4 = new QSlider(FormVibrationAdjust);
        verticalSlider4->setObjectName(QStringLiteral("verticalSlider4"));
        sizePolicy2.setHeightForWidth(verticalSlider4->sizePolicy().hasHeightForWidth());
        verticalSlider4->setSizePolicy(sizePolicy2);
        verticalSlider4->setMinimumSize(QSize(0, 0));
        verticalSlider4->setStyleSheet(QStringLiteral(""));
        verticalSlider4->setMaximum(100);
        verticalSlider4->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(verticalSlider4, 1, 0, 1, 1);

        lcdNumber4 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber4->setObjectName(QStringLiteral("lcdNumber4"));
        sizePolicy1.setHeightForWidth(lcdNumber4->sizePolicy().hasHeightForWidth());
        lcdNumber4->setSizePolicy(sizePolicy1);
        lcdNumber4->setMinimumSize(QSize(0, 30));
        lcdNumber4->setSmallDecimalPoint(true);
        lcdNumber4->setDigitCount(3);

        gridLayout_4->addWidget(lcdNumber4, 1, 1, 1, 1);

        pushButton_v4 = new QPushButton(FormVibrationAdjust);
        pushButton_v4->setObjectName(QStringLiteral("pushButton_v4"));
        sizePolicy3.setHeightForWidth(pushButton_v4->sizePolicy().hasHeightForWidth());
        pushButton_v4->setSizePolicy(sizePolicy3);
        pushButton_v4->setMinimumSize(QSize(0, 40));
        pushButton_v4->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_4->addWidget(pushButton_v4, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_4, 1, 3, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(10);
        toolButton_5u = new QToolButton(FormVibrationAdjust);
        toolButton_5u->setObjectName(QStringLiteral("toolButton_5u"));
        toolButton_5u->setMinimumSize(QSize(40, 40));
        toolButton_5u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_5->addWidget(toolButton_5u, 0, 0, 1, 1, Qt::AlignHCenter);

        toolButton_5d = new QToolButton(FormVibrationAdjust);
        toolButton_5d->setObjectName(QStringLiteral("toolButton_5d"));
        toolButton_5d->setMinimumSize(QSize(40, 40));
        toolButton_5d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_5->addWidget(toolButton_5d, 2, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider5 = new QSlider(FormVibrationAdjust);
        verticalSlider5->setObjectName(QStringLiteral("verticalSlider5"));
        sizePolicy2.setHeightForWidth(verticalSlider5->sizePolicy().hasHeightForWidth());
        verticalSlider5->setSizePolicy(sizePolicy2);
        verticalSlider5->setMinimumSize(QSize(0, 0));
        verticalSlider5->setStyleSheet(QStringLiteral(""));
        verticalSlider5->setMaximum(100);
        verticalSlider5->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(verticalSlider5, 1, 0, 1, 1);

        lcdNumber5 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber5->setObjectName(QStringLiteral("lcdNumber5"));
        sizePolicy1.setHeightForWidth(lcdNumber5->sizePolicy().hasHeightForWidth());
        lcdNumber5->setSizePolicy(sizePolicy1);
        lcdNumber5->setMinimumSize(QSize(0, 30));
        lcdNumber5->setSmallDecimalPoint(true);
        lcdNumber5->setDigitCount(3);

        gridLayout_5->addWidget(lcdNumber5, 1, 1, 1, 1);

        pushButton_v5 = new QPushButton(FormVibrationAdjust);
        pushButton_v5->setObjectName(QStringLiteral("pushButton_v5"));
        sizePolicy3.setHeightForWidth(pushButton_v5->sizePolicy().hasHeightForWidth());
        pushButton_v5->setSizePolicy(sizePolicy3);
        pushButton_v5->setMinimumSize(QSize(0, 40));
        pushButton_v5->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_5->addWidget(pushButton_v5, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_5, 1, 4, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setVerticalSpacing(10);
        toolButton_6d = new QToolButton(FormVibrationAdjust);
        toolButton_6d->setObjectName(QStringLiteral("toolButton_6d"));
        toolButton_6d->setMinimumSize(QSize(40, 40));
        toolButton_6d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_6->addWidget(toolButton_6d, 2, 0, 1, 1, Qt::AlignHCenter);

        toolButton_6u = new QToolButton(FormVibrationAdjust);
        toolButton_6u->setObjectName(QStringLiteral("toolButton_6u"));
        toolButton_6u->setMinimumSize(QSize(40, 40));
        toolButton_6u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_6->addWidget(toolButton_6u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider6 = new QSlider(FormVibrationAdjust);
        verticalSlider6->setObjectName(QStringLiteral("verticalSlider6"));
        sizePolicy2.setHeightForWidth(verticalSlider6->sizePolicy().hasHeightForWidth());
        verticalSlider6->setSizePolicy(sizePolicy2);
        verticalSlider6->setMinimumSize(QSize(0, 0));
        verticalSlider6->setStyleSheet(QStringLiteral(""));
        verticalSlider6->setMaximum(100);
        verticalSlider6->setOrientation(Qt::Vertical);

        gridLayout_6->addWidget(verticalSlider6, 1, 0, 1, 1);

        lcdNumber6 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber6->setObjectName(QStringLiteral("lcdNumber6"));
        sizePolicy1.setHeightForWidth(lcdNumber6->sizePolicy().hasHeightForWidth());
        lcdNumber6->setSizePolicy(sizePolicy1);
        lcdNumber6->setMinimumSize(QSize(0, 30));
        lcdNumber6->setSmallDecimalPoint(true);
        lcdNumber6->setDigitCount(3);

        gridLayout_6->addWidget(lcdNumber6, 1, 1, 1, 1);

        pushButton_v6 = new QPushButton(FormVibrationAdjust);
        pushButton_v6->setObjectName(QStringLiteral("pushButton_v6"));
        sizePolicy3.setHeightForWidth(pushButton_v6->sizePolicy().hasHeightForWidth());
        pushButton_v6->setSizePolicy(sizePolicy3);
        pushButton_v6->setMinimumSize(QSize(0, 40));
        pushButton_v6->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_6->addWidget(pushButton_v6, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_6, 1, 5, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(10);
        toolButton_7d = new QToolButton(FormVibrationAdjust);
        toolButton_7d->setObjectName(QStringLiteral("toolButton_7d"));
        toolButton_7d->setMinimumSize(QSize(40, 40));
        toolButton_7d->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_7->addWidget(toolButton_7d, 2, 0, 1, 1, Qt::AlignHCenter);

        toolButton_7u = new QToolButton(FormVibrationAdjust);
        toolButton_7u->setObjectName(QStringLiteral("toolButton_7u"));
        toolButton_7u->setMinimumSize(QSize(40, 40));
        toolButton_7u->setStyleSheet(QLatin1String("QToolButton\n"
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

        gridLayout_7->addWidget(toolButton_7u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider7 = new QSlider(FormVibrationAdjust);
        verticalSlider7->setObjectName(QStringLiteral("verticalSlider7"));
        sizePolicy2.setHeightForWidth(verticalSlider7->sizePolicy().hasHeightForWidth());
        verticalSlider7->setSizePolicy(sizePolicy2);
        verticalSlider7->setMinimumSize(QSize(0, 0));
        verticalSlider7->setStyleSheet(QStringLiteral(""));
        verticalSlider7->setMaximum(100);
        verticalSlider7->setOrientation(Qt::Vertical);

        gridLayout_7->addWidget(verticalSlider7, 1, 0, 1, 1);

        lcdNumber7 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber7->setObjectName(QStringLiteral("lcdNumber7"));
        sizePolicy1.setHeightForWidth(lcdNumber7->sizePolicy().hasHeightForWidth());
        lcdNumber7->setSizePolicy(sizePolicy1);
        lcdNumber7->setMinimumSize(QSize(0, 30));
        lcdNumber7->setSmallDecimalPoint(true);
        lcdNumber7->setDigitCount(3);

        gridLayout_7->addWidget(lcdNumber7, 1, 1, 1, 1);

        pushButton_v7 = new QPushButton(FormVibrationAdjust);
        pushButton_v7->setObjectName(QStringLiteral("pushButton_v7"));
        sizePolicy3.setHeightForWidth(pushButton_v7->sizePolicy().hasHeightForWidth());
        pushButton_v7->setSizePolicy(sizePolicy3);
        pushButton_v7->setMinimumSize(QSize(0, 40));
        pushButton_v7->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_7->addWidget(pushButton_v7, 3, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_7, 1, 6, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton = new QToolButton(FormVibrationAdjust);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy4);
        toolButton->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButton);

        toolButtonValve = new QToolButton(FormVibrationAdjust);
        toolButtonValve->setObjectName(QStringLiteral("toolButtonValve"));
        sizePolicy4.setHeightForWidth(toolButtonValve->sizePolicy().hasHeightForWidth());
        toolButtonValve->setSizePolicy(sizePolicy4);
        toolButtonValve->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButtonValve);

        toolButtonVibrator = new QToolButton(FormVibrationAdjust);
        toolButtonVibrator->setObjectName(QStringLiteral("toolButtonVibrator"));
        sizePolicy4.setHeightForWidth(toolButtonVibrator->sizePolicy().hasHeightForWidth());
        toolButtonVibrator->setSizePolicy(sizePolicy4);
        toolButtonVibrator->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButtonVibrator);

        toolButton_Single = new QToolButton(FormVibrationAdjust);
        toolButton_Single->setObjectName(QStringLiteral("toolButton_Single"));
        sizePolicy4.setHeightForWidth(toolButton_Single->sizePolicy().hasHeightForWidth());
        toolButton_Single->setSizePolicy(sizePolicy4);
        toolButton_Single->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButton_Single);

        toolButton_All = new QToolButton(FormVibrationAdjust);
        toolButton_All->setObjectName(QStringLiteral("toolButton_All"));
        sizePolicy4.setHeightForWidth(toolButton_All->sizePolicy().hasHeightForWidth());
        toolButton_All->setSizePolicy(sizePolicy4);
        toolButton_All->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButton_All);


        gridLayout_8->addLayout(verticalLayout, 1, 7, 1, 1);

        label = new QLabel(FormVibrationAdjust);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label, 0, 0, 1, 8);


        retranslateUi(FormVibrationAdjust);

        QMetaObject::connectSlotsByName(FormVibrationAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormVibrationAdjust)
    {
        FormVibrationAdjust->setWindowTitle(QApplication::translate("FormVibrationAdjust", "Form", 0));
        toolButton_1u->setText(QString());
        toolButton_1d->setText(QString());
        pushButton_v1->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2501", 0));
        toolButton_2d->setText(QString());
        toolButton_2u->setText(QString());
        pushButton_v2->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2502", 0));
        toolButton_3u->setText(QString());
        toolButton_3d->setText(QString());
        pushButton_v3->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2503", 0));
        toolButton_4u->setText(QString());
        toolButton_4d->setText(QString());
        pushButton_v4->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2504", 0));
        toolButton_5u->setText(QString());
        toolButton_5d->setText(QString());
        pushButton_v5->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2505", 0));
        toolButton_6d->setText(QString());
        toolButton_6u->setText(QString());
        pushButton_v6->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2506", 0));
        toolButton_7d->setText(QString());
        toolButton_7u->setText(QString());
        pushButton_v7->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2507", 0));
        toolButton->setText(QApplication::translate("FormVibrationAdjust", "\350\277\224\345\233\236", 0));
        toolButtonValve->setText(QApplication::translate("FormVibrationAdjust", "\345\226\267\351\230\200 \345\205\263", 0));
        toolButtonVibrator->setText(QApplication::translate("FormVibrationAdjust", "\344\276\233\346\226\231 \345\205\263", 0));
        toolButton_Single->setText(QApplication::translate("FormVibrationAdjust", "\345\215\225\344\270\252\350\260\203\346\225\264", 0));
        toolButton_All->setText(QApplication::translate("FormVibrationAdjust", "\346\225\264\344\275\223\350\260\203\346\225\264", 0));
        label->setText(QApplication::translate("FormVibrationAdjust", "\346\265\201\351\207\217\346\216\247\345\210\266", 0));
    } // retranslateUi

};

namespace Ui {
    class FormVibrationAdjust: public Ui_FormVibrationAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMVIBRATIONADJUST_H
