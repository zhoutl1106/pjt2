/********************************************************************************
** Form generated from reading UI file 'formccdcurve.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCCDCURVE_H
#define UI_FORMCCDCURVE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCCDCurve
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPos;
    QLabel *label;
    QToolButton *toolButton_SetRange;
    QSpacerItem *verticalSpacer;
    QScrollBar *horizontalScrollBar;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_f;
    QSpinBox *spinBox_channel;
    QToolButton *toolButton_clockwise;
    QLabel *label_3;
    QToolButton *toolButton_anticlockwise;
    QToolButton *toolButton_continue;
    QToolButton *toolButton_transmit;
    QToolButton *toolButton;
    QToolButton *toolButton_Clear;
    QWidget *widgetBkg;
    QWidget *widgetCamera;
    QToolButton *toolButton_all;
    QToolButton *toolButton_seperate;

    void setupUi(QWidget *FormCCDCurve)
    {
        if (FormCCDCurve->objectName().isEmpty())
            FormCCDCurve->setObjectName(QString::fromUtf8("FormCCDCurve"));
        FormCCDCurve->resize(1024, 520);
        verticalLayout = new QVBoxLayout(FormCCDCurve);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPos = new QLabel(FormCCDCurve);
        labelPos->setObjectName(QString::fromUtf8("labelPos"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPos->sizePolicy().hasHeightForWidth());
        labelPos->setSizePolicy(sizePolicy);
        labelPos->setMinimumSize(QSize(128, 30));
        labelPos->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelPos);

        label = new QLabel(FormCCDCurve);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 30));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        toolButton_SetRange = new QToolButton(FormCCDCurve);
        toolButton_SetRange->setObjectName(QString::fromUtf8("toolButton_SetRange"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton_SetRange->sizePolicy().hasHeightForWidth());
        toolButton_SetRange->setSizePolicy(sizePolicy2);
        toolButton_SetRange->setMinimumSize(QSize(128, 0));

        horizontalLayout->addWidget(toolButton_SetRange);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 325, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalScrollBar = new QScrollBar(FormCCDCurve);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setStyleSheet(QString::fromUtf8("QScrollBar::handle:horizontal {\n"
"	\n"
"	border-image: url(:/image/scrollHandle.png);\n"
"     min-width: 500px;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal\n"
"{\n"
"	border-image: url(:/image/scrollBkg.png);\n"
"}\n"
"\n"
"QScrollBar:horizontal\n"
"{\n"
"	border-image: url(:/image/scrollBkg.png);\n"
"	height:30px;\n"
"}\n"
"\n"
""));
        horizontalScrollBar->setMaximum(1024);
        horizontalScrollBar->setSingleStep(0);
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalScrollBar);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox_f = new QSpinBox(FormCCDCurve);
        spinBox_f->setObjectName(QString::fromUtf8("spinBox_f"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBox_f->sizePolicy().hasHeightForWidth());
        spinBox_f->setSizePolicy(sizePolicy3);
        spinBox_f->setMinimumSize(QSize(150, 50));
        spinBox_f->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(spinBox_f, 0, 2, 1, 1);

        spinBox_channel = new QSpinBox(FormCCDCurve);
        spinBox_channel->setObjectName(QString::fromUtf8("spinBox_channel"));
        sizePolicy3.setHeightForWidth(spinBox_channel->sizePolicy().hasHeightForWidth());
        spinBox_channel->setSizePolicy(sizePolicy3);
        spinBox_channel->setMinimumSize(QSize(150, 50));
        spinBox_channel->setStyleSheet(QString::fromUtf8(""));
        spinBox_channel->setMinimum(1);
        spinBox_channel->setMaximum(7);
        spinBox_channel->setValue(1);

        gridLayout->addWidget(spinBox_channel, 1, 2, 1, 1);

        toolButton_clockwise = new QToolButton(FormCCDCurve);
        toolButton_clockwise->setObjectName(QString::fromUtf8("toolButton_clockwise"));
        sizePolicy2.setHeightForWidth(toolButton_clockwise->sizePolicy().hasHeightForWidth());
        toolButton_clockwise->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        toolButton_clockwise->setFont(font);
        toolButton_clockwise->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(toolButton_clockwise, 0, 3, 1, 1);

        label_3 = new QLabel(FormCCDCurve);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        toolButton_anticlockwise = new QToolButton(FormCCDCurve);
        toolButton_anticlockwise->setObjectName(QString::fromUtf8("toolButton_anticlockwise"));
        sizePolicy2.setHeightForWidth(toolButton_anticlockwise->sizePolicy().hasHeightForWidth());
        toolButton_anticlockwise->setSizePolicy(sizePolicy2);
        toolButton_anticlockwise->setFont(font);
        toolButton_anticlockwise->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(toolButton_anticlockwise, 0, 4, 1, 1);

        toolButton_continue = new QToolButton(FormCCDCurve);
        toolButton_continue->setObjectName(QString::fromUtf8("toolButton_continue"));
        sizePolicy2.setHeightForWidth(toolButton_continue->sizePolicy().hasHeightForWidth());
        toolButton_continue->setSizePolicy(sizePolicy2);
        toolButton_continue->setFont(font);
        toolButton_continue->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(toolButton_continue, 1, 4, 1, 1);

        toolButton_transmit = new QToolButton(FormCCDCurve);
        toolButton_transmit->setObjectName(QString::fromUtf8("toolButton_transmit"));
        sizePolicy2.setHeightForWidth(toolButton_transmit->sizePolicy().hasHeightForWidth());
        toolButton_transmit->setSizePolicy(sizePolicy2);
        toolButton_transmit->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(toolButton_transmit, 1, 3, 1, 1);

        toolButton = new QToolButton(FormCCDCurve);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton, 1, 8, 1, 1);

        toolButton_Clear = new QToolButton(FormCCDCurve);
        toolButton_Clear->setObjectName(QString::fromUtf8("toolButton_Clear"));
        sizePolicy2.setHeightForWidth(toolButton_Clear->sizePolicy().hasHeightForWidth());
        toolButton_Clear->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton_Clear, 0, 8, 1, 1);

        widgetBkg = new QWidget(FormCCDCurve);
        widgetBkg->setObjectName(QString::fromUtf8("widgetBkg"));

        gridLayout->addWidget(widgetBkg, 0, 0, 1, 1);

        widgetCamera = new QWidget(FormCCDCurve);
        widgetCamera->setObjectName(QString::fromUtf8("widgetCamera"));

        gridLayout->addWidget(widgetCamera, 1, 0, 1, 1);

        toolButton_all = new QToolButton(FormCCDCurve);
        toolButton_all->setObjectName(QString::fromUtf8("toolButton_all"));
        sizePolicy2.setHeightForWidth(toolButton_all->sizePolicy().hasHeightForWidth());
        toolButton_all->setSizePolicy(sizePolicy2);
        toolButton_all->setFont(font);
        toolButton_all->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        gridLayout->addWidget(toolButton_all, 1, 6, 1, 1);

        toolButton_seperate = new QToolButton(FormCCDCurve);
        toolButton_seperate->setObjectName(QString::fromUtf8("toolButton_seperate"));
        sizePolicy2.setHeightForWidth(toolButton_seperate->sizePolicy().hasHeightForWidth());
        toolButton_seperate->setSizePolicy(sizePolicy2);
        toolButton_seperate->setFont(font);
        toolButton_seperate->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        toolButton_seperate->setChecked(false);

        gridLayout->addWidget(toolButton_seperate, 1, 7, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(FormCCDCurve);
        QObject::connect(toolButton, SIGNAL(clicked()), FormCCDCurve, SLOT(close()));

        QMetaObject::connectSlotsByName(FormCCDCurve);
    } // setupUi

    void retranslateUi(QWidget *FormCCDCurve)
    {
        FormCCDCurve->setWindowTitle(QApplication::translate("FormCCDCurve", "Form", 0, QApplication::UnicodeUTF8));
        labelPos->setText(QApplication::translate("FormCCDCurve", "*", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormCCDCurve", "\350\203\214\346\231\257\346\235\277\350\260\203\346\225\264", 0, QApplication::UnicodeUTF8));
        toolButton_SetRange->setText(QApplication::translate("FormCCDCurve", "\350\256\276\347\275\256\350\214\203\345\233\264", 0, QApplication::UnicodeUTF8));
        toolButton_clockwise->setText(QApplication::translate("FormCCDCurve", "\351\241\272\346\227\266\351\222\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormCCDCurve", "\351\200\232\351\201\223", 0, QApplication::UnicodeUTF8));
        toolButton_anticlockwise->setText(QApplication::translate("FormCCDCurve", "\351\200\206\346\227\266\351\222\210", 0, QApplication::UnicodeUTF8));
        toolButton_continue->setText(QApplication::translate("FormCCDCurve", "\350\277\236\347\273\255\344\274\240\350\276\223", 0, QApplication::UnicodeUTF8));
        toolButton_transmit->setText(QApplication::translate("FormCCDCurve", "\345\215\225\346\254\241\344\274\240\350\276\223", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormCCDCurve", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        toolButton_Clear->setText(QApplication::translate("FormCCDCurve", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        toolButton_all->setText(QApplication::translate("FormCCDCurve", "\345\205\250\351\203\250\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        toolButton_seperate->setText(QApplication::translate("FormCCDCurve", "\351\232\224\347\202\271\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormCCDCurve: public Ui_FormCCDCurve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCCDCURVE_H
