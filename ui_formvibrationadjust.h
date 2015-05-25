/********************************************************************************
** Form generated from reading UI file 'formvibrationadjust.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMVIBRATIONADJUST_H
#define UI_FORMVIBRATIONADJUST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormVibrationAdjust
{
public:
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSlider1;
    QLCDNumber *lcdNumber1;
    QPushButton *pushButton_v1;
    QWidget *widget_1u;
    QWidget *widget_1d;
    QGridLayout *gridLayout_2;
    QWidget *widget_2u;
    QSlider *verticalSlider2;
    QLCDNumber *lcdNumber2;
    QPushButton *pushButton_v2;
    QWidget *widget_2d;
    QGridLayout *gridLayout_3;
    QWidget *widget_3u;
    QSlider *verticalSlider3;
    QLCDNumber *lcdNumber3;
    QPushButton *pushButton_v3;
    QWidget *widget_3d;
    QGridLayout *gridLayout_4;
    QWidget *widget_4u;
    QLCDNumber *lcdNumber4;
    QSlider *verticalSlider4;
    QPushButton *pushButton_v4;
    QWidget *widget_4d;
    QGridLayout *gridLayout_5;
    QWidget *widget_5u;
    QSlider *verticalSlider5;
    QLCDNumber *lcdNumber5;
    QPushButton *pushButton_v5;
    QWidget *widget_5d;
    QGridLayout *gridLayout_6;
    QWidget *widget_6u;
    QSlider *verticalSlider6;
    QLCDNumber *lcdNumber6;
    QPushButton *pushButton_v6;
    QWidget *widget_6d;
    QGridLayout *gridLayout_7;
    QWidget *widget_7u;
    QSlider *verticalSlider7;
    QLCDNumber *lcdNumber7;
    QPushButton *pushButton_v7;
    QWidget *widget_7d;
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
            FormVibrationAdjust->setObjectName(QString::fromUtf8("FormVibrationAdjust"));
        FormVibrationAdjust->resize(1043, 520);
        gridLayout_8 = new QGridLayout(FormVibrationAdjust);
        gridLayout_8->setSpacing(20);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(80, 20, 80, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSlider1 = new QSlider(FormVibrationAdjust);
        verticalSlider1->setObjectName(QString::fromUtf8("verticalSlider1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider1->sizePolicy().hasHeightForWidth());
        verticalSlider1->setSizePolicy(sizePolicy);
        verticalSlider1->setMinimumSize(QSize(25, 0));
        verticalSlider1->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider1->setTickPosition(QSlider::TicksBelow);
        verticalSlider1->setTickInterval(10);

        horizontalLayout->addWidget(verticalSlider1);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        lcdNumber1 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber1->setObjectName(QString::fromUtf8("lcdNumber1"));
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
        pushButton_v1->setObjectName(QString::fromUtf8("pushButton_v1"));
        sizePolicy1.setHeightForWidth(pushButton_v1->sizePolicy().hasHeightForWidth());
        pushButton_v1->setSizePolicy(sizePolicy1);
        pushButton_v1->setMinimumSize(QSize(0, 40));
        pushButton_v1->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(pushButton_v1, 3, 0, 1, 2);

        widget_1u = new QWidget(FormVibrationAdjust);
        widget_1u->setObjectName(QString::fromUtf8("widget_1u"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_1u->sizePolicy().hasHeightForWidth());
        widget_1u->setSizePolicy(sizePolicy2);
        widget_1u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_1u, 0, 0, 1, 1, Qt::AlignHCenter);

        widget_1d = new QWidget(FormVibrationAdjust);
        widget_1d->setObjectName(QString::fromUtf8("widget_1d"));
        sizePolicy2.setHeightForWidth(widget_1d->sizePolicy().hasHeightForWidth());
        widget_1d->setSizePolicy(sizePolicy2);
        widget_1d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_1d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        widget_2u = new QWidget(FormVibrationAdjust);
        widget_2u->setObjectName(QString::fromUtf8("widget_2u"));
        sizePolicy2.setHeightForWidth(widget_2u->sizePolicy().hasHeightForWidth());
        widget_2u->setSizePolicy(sizePolicy2);
        widget_2u->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_2u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider2 = new QSlider(FormVibrationAdjust);
        verticalSlider2->setObjectName(QString::fromUtf8("verticalSlider2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(verticalSlider2->sizePolicy().hasHeightForWidth());
        verticalSlider2->setSizePolicy(sizePolicy3);
        verticalSlider2->setMinimumSize(QSize(0, 0));
        verticalSlider2->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider2->setTickPosition(QSlider::TicksBelow);
        verticalSlider2->setTickInterval(10);

        gridLayout_2->addWidget(verticalSlider2, 1, 0, 1, 1);

        lcdNumber2 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber2->setObjectName(QString::fromUtf8("lcdNumber2"));
        sizePolicy1.setHeightForWidth(lcdNumber2->sizePolicy().hasHeightForWidth());
        lcdNumber2->setSizePolicy(sizePolicy1);
        lcdNumber2->setMinimumSize(QSize(0, 30));
        lcdNumber2->setSmallDecimalPoint(true);
        lcdNumber2->setDigitCount(3);

        gridLayout_2->addWidget(lcdNumber2, 1, 1, 1, 1);

        pushButton_v2 = new QPushButton(FormVibrationAdjust);
        pushButton_v2->setObjectName(QString::fromUtf8("pushButton_v2"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_v2->sizePolicy().hasHeightForWidth());
        pushButton_v2->setSizePolicy(sizePolicy4);
        pushButton_v2->setMinimumSize(QSize(0, 40));
        pushButton_v2->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_2->addWidget(pushButton_v2, 3, 0, 1, 2);

        widget_2d = new QWidget(FormVibrationAdjust);
        widget_2d->setObjectName(QString::fromUtf8("widget_2d"));
        sizePolicy2.setHeightForWidth(widget_2d->sizePolicy().hasHeightForWidth());
        widget_2d->setSizePolicy(sizePolicy2);
        widget_2d->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_2d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        widget_3u = new QWidget(FormVibrationAdjust);
        widget_3u->setObjectName(QString::fromUtf8("widget_3u"));
        sizePolicy2.setHeightForWidth(widget_3u->sizePolicy().hasHeightForWidth());
        widget_3u->setSizePolicy(sizePolicy2);
        widget_3u->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_3u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider3 = new QSlider(FormVibrationAdjust);
        verticalSlider3->setObjectName(QString::fromUtf8("verticalSlider3"));
        sizePolicy3.setHeightForWidth(verticalSlider3->sizePolicy().hasHeightForWidth());
        verticalSlider3->setSizePolicy(sizePolicy3);
        verticalSlider3->setMinimumSize(QSize(0, 0));
        verticalSlider3->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider3->setTickPosition(QSlider::TicksBelow);
        verticalSlider3->setTickInterval(10);

        gridLayout_3->addWidget(verticalSlider3, 1, 0, 1, 1);

        lcdNumber3 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber3->setObjectName(QString::fromUtf8("lcdNumber3"));
        sizePolicy1.setHeightForWidth(lcdNumber3->sizePolicy().hasHeightForWidth());
        lcdNumber3->setSizePolicy(sizePolicy1);
        lcdNumber3->setMinimumSize(QSize(0, 30));
        lcdNumber3->setSmallDecimalPoint(true);
        lcdNumber3->setDigitCount(3);

        gridLayout_3->addWidget(lcdNumber3, 1, 1, 1, 1);

        pushButton_v3 = new QPushButton(FormVibrationAdjust);
        pushButton_v3->setObjectName(QString::fromUtf8("pushButton_v3"));
        sizePolicy4.setHeightForWidth(pushButton_v3->sizePolicy().hasHeightForWidth());
        pushButton_v3->setSizePolicy(sizePolicy4);
        pushButton_v3->setMinimumSize(QSize(0, 40));
        pushButton_v3->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_3->addWidget(pushButton_v3, 3, 0, 1, 2);

        widget_3d = new QWidget(FormVibrationAdjust);
        widget_3d->setObjectName(QString::fromUtf8("widget_3d"));
        sizePolicy2.setHeightForWidth(widget_3d->sizePolicy().hasHeightForWidth());
        widget_3d->setSizePolicy(sizePolicy2);
        widget_3d->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(widget_3d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_3, 1, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(10);
        widget_4u = new QWidget(FormVibrationAdjust);
        widget_4u->setObjectName(QString::fromUtf8("widget_4u"));
        sizePolicy2.setHeightForWidth(widget_4u->sizePolicy().hasHeightForWidth());
        widget_4u->setSizePolicy(sizePolicy2);
        widget_4u->setMinimumSize(QSize(40, 40));

        gridLayout_4->addWidget(widget_4u, 0, 0, 1, 1, Qt::AlignHCenter);

        lcdNumber4 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber4->setObjectName(QString::fromUtf8("lcdNumber4"));
        sizePolicy1.setHeightForWidth(lcdNumber4->sizePolicy().hasHeightForWidth());
        lcdNumber4->setSizePolicy(sizePolicy1);
        lcdNumber4->setMinimumSize(QSize(0, 30));
        lcdNumber4->setSmallDecimalPoint(true);
        lcdNumber4->setDigitCount(3);

        gridLayout_4->addWidget(lcdNumber4, 1, 1, 1, 1);

        verticalSlider4 = new QSlider(FormVibrationAdjust);
        verticalSlider4->setObjectName(QString::fromUtf8("verticalSlider4"));
        sizePolicy3.setHeightForWidth(verticalSlider4->sizePolicy().hasHeightForWidth());
        verticalSlider4->setSizePolicy(sizePolicy3);
        verticalSlider4->setMinimumSize(QSize(0, 0));
        verticalSlider4->setStyleSheet(QString::fromUtf8(""));
        verticalSlider4->setMaximum(100);
        verticalSlider4->setOrientation(Qt::Vertical);
        verticalSlider4->setTickPosition(QSlider::TicksBelow);
        verticalSlider4->setTickInterval(10);

        gridLayout_4->addWidget(verticalSlider4, 1, 0, 1, 1);

        pushButton_v4 = new QPushButton(FormVibrationAdjust);
        pushButton_v4->setObjectName(QString::fromUtf8("pushButton_v4"));
        sizePolicy4.setHeightForWidth(pushButton_v4->sizePolicy().hasHeightForWidth());
        pushButton_v4->setSizePolicy(sizePolicy4);
        pushButton_v4->setMinimumSize(QSize(0, 40));
        pushButton_v4->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_4->addWidget(pushButton_v4, 3, 0, 1, 2);

        widget_4d = new QWidget(FormVibrationAdjust);
        widget_4d->setObjectName(QString::fromUtf8("widget_4d"));
        sizePolicy2.setHeightForWidth(widget_4d->sizePolicy().hasHeightForWidth());
        widget_4d->setSizePolicy(sizePolicy2);
        widget_4d->setMinimumSize(QSize(40, 40));

        gridLayout_4->addWidget(widget_4d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_4, 1, 3, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(10);
        widget_5u = new QWidget(FormVibrationAdjust);
        widget_5u->setObjectName(QString::fromUtf8("widget_5u"));
        sizePolicy2.setHeightForWidth(widget_5u->sizePolicy().hasHeightForWidth());
        widget_5u->setSizePolicy(sizePolicy2);
        widget_5u->setMinimumSize(QSize(40, 40));

        gridLayout_5->addWidget(widget_5u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider5 = new QSlider(FormVibrationAdjust);
        verticalSlider5->setObjectName(QString::fromUtf8("verticalSlider5"));
        sizePolicy3.setHeightForWidth(verticalSlider5->sizePolicy().hasHeightForWidth());
        verticalSlider5->setSizePolicy(sizePolicy3);
        verticalSlider5->setMinimumSize(QSize(0, 0));
        verticalSlider5->setStyleSheet(QString::fromUtf8(""));
        verticalSlider5->setMaximum(100);
        verticalSlider5->setOrientation(Qt::Vertical);
        verticalSlider5->setTickPosition(QSlider::TicksBelow);
        verticalSlider5->setTickInterval(10);

        gridLayout_5->addWidget(verticalSlider5, 1, 0, 1, 1);

        lcdNumber5 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber5->setObjectName(QString::fromUtf8("lcdNumber5"));
        sizePolicy1.setHeightForWidth(lcdNumber5->sizePolicy().hasHeightForWidth());
        lcdNumber5->setSizePolicy(sizePolicy1);
        lcdNumber5->setMinimumSize(QSize(0, 30));
        lcdNumber5->setSmallDecimalPoint(true);
        lcdNumber5->setDigitCount(3);

        gridLayout_5->addWidget(lcdNumber5, 1, 1, 1, 1);

        pushButton_v5 = new QPushButton(FormVibrationAdjust);
        pushButton_v5->setObjectName(QString::fromUtf8("pushButton_v5"));
        sizePolicy4.setHeightForWidth(pushButton_v5->sizePolicy().hasHeightForWidth());
        pushButton_v5->setSizePolicy(sizePolicy4);
        pushButton_v5->setMinimumSize(QSize(0, 40));
        pushButton_v5->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_5->addWidget(pushButton_v5, 3, 0, 1, 2);

        widget_5d = new QWidget(FormVibrationAdjust);
        widget_5d->setObjectName(QString::fromUtf8("widget_5d"));
        sizePolicy2.setHeightForWidth(widget_5d->sizePolicy().hasHeightForWidth());
        widget_5d->setSizePolicy(sizePolicy2);
        widget_5d->setMinimumSize(QSize(40, 40));

        gridLayout_5->addWidget(widget_5d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_5, 1, 4, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setVerticalSpacing(10);
        widget_6u = new QWidget(FormVibrationAdjust);
        widget_6u->setObjectName(QString::fromUtf8("widget_6u"));
        sizePolicy2.setHeightForWidth(widget_6u->sizePolicy().hasHeightForWidth());
        widget_6u->setSizePolicy(sizePolicy2);
        widget_6u->setMinimumSize(QSize(40, 40));

        gridLayout_6->addWidget(widget_6u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider6 = new QSlider(FormVibrationAdjust);
        verticalSlider6->setObjectName(QString::fromUtf8("verticalSlider6"));
        sizePolicy3.setHeightForWidth(verticalSlider6->sizePolicy().hasHeightForWidth());
        verticalSlider6->setSizePolicy(sizePolicy3);
        verticalSlider6->setMinimumSize(QSize(0, 0));
        verticalSlider6->setStyleSheet(QString::fromUtf8(""));
        verticalSlider6->setMaximum(100);
        verticalSlider6->setOrientation(Qt::Vertical);
        verticalSlider6->setTickPosition(QSlider::TicksBelow);
        verticalSlider6->setTickInterval(10);

        gridLayout_6->addWidget(verticalSlider6, 1, 0, 1, 1);

        lcdNumber6 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber6->setObjectName(QString::fromUtf8("lcdNumber6"));
        sizePolicy1.setHeightForWidth(lcdNumber6->sizePolicy().hasHeightForWidth());
        lcdNumber6->setSizePolicy(sizePolicy1);
        lcdNumber6->setMinimumSize(QSize(0, 30));
        lcdNumber6->setSmallDecimalPoint(true);
        lcdNumber6->setDigitCount(3);

        gridLayout_6->addWidget(lcdNumber6, 1, 1, 1, 1);

        pushButton_v6 = new QPushButton(FormVibrationAdjust);
        pushButton_v6->setObjectName(QString::fromUtf8("pushButton_v6"));
        sizePolicy4.setHeightForWidth(pushButton_v6->sizePolicy().hasHeightForWidth());
        pushButton_v6->setSizePolicy(sizePolicy4);
        pushButton_v6->setMinimumSize(QSize(0, 40));
        pushButton_v6->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_6->addWidget(pushButton_v6, 3, 0, 1, 2);

        widget_6d = new QWidget(FormVibrationAdjust);
        widget_6d->setObjectName(QString::fromUtf8("widget_6d"));
        sizePolicy2.setHeightForWidth(widget_6d->sizePolicy().hasHeightForWidth());
        widget_6d->setSizePolicy(sizePolicy2);
        widget_6d->setMinimumSize(QSize(40, 40));

        gridLayout_6->addWidget(widget_6d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_6, 1, 5, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(10);
        widget_7u = new QWidget(FormVibrationAdjust);
        widget_7u->setObjectName(QString::fromUtf8("widget_7u"));
        sizePolicy2.setHeightForWidth(widget_7u->sizePolicy().hasHeightForWidth());
        widget_7u->setSizePolicy(sizePolicy2);
        widget_7u->setMinimumSize(QSize(40, 40));

        gridLayout_7->addWidget(widget_7u, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider7 = new QSlider(FormVibrationAdjust);
        verticalSlider7->setObjectName(QString::fromUtf8("verticalSlider7"));
        sizePolicy3.setHeightForWidth(verticalSlider7->sizePolicy().hasHeightForWidth());
        verticalSlider7->setSizePolicy(sizePolicy3);
        verticalSlider7->setMinimumSize(QSize(0, 0));
        verticalSlider7->setStyleSheet(QString::fromUtf8(""));
        verticalSlider7->setMaximum(100);
        verticalSlider7->setOrientation(Qt::Vertical);
        verticalSlider7->setTickPosition(QSlider::TicksBelow);
        verticalSlider7->setTickInterval(10);

        gridLayout_7->addWidget(verticalSlider7, 1, 0, 1, 1);

        lcdNumber7 = new QLCDNumber(FormVibrationAdjust);
        lcdNumber7->setObjectName(QString::fromUtf8("lcdNumber7"));
        sizePolicy1.setHeightForWidth(lcdNumber7->sizePolicy().hasHeightForWidth());
        lcdNumber7->setSizePolicy(sizePolicy1);
        lcdNumber7->setMinimumSize(QSize(0, 30));
        lcdNumber7->setSmallDecimalPoint(true);
        lcdNumber7->setDigitCount(3);

        gridLayout_7->addWidget(lcdNumber7, 1, 1, 1, 1);

        pushButton_v7 = new QPushButton(FormVibrationAdjust);
        pushButton_v7->setObjectName(QString::fromUtf8("pushButton_v7"));
        sizePolicy4.setHeightForWidth(pushButton_v7->sizePolicy().hasHeightForWidth());
        pushButton_v7->setSizePolicy(sizePolicy4);
        pushButton_v7->setMinimumSize(QSize(0, 40));
        pushButton_v7->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout_7->addWidget(pushButton_v7, 3, 0, 1, 2);

        widget_7d = new QWidget(FormVibrationAdjust);
        widget_7d->setObjectName(QString::fromUtf8("widget_7d"));
        sizePolicy2.setHeightForWidth(widget_7d->sizePolicy().hasHeightForWidth());
        widget_7d->setSizePolicy(sizePolicy2);
        widget_7d->setMinimumSize(QSize(40, 40));

        gridLayout_7->addWidget(widget_7d, 2, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_8->addLayout(gridLayout_7, 1, 6, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButton = new QToolButton(FormVibrationAdjust);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy5);
        toolButton->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButton);

        toolButtonValve = new QToolButton(FormVibrationAdjust);
        toolButtonValve->setObjectName(QString::fromUtf8("toolButtonValve"));
        sizePolicy5.setHeightForWidth(toolButtonValve->sizePolicy().hasHeightForWidth());
        toolButtonValve->setSizePolicy(sizePolicy5);
        toolButtonValve->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButtonValve);

        toolButtonVibrator = new QToolButton(FormVibrationAdjust);
        toolButtonVibrator->setObjectName(QString::fromUtf8("toolButtonVibrator"));
        sizePolicy5.setHeightForWidth(toolButtonVibrator->sizePolicy().hasHeightForWidth());
        toolButtonVibrator->setSizePolicy(sizePolicy5);
        toolButtonVibrator->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButtonVibrator);

        toolButton_Single = new QToolButton(FormVibrationAdjust);
        toolButton_Single->setObjectName(QString::fromUtf8("toolButton_Single"));
        sizePolicy5.setHeightForWidth(toolButton_Single->sizePolicy().hasHeightForWidth());
        toolButton_Single->setSizePolicy(sizePolicy5);
        toolButton_Single->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButton_Single);

        toolButton_All = new QToolButton(FormVibrationAdjust);
        toolButton_All->setObjectName(QString::fromUtf8("toolButton_All"));
        sizePolicy5.setHeightForWidth(toolButton_All->sizePolicy().hasHeightForWidth());
        toolButton_All->setSizePolicy(sizePolicy5);
        toolButton_All->setMinimumSize(QSize(90, 40));

        verticalLayout->addWidget(toolButton_All);


        gridLayout_8->addLayout(verticalLayout, 1, 7, 1, 1);

        label = new QLabel(FormVibrationAdjust);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label, 0, 0, 1, 8);


        retranslateUi(FormVibrationAdjust);

        QMetaObject::connectSlotsByName(FormVibrationAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormVibrationAdjust)
    {
        FormVibrationAdjust->setWindowTitle(QApplication::translate("FormVibrationAdjust", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_v1->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2501", 0, QApplication::UnicodeUTF8));
        pushButton_v2->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2502", 0, QApplication::UnicodeUTF8));
        pushButton_v3->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2503", 0, QApplication::UnicodeUTF8));
        pushButton_v4->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2504", 0, QApplication::UnicodeUTF8));
        pushButton_v5->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2505", 0, QApplication::UnicodeUTF8));
        pushButton_v6->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2506", 0, QApplication::UnicodeUTF8));
        pushButton_v7->setText(QApplication::translate("FormVibrationAdjust", "\346\214\257\345\212\250\345\231\2507", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormVibrationAdjust", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        toolButtonValve->setText(QApplication::translate("FormVibrationAdjust", "\345\226\267\351\230\200 \345\205\263", 0, QApplication::UnicodeUTF8));
        toolButtonVibrator->setText(QApplication::translate("FormVibrationAdjust", "\344\276\233\346\226\231 \345\205\263", 0, QApplication::UnicodeUTF8));
        toolButton_Single->setText(QApplication::translate("FormVibrationAdjust", "\345\215\225\344\270\252\350\260\203\346\225\264", 0, QApplication::UnicodeUTF8));
        toolButton_All->setText(QApplication::translate("FormVibrationAdjust", "\346\225\264\344\275\223\350\260\203\346\225\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormVibrationAdjust", "\346\265\201\351\207\217\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormVibrationAdjust: public Ui_FormVibrationAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMVIBRATIONADJUST_H
