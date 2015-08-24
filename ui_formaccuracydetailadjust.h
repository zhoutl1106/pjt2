/********************************************************************************
** Form generated from reading UI file 'formaccuracydetailadjust.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMACCURACYDETAILADJUST_H
#define UI_FORMACCURACYDETAILADJUST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAccuracyDetailAdjust
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QWidget *widget_1d;
    QLabel *label_4;
    QLCDNumber *lcdNumber13;
    QSlider *verticalSlider12;
    QWidget *widget_1u;
    QWidget *widget_3d;
    QWidget *widget_2u;
    QWidget *widget_3u;
    QLCDNumber *lcdNumber11;
    QLCDNumber *lcdNumber12;
    QSlider *verticalSlider13;
    QWidget *widget_2d;
    QSlider *verticalSlider11;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QSlider *verticalSlider12_2;
    QLCDNumber *lcdNumber11_2;
    QWidget *widget_1d_2;
    QWidget *widget_2d_2;
    QLCDNumber *lcdNumber12_2;
    QSlider *verticalSlider11_2;
    QWidget *widget_3d_2;
    QWidget *widget_1u_2;
    QLCDNumber *lcdNumber13_2;
    QLabel *label_8;
    QSlider *verticalSlider13_2;
    QWidget *widget_2u_2;
    QWidget *widget_3u_2;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_3;
    QToolButton *toolButtonValve;
    QToolButton *toolButtonVibrator;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;

    void setupUi(QWidget *FormAccuracyDetailAdjust)
    {
        if (FormAccuracyDetailAdjust->objectName().isEmpty())
            FormAccuracyDetailAdjust->setObjectName(QString::fromUtf8("FormAccuracyDetailAdjust"));
        FormAccuracyDetailAdjust->resize(1024, 520);
        gridLayout_3 = new QGridLayout(FormAccuracyDetailAdjust);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(30);
        gridLayout_3->setContentsMargins(50, -1, 50, 50);
        label = new QLabel(FormAccuracyDetailAdjust);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        widget_1d = new QWidget(FormAccuracyDetailAdjust);
        widget_1d->setObjectName(QString::fromUtf8("widget_1d"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_1d->sizePolicy().hasHeightForWidth());
        widget_1d->setSizePolicy(sizePolicy1);
        widget_1d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_1d, 4, 1, 1, 1);

        label_4 = new QLabel(FormAccuracyDetailAdjust);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        lcdNumber13 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber13->setObjectName(QString::fromUtf8("lcdNumber13"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lcdNumber13->sizePolicy().hasHeightForWidth());
        lcdNumber13->setSizePolicy(sizePolicy3);
        lcdNumber13->setMinimumSize(QSize(0, 30));
        lcdNumber13->setSmallDecimalPoint(true);
        lcdNumber13->setDigitCount(3);
        lcdNumber13->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber13, 3, 6, 1, 1);

        verticalSlider12 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider12->setObjectName(QString::fromUtf8("verticalSlider12"));
        verticalSlider12->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(verticalSlider12->sizePolicy().hasHeightForWidth());
        verticalSlider12->setSizePolicy(sizePolicy4);
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
        verticalSlider12->setMinimum(0);
        verticalSlider12->setMaximum(255);
        verticalSlider12->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider12, 3, 3, 1, 1, Qt::AlignHCenter);

        widget_1u = new QWidget(FormAccuracyDetailAdjust);
        widget_1u->setObjectName(QString::fromUtf8("widget_1u"));
        sizePolicy1.setHeightForWidth(widget_1u->sizePolicy().hasHeightForWidth());
        widget_1u->setSizePolicy(sizePolicy1);
        widget_1u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_1u, 2, 1, 1, 1);

        widget_3d = new QWidget(FormAccuracyDetailAdjust);
        widget_3d->setObjectName(QString::fromUtf8("widget_3d"));
        sizePolicy1.setHeightForWidth(widget_3d->sizePolicy().hasHeightForWidth());
        widget_3d->setSizePolicy(sizePolicy1);
        widget_3d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_3d, 4, 5, 1, 1);

        widget_2u = new QWidget(FormAccuracyDetailAdjust);
        widget_2u->setObjectName(QString::fromUtf8("widget_2u"));
        sizePolicy1.setHeightForWidth(widget_2u->sizePolicy().hasHeightForWidth());
        widget_2u->setSizePolicy(sizePolicy1);
        widget_2u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_2u, 2, 3, 1, 1);

        widget_3u = new QWidget(FormAccuracyDetailAdjust);
        widget_3u->setObjectName(QString::fromUtf8("widget_3u"));
        sizePolicy1.setHeightForWidth(widget_3u->sizePolicy().hasHeightForWidth());
        widget_3u->setSizePolicy(sizePolicy1);
        widget_3u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_3u, 2, 5, 1, 1);

        lcdNumber11 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber11->setObjectName(QString::fromUtf8("lcdNumber11"));
        sizePolicy3.setHeightForWidth(lcdNumber11->sizePolicy().hasHeightForWidth());
        lcdNumber11->setSizePolicy(sizePolicy3);
        lcdNumber11->setMinimumSize(QSize(0, 30));
        lcdNumber11->setSmallDecimalPoint(true);
        lcdNumber11->setDigitCount(4);
        lcdNumber11->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber11, 3, 2, 1, 1);

        lcdNumber12 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber12->setObjectName(QString::fromUtf8("lcdNumber12"));
        sizePolicy3.setHeightForWidth(lcdNumber12->sizePolicy().hasHeightForWidth());
        lcdNumber12->setSizePolicy(sizePolicy3);
        lcdNumber12->setMinimumSize(QSize(0, 30));
        lcdNumber12->setSmallDecimalPoint(true);
        lcdNumber12->setDigitCount(4);
        lcdNumber12->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber12, 3, 4, 1, 1);

        verticalSlider13 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider13->setObjectName(QString::fromUtf8("verticalSlider13"));
        verticalSlider13->setEnabled(true);
        sizePolicy4.setHeightForWidth(verticalSlider13->sizePolicy().hasHeightForWidth());
        verticalSlider13->setSizePolicy(sizePolicy4);
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
        verticalSlider13->setMinimum(1);
        verticalSlider13->setMaximum(15);
        verticalSlider13->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider13, 3, 5, 1, 1, Qt::AlignHCenter);

        widget_2d = new QWidget(FormAccuracyDetailAdjust);
        widget_2d->setObjectName(QString::fromUtf8("widget_2d"));
        sizePolicy1.setHeightForWidth(widget_2d->sizePolicy().hasHeightForWidth());
        widget_2d->setSizePolicy(sizePolicy1);
        widget_2d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_2d, 4, 3, 1, 1);

        verticalSlider11 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider11->setObjectName(QString::fromUtf8("verticalSlider11"));
        verticalSlider11->setEnabled(true);
        sizePolicy4.setHeightForWidth(verticalSlider11->sizePolicy().hasHeightForWidth());
        verticalSlider11->setSizePolicy(sizePolicy4);
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
        verticalSlider11->setMinimum(0);
        verticalSlider11->setMaximum(255);
        verticalSlider11->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider11, 3, 1, 1, 1, Qt::AlignHCenter);

        label_6 = new QLabel(FormAccuracyDetailAdjust);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_10 = new QLabel(FormAccuracyDetailAdjust);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 1, 1, 6);

        label_5 = new QLabel(FormAccuracyDetailAdjust);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 5, 1, 2);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        verticalSlider12_2 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider12_2->setObjectName(QString::fromUtf8("verticalSlider12_2"));
        verticalSlider12_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(verticalSlider12_2->sizePolicy().hasHeightForWidth());
        verticalSlider12_2->setSizePolicy(sizePolicy4);
        verticalSlider12_2->setMinimumSize(QSize(25, 0));
        verticalSlider12_2->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider12_2->setMinimum(0);
        verticalSlider12_2->setMaximum(255);
        verticalSlider12_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider12_2, 3, 3, 1, 1, Qt::AlignHCenter);

        lcdNumber11_2 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber11_2->setObjectName(QString::fromUtf8("lcdNumber11_2"));
        sizePolicy3.setHeightForWidth(lcdNumber11_2->sizePolicy().hasHeightForWidth());
        lcdNumber11_2->setSizePolicy(sizePolicy3);
        lcdNumber11_2->setMinimumSize(QSize(0, 30));
        lcdNumber11_2->setSmallDecimalPoint(true);
        lcdNumber11_2->setDigitCount(4);
        lcdNumber11_2->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber11_2, 3, 2, 1, 1);

        widget_1d_2 = new QWidget(FormAccuracyDetailAdjust);
        widget_1d_2->setObjectName(QString::fromUtf8("widget_1d_2"));
        sizePolicy1.setHeightForWidth(widget_1d_2->sizePolicy().hasHeightForWidth());
        widget_1d_2->setSizePolicy(sizePolicy1);
        widget_1d_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_1d_2, 4, 1, 1, 1);

        widget_2d_2 = new QWidget(FormAccuracyDetailAdjust);
        widget_2d_2->setObjectName(QString::fromUtf8("widget_2d_2"));
        sizePolicy1.setHeightForWidth(widget_2d_2->sizePolicy().hasHeightForWidth());
        widget_2d_2->setSizePolicy(sizePolicy1);
        widget_2d_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_2d_2, 4, 3, 1, 1);

        lcdNumber12_2 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber12_2->setObjectName(QString::fromUtf8("lcdNumber12_2"));
        sizePolicy3.setHeightForWidth(lcdNumber12_2->sizePolicy().hasHeightForWidth());
        lcdNumber12_2->setSizePolicy(sizePolicy3);
        lcdNumber12_2->setMinimumSize(QSize(0, 30));
        lcdNumber12_2->setSmallDecimalPoint(true);
        lcdNumber12_2->setDigitCount(4);
        lcdNumber12_2->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber12_2, 3, 4, 1, 1);

        verticalSlider11_2 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider11_2->setObjectName(QString::fromUtf8("verticalSlider11_2"));
        verticalSlider11_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(verticalSlider11_2->sizePolicy().hasHeightForWidth());
        verticalSlider11_2->setSizePolicy(sizePolicy4);
        verticalSlider11_2->setMinimumSize(QSize(25, 0));
        verticalSlider11_2->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider11_2->setMinimum(0);
        verticalSlider11_2->setMaximum(255);
        verticalSlider11_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider11_2, 3, 1, 1, 1, Qt::AlignHCenter);

        widget_3d_2 = new QWidget(FormAccuracyDetailAdjust);
        widget_3d_2->setObjectName(QString::fromUtf8("widget_3d_2"));
        sizePolicy1.setHeightForWidth(widget_3d_2->sizePolicy().hasHeightForWidth());
        widget_3d_2->setSizePolicy(sizePolicy1);
        widget_3d_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_3d_2, 4, 5, 1, 1);

        widget_1u_2 = new QWidget(FormAccuracyDetailAdjust);
        widget_1u_2->setObjectName(QString::fromUtf8("widget_1u_2"));
        sizePolicy1.setHeightForWidth(widget_1u_2->sizePolicy().hasHeightForWidth());
        widget_1u_2->setSizePolicy(sizePolicy1);
        widget_1u_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_1u_2, 2, 1, 1, 1);

        lcdNumber13_2 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber13_2->setObjectName(QString::fromUtf8("lcdNumber13_2"));
        sizePolicy3.setHeightForWidth(lcdNumber13_2->sizePolicy().hasHeightForWidth());
        lcdNumber13_2->setSizePolicy(sizePolicy3);
        lcdNumber13_2->setMinimumSize(QSize(0, 30));
        lcdNumber13_2->setSmallDecimalPoint(true);
        lcdNumber13_2->setDigitCount(3);
        lcdNumber13_2->setSegmentStyle(QLCDNumber::Filled);

        gridLayout_2->addWidget(lcdNumber13_2, 3, 6, 1, 1);

        label_8 = new QLabel(FormAccuracyDetailAdjust);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 1, 3, 1, 1);

        verticalSlider13_2 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider13_2->setObjectName(QString::fromUtf8("verticalSlider13_2"));
        verticalSlider13_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(verticalSlider13_2->sizePolicy().hasHeightForWidth());
        verticalSlider13_2->setSizePolicy(sizePolicy4);
        verticalSlider13_2->setMinimumSize(QSize(25, 0));
        verticalSlider13_2->setStyleSheet(QString::fromUtf8("QSlider::groove {\n"
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
        verticalSlider13_2->setMinimum(1);
        verticalSlider13_2->setMaximum(15);
        verticalSlider13_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider13_2, 3, 5, 1, 1, Qt::AlignHCenter);

        widget_2u_2 = new QWidget(FormAccuracyDetailAdjust);
        widget_2u_2->setObjectName(QString::fromUtf8("widget_2u_2"));
        sizePolicy1.setHeightForWidth(widget_2u_2->sizePolicy().hasHeightForWidth());
        widget_2u_2->setSizePolicy(sizePolicy1);
        widget_2u_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_2u_2, 2, 3, 1, 1);

        widget_3u_2 = new QWidget(FormAccuracyDetailAdjust);
        widget_3u_2->setObjectName(QString::fromUtf8("widget_3u_2"));
        sizePolicy1.setHeightForWidth(widget_3u_2->sizePolicy().hasHeightForWidth());
        widget_3u_2->setSizePolicy(sizePolicy1);
        widget_3u_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(widget_3u_2, 2, 5, 1, 1);

        label_7 = new QLabel(FormAccuracyDetailAdjust);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        label_11 = new QLabel(FormAccuracyDetailAdjust);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 1, 1, 6);

        label_9 = new QLabel(FormAccuracyDetailAdjust);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 1, 5, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(60);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolButtonValve = new QToolButton(FormAccuracyDetailAdjust);
        toolButtonValve->setObjectName(QString::fromUtf8("toolButtonValve"));
        sizePolicy2.setHeightForWidth(toolButtonValve->sizePolicy().hasHeightForWidth());
        toolButtonValve->setSizePolicy(sizePolicy2);
        toolButtonValve->setMinimumSize(QSize(80, 40));

        verticalLayout_3->addWidget(toolButtonValve);

        toolButtonVibrator = new QToolButton(FormAccuracyDetailAdjust);
        toolButtonVibrator->setObjectName(QString::fromUtf8("toolButtonVibrator"));
        sizePolicy2.setHeightForWidth(toolButtonVibrator->sizePolicy().hasHeightForWidth());
        toolButtonVibrator->setSizePolicy(sizePolicy2);
        toolButtonVibrator->setMinimumSize(QSize(80, 40));

        verticalLayout_3->addWidget(toolButtonVibrator);

        toolButton_2 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);
        toolButton_2->setMinimumSize(QSize(80, 0));

        verticalLayout_3->addWidget(toolButton_2);

        toolButton = new QToolButton(FormAccuracyDetailAdjust);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);
        toolButton->setMinimumSize(QSize(80, 0));

        verticalLayout_3->addWidget(toolButton);


        gridLayout_3->addLayout(verticalLayout_3, 1, 4, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_1 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(radioButton_1->sizePolicy().hasHeightForWidth());
        radioButton_1->setSizePolicy(sizePolicy5);
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

        verticalLayout_2->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy5.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy5);
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

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy5.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy5);
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

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        sizePolicy5.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy5);
        radioButton_4->setFont(font1);
        radioButton_4->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
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

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        sizePolicy5.setHeightForWidth(radioButton_5->sizePolicy().hasHeightForWidth());
        radioButton_5->setSizePolicy(sizePolicy5);
        radioButton_5->setFont(font1);
        radioButton_5->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
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

        verticalLayout_2->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        sizePolicy5.setHeightForWidth(radioButton_6->sizePolicy().hasHeightForWidth());
        radioButton_6->setSizePolicy(sizePolicy5);
        radioButton_6->setFont(font1);
        radioButton_6->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
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

        verticalLayout_2->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(FormAccuracyDetailAdjust);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        sizePolicy5.setHeightForWidth(radioButton_7->sizePolicy().hasHeightForWidth());
        radioButton_7->setSizePolicy(sizePolicy5);
        radioButton_7->setFont(font1);
        radioButton_7->setStyleSheet(QString::fromUtf8("QRadioButton::indicator\n"
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

        verticalLayout_2->addWidget(radioButton_7);


        gridLayout_3->addLayout(verticalLayout_2, 1, 2, 1, 2);


        retranslateUi(FormAccuracyDetailAdjust);

        QMetaObject::connectSlotsByName(FormAccuracyDetailAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormAccuracyDetailAdjust)
    {
        FormAccuracyDetailAdjust->setWindowTitle(QApplication::translate("FormAccuracyDetailAdjust", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormAccuracyDetailAdjust", "\347\262\276\345\272\246\347\273\206\350\260\203", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormAccuracyDetailAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("FormAccuracyDetailAdjust", "\345\211\215\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\226\221\347\202\271", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FormAccuracyDetailAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("FormAccuracyDetailAdjust", "\345\220\216\347\233\270\346\234\272", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\226\221\347\202\271", 0, QApplication::UnicodeUTF8));
        toolButtonValve->setText(QApplication::translate("FormAccuracyDetailAdjust", "\345\226\267\351\230\200 \345\205\263", 0, QApplication::UnicodeUTF8));
        toolButtonVibrator->setText(QApplication::translate("FormAccuracyDetailAdjust", "\344\276\233\346\226\231 \345\205\263", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormAccuracyDetailAdjust", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormAccuracyDetailAdjust", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        radioButton_1->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2231", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2232", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2233", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2234", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2235", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2236", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAccuracyDetailAdjust: public Ui_FormAccuracyDetailAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACCURACYDETAILADJUST_H
