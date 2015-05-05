/********************************************************************************
** Form generated from reading UI file 'formccdcurve.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCCDCURVE_H
#define UI_FORMCCDCURVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCCDCurve
{
public:
    QScrollBar *horizontalScrollBar;
    QLabel *labelPos;
    QLabel *label;
    QToolButton *toolButton_clockwise_f;
    QSpinBox *spinBox_f;
    QToolButton *toolButton_Clear;
    QToolButton *toolButton;
    QToolButton *toolButton_anticlockwise_f;
    QSpinBox *spinBox_channel;
    QToolButton *toolButton_Clear_8;
    QLabel *label_3;
    QToolButton *toolButton_Clear_4;
    QRadioButton *radioButton_Clear_5;
    QRadioButton *radioButton_Clear_7;
    QToolButton *toolButton_SetRange;
    QComboBox *camera;
    QComboBox *camera_2;
    QToolButton *toolButton_anticlockwise_f_2;

    void setupUi(QWidget *FormCCDCurve)
    {
        if (FormCCDCurve->objectName().isEmpty())
            FormCCDCurve->setObjectName(QStringLiteral("FormCCDCurve"));
        FormCCDCurve->resize(1024, 600);
        horizontalScrollBar = new QScrollBar(FormCCDCurve);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(-1, 425, 1021, 51));
        horizontalScrollBar->setMaximum(1024);
        horizontalScrollBar->setSingleStep(0);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        labelPos = new QLabel(FormCCDCurve);
        labelPos->setObjectName(QStringLiteral("labelPos"));
        labelPos->setGeometry(QRect(0, 0, 271, 51));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPos->sizePolicy().hasHeightForWidth());
        labelPos->setSizePolicy(sizePolicy);
        labelPos->setMinimumSize(QSize(128, 30));
        labelPos->setAlignment(Qt::AlignCenter);
        label = new QLabel(FormCCDCurve);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 0, 261, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 30));
        label->setAlignment(Qt::AlignCenter);
        toolButton_clockwise_f = new QToolButton(FormCCDCurve);
        toolButton_clockwise_f->setObjectName(QStringLiteral("toolButton_clockwise_f"));
        toolButton_clockwise_f->setGeometry(QRect(310, 480, 101, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        toolButton_clockwise_f->setFont(font);
        toolButton_clockwise_f->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        spinBox_f = new QSpinBox(FormCCDCurve);
        spinBox_f->setObjectName(QStringLiteral("spinBox_f"));
        spinBox_f->setGeometry(QRect(150, 480, 150, 50));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_f->sizePolicy().hasHeightForWidth());
        spinBox_f->setSizePolicy(sizePolicy2);
        spinBox_f->setMinimumSize(QSize(150, 50));
        spinBox_f->setStyleSheet(QStringLiteral(""));
        toolButton_Clear = new QToolButton(FormCCDCurve);
        toolButton_Clear->setObjectName(QStringLiteral("toolButton_Clear"));
        toolButton_Clear->setGeometry(QRect(901, 481, 100, 50));
        toolButton = new QToolButton(FormCCDCurve);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(900, 540, 100, 50));
        toolButton_anticlockwise_f = new QToolButton(FormCCDCurve);
        toolButton_anticlockwise_f->setObjectName(QStringLiteral("toolButton_anticlockwise_f"));
        toolButton_anticlockwise_f->setGeometry(QRect(410, 480, 101, 50));
        toolButton_anticlockwise_f->setFont(font);
        toolButton_anticlockwise_f->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        spinBox_channel = new QSpinBox(FormCCDCurve);
        spinBox_channel->setObjectName(QStringLiteral("spinBox_channel"));
        spinBox_channel->setGeometry(QRect(150, 540, 150, 50));
        sizePolicy2.setHeightForWidth(spinBox_channel->sizePolicy().hasHeightForWidth());
        spinBox_channel->setSizePolicy(sizePolicy2);
        spinBox_channel->setMinimumSize(QSize(150, 50));
        spinBox_channel->setStyleSheet(QStringLiteral(""));
        spinBox_channel->setMinimum(1);
        spinBox_channel->setMaximum(7);
        spinBox_channel->setValue(1);
        toolButton_Clear_8 = new QToolButton(FormCCDCurve);
        toolButton_Clear_8->setObjectName(QStringLiteral("toolButton_Clear_8"));
        toolButton_Clear_8->setGeometry(QRect(310, 540, 101, 50));
        toolButton_Clear_8->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        label_3 = new QLabel(FormCCDCurve);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 540, 71, 41));
        toolButton_Clear_4 = new QToolButton(FormCCDCurve);
        toolButton_Clear_4->setObjectName(QStringLiteral("toolButton_Clear_4"));
        toolButton_Clear_4->setGeometry(QRect(410, 540, 100, 50));
        toolButton_Clear_4->setFont(font);
        toolButton_Clear_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        radioButton_Clear_5 = new QRadioButton(FormCCDCurve);
        radioButton_Clear_5->setObjectName(QStringLiteral("radioButton_Clear_5"));
        radioButton_Clear_5->setGeometry(QRect(670, 540, 100, 50));
        radioButton_Clear_5->setFont(font);
        radioButton_Clear_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        radioButton_Clear_7 = new QRadioButton(FormCCDCurve);
        radioButton_Clear_7->setObjectName(QStringLiteral("radioButton_Clear_7"));
        radioButton_Clear_7->setGeometry(QRect(780, 540, 100, 50));
        radioButton_Clear_7->setFont(font);
        radioButton_Clear_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));
        radioButton_Clear_7->setChecked(true);
        toolButton_SetRange = new QToolButton(FormCCDCurve);
        toolButton_SetRange->setObjectName(QStringLiteral("toolButton_SetRange"));
        toolButton_SetRange->setGeometry(QRect(859, 10, 151, 50));
        camera = new QComboBox(FormCCDCurve);
        camera->setObjectName(QStringLiteral("camera"));
        camera->setGeometry(QRect(10, 480, 141, 49));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy3);
        camera_2 = new QComboBox(FormCCDCurve);
        camera_2->setObjectName(QStringLiteral("camera_2"));
        camera_2->setGeometry(QRect(10, 540, 51, 49));
        sizePolicy3.setHeightForWidth(camera_2->sizePolicy().hasHeightForWidth());
        camera_2->setSizePolicy(sizePolicy3);
        toolButton_anticlockwise_f_2 = new QToolButton(FormCCDCurve);
        toolButton_anticlockwise_f_2->setObjectName(QStringLiteral("toolButton_anticlockwise_f_2"));
        toolButton_anticlockwise_f_2->setGeometry(QRect(540, 480, 101, 50));
        toolButton_anticlockwise_f_2->setFont(font);
        toolButton_anticlockwise_f_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221\";"));

        retranslateUi(FormCCDCurve);
        QObject::connect(toolButton, SIGNAL(clicked()), FormCCDCurve, SLOT(close()));

        QMetaObject::connectSlotsByName(FormCCDCurve);
    } // setupUi

    void retranslateUi(QWidget *FormCCDCurve)
    {
        FormCCDCurve->setWindowTitle(QApplication::translate("FormCCDCurve", "Form", 0));
        labelPos->setText(QApplication::translate("FormCCDCurve", "*", 0));
        label->setText(QApplication::translate("FormCCDCurve", "\350\203\214\346\231\257\346\235\277\350\260\203\346\225\264", 0));
        toolButton_clockwise_f->setText(QApplication::translate("FormCCDCurve", "\351\241\272\346\227\266\351\222\210", 0));
        toolButton_Clear->setText(QApplication::translate("FormCCDCurve", "\346\270\205\351\231\244", 0));
        toolButton->setText(QApplication::translate("FormCCDCurve", "\350\277\224\345\233\236", 0));
        toolButton_anticlockwise_f->setText(QApplication::translate("FormCCDCurve", "\351\200\206\346\227\266\351\222\210", 0));
        toolButton_Clear_8->setText(QApplication::translate("FormCCDCurve", "\344\274\240\350\276\223\346\225\260\346\215\256", 0));
        label_3->setText(QApplication::translate("FormCCDCurve", "\351\200\232\351\201\223", 0));
        toolButton_Clear_4->setText(QApplication::translate("FormCCDCurve", "\350\277\236\347\273\255\344\274\240\350\276\223", 0));
        radioButton_Clear_5->setText(QApplication::translate("FormCCDCurve", "\345\205\250\351\203\250\346\230\276\347\244\272", 0));
        radioButton_Clear_7->setText(QApplication::translate("FormCCDCurve", "\351\232\224\347\202\271\346\230\276\347\244\272", 0));
        toolButton_SetRange->setText(QApplication::translate("FormCCDCurve", "\350\256\276\347\275\256\350\214\203\345\233\264", 0));
        camera->clear();
        camera->insertItems(0, QStringList()
         << QApplication::translate("FormCCDCurve", "\345\211\215\350\203\214\346\231\257\346\235\277", 0)
         << QApplication::translate("FormCCDCurve", "\345\220\216\350\203\214\346\231\257\346\235\277", 0)
        );
        camera_2->clear();
        camera_2->insertItems(0, QStringList()
         << QApplication::translate("FormCCDCurve", "\345\211\215", 0)
         << QApplication::translate("FormCCDCurve", "\345\220\216", 0)
        );
        toolButton_anticlockwise_f_2->setText(QApplication::translate("FormCCDCurve", "\344\277\235\345\255\230\350\247\222\345\272\246", 0));
    } // retranslateUi

};

namespace Ui {
    class FormCCDCurve: public Ui_FormCCDCurve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCCDCURVE_H
