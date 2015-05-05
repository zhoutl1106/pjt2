/********************************************************************************
** Form generated from reading UI file 'formaccuracydetailadjust.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMACCURACYDETAILADJUST_H
#define UI_FORMACCURACYDETAILADJUST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAccuracyDetailAdjust
{
public:
    QToolButton *toolButton;
    QLCDNumber *lcdNumber2;
    QLCDNumber *lcdNumber1;
    QLCDNumber *lcdNumber3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *labelMode;
    QLabel *labelMemory;
    QLabel *label;
    QScrollBar *horizontalScrollBar_2;
    QScrollBar *horizontalScrollBar_3;
    QScrollBar *horizontalScrollBar_1;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *camera;
    QLabel *label_2;
    QSpinBox *spinBox;

    void setupUi(QWidget *FormAccuracyDetailAdjust)
    {
        if (FormAccuracyDetailAdjust->objectName().isEmpty())
            FormAccuracyDetailAdjust->setObjectName(QStringLiteral("FormAccuracyDetailAdjust"));
        FormAccuracyDetailAdjust->resize(1024, 600);
        toolButton = new QToolButton(FormAccuracyDetailAdjust);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(860, 120, 150, 100));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        lcdNumber2 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber2->setObjectName(QStringLiteral("lcdNumber2"));
        lcdNumber2->setGeometry(QRect(450, 330, 46, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lcdNumber2->sizePolicy().hasHeightForWidth());
        lcdNumber2->setSizePolicy(sizePolicy1);
        lcdNumber2->setMinimumSize(QSize(0, 50));
        lcdNumber2->setDigitCount(3);
        lcdNumber2->setDigitCount(3);
        lcdNumber1 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber1->setObjectName(QStringLiteral("lcdNumber1"));
        lcdNumber1->setGeometry(QRect(450, 210, 46, 50));
        sizePolicy1.setHeightForWidth(lcdNumber1->sizePolicy().hasHeightForWidth());
        lcdNumber1->setSizePolicy(sizePolicy1);
        lcdNumber1->setMinimumSize(QSize(0, 50));
        lcdNumber1->setDigitCount(3);
        lcdNumber1->setDigitCount(3);
        lcdNumber3 = new QLCDNumber(FormAccuracyDetailAdjust);
        lcdNumber3->setObjectName(QStringLiteral("lcdNumber3"));
        lcdNumber3->setGeometry(QRect(450, 450, 46, 50));
        sizePolicy1.setHeightForWidth(lcdNumber3->sizePolicy().hasHeightForWidth());
        lcdNumber3->setSizePolicy(sizePolicy1);
        lcdNumber3->setMinimumSize(QSize(0, 50));
        lcdNumber3->setDigitCount(3);
        lcdNumber3->setDigitCount(3);
        layoutWidget = new QWidget(FormAccuracyDetailAdjust);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 815, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(50);
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral(""));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_9);

        labelMode = new QLabel(layoutWidget);
        labelMode->setObjectName(QStringLiteral("labelMode"));
        sizePolicy2.setHeightForWidth(labelMode->sizePolicy().hasHeightForWidth());
        labelMode->setSizePolicy(sizePolicy2);
        labelMode->setMinimumSize(QSize(0, 0));
        labelMode->setFont(font);
        labelMode->setStyleSheet(QStringLiteral("color: rgb(30, 23, 255);"));
        labelMode->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelMode);

        labelMemory = new QLabel(layoutWidget);
        labelMemory->setObjectName(QStringLiteral("labelMemory"));
        sizePolicy2.setHeightForWidth(labelMemory->sizePolicy().hasHeightForWidth());
        labelMemory->setSizePolicy(sizePolicy2);
        labelMemory->setMinimumSize(QSize(0, 0));
        labelMemory->setFont(font);
        labelMemory->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.5,x3:0,y3:1, stop:0 rgba(0, 255, 0, 255), stop:1 rgba(128, 255, 128, 255), stop:2 rgba(0, 255, 0, 255));\n"
"color: rgb(255, 255, 255);"));
        labelMemory->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelMemory);

        label = new QLabel(FormAccuracyDetailAdjust);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 80, 271, 61));
        label->setAlignment(Qt::AlignCenter);
        horizontalScrollBar_2 = new QScrollBar(FormAccuracyDetailAdjust);
        horizontalScrollBar_2->setObjectName(QStringLiteral("horizontalScrollBar_2"));
        horizontalScrollBar_2->setGeometry(QRect(150, 260, 650, 71));
        horizontalScrollBar_2->setMaximum(255);
        horizontalScrollBar_2->setPageStep(0);
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);
        horizontalScrollBar_3 = new QScrollBar(FormAccuracyDetailAdjust);
        horizontalScrollBar_3->setObjectName(QStringLiteral("horizontalScrollBar_3"));
        horizontalScrollBar_3->setGeometry(QRect(150, 380, 650, 71));
        horizontalScrollBar_3->setMaximum(5);
        horizontalScrollBar_3->setPageStep(0);
        horizontalScrollBar_3->setOrientation(Qt::Horizontal);
        horizontalScrollBar_1 = new QScrollBar(FormAccuracyDetailAdjust);
        horizontalScrollBar_1->setObjectName(QStringLiteral("horizontalScrollBar_1"));
        horizontalScrollBar_1->setGeometry(QRect(150, 140, 650, 71));
        horizontalScrollBar_1->setStyleSheet(QStringLiteral(""));
        horizontalScrollBar_1->setMaximum(255);
        horizontalScrollBar_1->setPageStep(0);
        horizontalScrollBar_1->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(FormAccuracyDetailAdjust);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 150, 31, 49));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_4 = new QLabel(FormAccuracyDetailAdjust);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 260, 31, 49));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_5 = new QLabel(FormAccuracyDetailAdjust);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 390, 81, 49));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        toolButton_5 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(100, 155, 40, 40));
        toolButton_5->setMinimumSize(QSize(40, 40));
        toolButton_5->setStyleSheet(QStringLiteral("border-image: url(:/icons/downArrow.png);"));
        toolButton_6 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(810, 155, 40, 40));
        toolButton_6->setMinimumSize(QSize(40, 40));
        toolButton_6->setStyleSheet(QStringLiteral("border-image: url(:/icons/upArrow.png);"));
        toolButton_7 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setGeometry(QRect(810, 275, 40, 40));
        toolButton_7->setMinimumSize(QSize(40, 40));
        toolButton_7->setStyleSheet(QStringLiteral("border-image: url(:/icons/upArrow.png);"));
        toolButton_8 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setGeometry(QRect(100, 275, 40, 40));
        toolButton_8->setMinimumSize(QSize(40, 40));
        toolButton_8->setStyleSheet(QStringLiteral("border-image: url(:/icons/downArrow.png);"));
        toolButton_9 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setGeometry(QRect(810, 395, 40, 40));
        toolButton_9->setMinimumSize(QSize(40, 40));
        toolButton_9->setStyleSheet(QStringLiteral("border-image: url(:/icons/upArrow.png);"));
        toolButton_10 = new QToolButton(FormAccuracyDetailAdjust);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setGeometry(QRect(100, 395, 40, 40));
        toolButton_10->setMinimumSize(QSize(40, 40));
        toolButton_10->setStyleSheet(QStringLiteral("border-image: url(:/icons/downArrow.png);"));
        widget = new QWidget(FormAccuracyDetailAdjust);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 520, 441, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        camera = new QComboBox(widget);
        camera->setObjectName(QStringLiteral("camera"));
        sizePolicy2.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(camera);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy3);
        spinBox->setMinimum(1);
        spinBox->setMaximum(7);

        horizontalLayout->addWidget(spinBox);

        layoutWidget->raise();
        toolButton->raise();
        lcdNumber2->raise();
        lcdNumber1->raise();
        lcdNumber3->raise();
        layoutWidget->raise();
        label->raise();
        spinBox->raise();
        label_2->raise();
        horizontalScrollBar_2->raise();
        horizontalScrollBar_3->raise();
        horizontalScrollBar_1->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        toolButton_5->raise();
        toolButton_6->raise();
        toolButton_7->raise();
        toolButton_8->raise();
        toolButton_9->raise();
        toolButton_10->raise();

        retranslateUi(FormAccuracyDetailAdjust);

        QMetaObject::connectSlotsByName(FormAccuracyDetailAdjust);
    } // setupUi

    void retranslateUi(QWidget *FormAccuracyDetailAdjust)
    {
        FormAccuracyDetailAdjust->setWindowTitle(QApplication::translate("FormAccuracyDetailAdjust", "Form", 0));
        toolButton->setText(QApplication::translate("FormAccuracyDetailAdjust", "\350\277\224\345\233\236", 0));
        label_9->setText(QApplication::translate("FormAccuracyDetailAdjust", "\345\275\223\345\211\215\346\250\241\345\274\217/", 0));
        labelMode->setText(QApplication::translate("FormAccuracyDetailAdjust", "\345\274\202\350\211\262\347\262\222", 0));
        labelMemory->setText(QApplication::translate("FormAccuracyDetailAdjust", "\357\274\210\350\256\260\345\277\2061\357\274\211", 0));
        label->setText(QApplication::translate("FormAccuracyDetailAdjust", "\347\262\276\347\273\206\350\260\203\346\225\264", 0));
        label_3->setText(QApplication::translate("FormAccuracyDetailAdjust", "\344\272\256", 0));
        label_4->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\232\227", 0));
        label_5->setText(QApplication::translate("FormAccuracyDetailAdjust", "\346\226\221\347\202\271\346\225\260", 0));
        toolButton_5->setText(QApplication::translate("FormAccuracyDetailAdjust", "...", 0));
        toolButton_6->setText(QApplication::translate("FormAccuracyDetailAdjust", "...", 0));
        toolButton_7->setText(QApplication::translate("FormAccuracyDetailAdjust", "...", 0));
        toolButton_8->setText(QApplication::translate("FormAccuracyDetailAdjust", "...", 0));
        toolButton_9->setText(QApplication::translate("FormAccuracyDetailAdjust", "...", 0));
        toolButton_10->setText(QApplication::translate("FormAccuracyDetailAdjust", "...", 0));
        camera->clear();
        camera->insertItems(0, QStringList()
         << QApplication::translate("FormAccuracyDetailAdjust", "\345\211\215\347\233\270\346\234\272", 0)
         << QApplication::translate("FormAccuracyDetailAdjust", "\345\220\216\347\233\270\346\234\272", 0)
        );
        label_2->setText(QApplication::translate("FormAccuracyDetailAdjust", "\351\200\232\351\201\223", 0));
    } // retranslateUi

};

namespace Ui {
    class FormAccuracyDetailAdjust: public Ui_FormAccuracyDetailAdjust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACCURACYDETAILADJUST_H
