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
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAccuracyDetailAdjust
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSlider *verticalSlider13;
    QSlider *verticalSlider12;
    QLCDNumber *lcdNumber13;
    QLabel *label_4;
    QLCDNumber *lcdNumber11;
    QLCDNumber *lcdNumber12;
    QLabel *label_5;
    QSlider *verticalSlider11;
    QWidget *widget_1u;
    QWidget *widget_2u;
    QWidget *widget_3u;
    QWidget *widget_1d;
    QWidget *widget_2d;
    QWidget *widget_3d;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QToolButton *toolButton;
    QComboBox *comboBox;
    QToolButton *toolButton_2;
    QLabel *label;

    void setupUi(QWidget *FormAccuracyDetailAdjust)
    {
        if (FormAccuracyDetailAdjust->objectName().isEmpty())
            FormAccuracyDetailAdjust->setObjectName(QString::fromUtf8("FormAccuracyDetailAdjust"));
        FormAccuracyDetailAdjust->resize(1024, 520);
        gridLayout_3 = new QGridLayout(FormAccuracyDetailAdjust);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(100);
        gridLayout_3->setVerticalSpacing(50);
        gridLayout_3->setContentsMargins(80, 30, 80, 50);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        label_6 = new QLabel(FormAccuracyDetailAdjust);
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

        verticalSlider13 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider13->setObjectName(QString::fromUtf8("verticalSlider13"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
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
        verticalSlider13->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider13, 2, 5, 1, 1, Qt::AlignHCenter);

        verticalSlider12 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider12->setObjectName(QString::fromUtf8("verticalSlider12"));
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
        verticalSlider12->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider12, 2, 3, 1, 1, Qt::AlignHCenter);

        lcdNumber13 = new QLCDNumber(FormAccuracyDetailAdjust);
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

        label_4 = new QLabel(FormAccuracyDetailAdjust);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        lcdNumber11 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber11->setObjectName(QString::fromUtf8("lcdNumber11"));
        sizePolicy2.setHeightForWidth(lcdNumber11->sizePolicy().hasHeightForWidth());
        lcdNumber11->setSizePolicy(sizePolicy2);
        lcdNumber11->setMinimumSize(QSize(0, 30));
        lcdNumber11->setSmallDecimalPoint(true);
        lcdNumber11->setDigitCount(4);
        lcdNumber11->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber11, 2, 2, 1, 1);

        lcdNumber12 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber12->setObjectName(QString::fromUtf8("lcdNumber12"));
        sizePolicy2.setHeightForWidth(lcdNumber12->sizePolicy().hasHeightForWidth());
        lcdNumber12->setSizePolicy(sizePolicy2);
        lcdNumber12->setMinimumSize(QSize(0, 30));
        lcdNumber12->setSmallDecimalPoint(true);
        lcdNumber12->setDigitCount(4);
        lcdNumber12->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdNumber12, 2, 4, 1, 1);

        label_5 = new QLabel(FormAccuracyDetailAdjust);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        verticalSlider11 = new QSlider(FormAccuracyDetailAdjust);
        verticalSlider11->setObjectName(QString::fromUtf8("verticalSlider11"));
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
        verticalSlider11->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider11, 2, 1, 1, 1, Qt::AlignHCenter);

        widget_1u = new QWidget(FormAccuracyDetailAdjust);
        widget_1u->setObjectName(QString::fromUtf8("widget_1u"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_1u->sizePolicy().hasHeightForWidth());
        widget_1u->setSizePolicy(sizePolicy3);
        widget_1u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_1u, 1, 1, 1, 1);

        widget_2u = new QWidget(FormAccuracyDetailAdjust);
        widget_2u->setObjectName(QString::fromUtf8("widget_2u"));
        sizePolicy3.setHeightForWidth(widget_2u->sizePolicy().hasHeightForWidth());
        widget_2u->setSizePolicy(sizePolicy3);
        widget_2u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_2u, 1, 3, 1, 1);

        widget_3u = new QWidget(FormAccuracyDetailAdjust);
        widget_3u->setObjectName(QString::fromUtf8("widget_3u"));
        sizePolicy3.setHeightForWidth(widget_3u->sizePolicy().hasHeightForWidth());
        widget_3u->setSizePolicy(sizePolicy3);
        widget_3u->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_3u, 1, 5, 1, 1);

        widget_1d = new QWidget(FormAccuracyDetailAdjust);
        widget_1d->setObjectName(QString::fromUtf8("widget_1d"));
        sizePolicy3.setHeightForWidth(widget_1d->sizePolicy().hasHeightForWidth());
        widget_1d->setSizePolicy(sizePolicy3);
        widget_1d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_1d, 3, 1, 1, 1);

        widget_2d = new QWidget(FormAccuracyDetailAdjust);
        widget_2d->setObjectName(QString::fromUtf8("widget_2d"));
        sizePolicy3.setHeightForWidth(widget_2d->sizePolicy().hasHeightForWidth());
        widget_2d->setSizePolicy(sizePolicy3);
        widget_2d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_2d, 3, 3, 1, 1);

        widget_3d = new QWidget(FormAccuracyDetailAdjust);
        widget_3d->setObjectName(QString::fromUtf8("widget_3d"));
        sizePolicy3.setHeightForWidth(widget_3d->sizePolicy().hasHeightForWidth());
        widget_3d->setSizePolicy(sizePolicy3);
        widget_3d->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(widget_3d, 3, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(50);
        gridLayout_2->setVerticalSpacing(200);
        widget = new QWidget(FormAccuracyDetailAdjust);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        toolButton = new QToolButton(FormAccuracyDetailAdjust);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButton, 1, 0, 1, 1);

        comboBox = new QComboBox(FormAccuracyDetailAdjust);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	color : rgb(255,255,255);\n"
"    margin-right: 0px;\n"
"	border-image: url(:/image/btnR.png);\n"
"	text-align: center;\n"
"}\n"
"QComboBox::drop-down {\n"
"	width: 50px;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"QComboBox::down-arrow {\n"
"	width: 50px;\n"
"    border-image: url(:/image/combo.png);\n"
"}"));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        toolButton_2 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButton_2, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        label = new QLabel(FormAccuracyDetailAdjust);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 2);


        retranslateUi(FormAccuracyDetailAdjust);

        QMetaObject::connectSlotsByName(FormAccuracyDetailAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormAccuracyDetailAdjust)
    {
        FormAccuracyDetailAdjust->setWindowTitle(QApplication::translate("FormAccuracyDetailAdjust", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormAccuracyDetailAdjust", "\344\272\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\232\227", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\226\221\347\202\271", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormAccuracyDetailAdjust", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2231", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2232", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2234", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2235", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2236", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\2237", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FormAccuracyDetailAdjust", "\346\225\264\344\275\223", 0, QApplication::UnicodeUTF8)
        );
        toolButton_2->setText(QApplication::translate("FormAccuracyDetailAdjust", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormAccuracyDetailAdjust", "\347\262\276\347\273\206\350\260\203\346\225\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAccuracyDetailAdjust: public Ui_FormAccuracyDetailAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACCURACYDETAILADJUST_H
