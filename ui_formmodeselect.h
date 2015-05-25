/********************************************************************************
** Form generated from reading UI file 'formmodeselect.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODESELECT_H
#define UI_FORMMODESELECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormModeSelect
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *mode_1;
    QHBoxLayout *horizontalLayout;
    QToolButton *mem_11;
    QToolButton *mem_12;
    QToolButton *mem_13;
    QVBoxLayout *verticalLayout_4;
    QPushButton *mode_2;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *mem_21;
    QToolButton *mem_22;
    QToolButton *mem_23;
    QVBoxLayout *verticalLayout_2;
    QPushButton *mode_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *mem_31;
    QToolButton *mem_32;
    QToolButton *mem_33;
    QVBoxLayout *verticalLayout_5;
    QPushButton *mode_4;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *mem_41;
    QToolButton *mem_42;
    QToolButton *mem_43;
    QVBoxLayout *verticalLayout;
    QPushButton *mode_5;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *mem_51;
    QToolButton *mem_52;
    QToolButton *mem_53;
    QGridLayout *gridLayout;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QLabel *label;

    void setupUi(QWidget *FormModeSelect)
    {
        if (FormModeSelect->objectName().isEmpty())
            FormModeSelect->setObjectName(QString::fromUtf8("FormModeSelect"));
        FormModeSelect->resize(1024, 520);
        gridLayout_2 = new QGridLayout(FormModeSelect);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(200);
        gridLayout_2->setVerticalSpacing(30);
        gridLayout_2->setContentsMargins(80, 20, 80, 20);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mode_1 = new QPushButton(FormModeSelect);
        mode_1->setObjectName(QString::fromUtf8("mode_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mode_1->sizePolicy().hasHeightForWidth());
        mode_1->setSizePolicy(sizePolicy);
        mode_1->setStyleSheet(QString::fromUtf8(""));
        mode_1->setChecked(false);

        verticalLayout_3->addWidget(mode_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 3, -1, -1);
        mem_11 = new QToolButton(FormModeSelect);
        mem_11->setObjectName(QString::fromUtf8("mem_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mem_11->sizePolicy().hasHeightForWidth());
        mem_11->setSizePolicy(sizePolicy1);
        mem_11->setMinimumSize(QSize(80, 30));
        mem_11->setStyleSheet(QString::fromUtf8(""));
        mem_11->setChecked(false);

        horizontalLayout->addWidget(mem_11);

        mem_12 = new QToolButton(FormModeSelect);
        mem_12->setObjectName(QString::fromUtf8("mem_12"));
        sizePolicy1.setHeightForWidth(mem_12->sizePolicy().hasHeightForWidth());
        mem_12->setSizePolicy(sizePolicy1);
        mem_12->setMinimumSize(QSize(80, 30));
        mem_12->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(mem_12);

        mem_13 = new QToolButton(FormModeSelect);
        mem_13->setObjectName(QString::fromUtf8("mem_13"));
        sizePolicy1.setHeightForWidth(mem_13->sizePolicy().hasHeightForWidth());
        mem_13->setSizePolicy(sizePolicy1);
        mem_13->setMinimumSize(QSize(80, 30));
        mem_13->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"    text-align:center;\n"
"    font-size:15px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    width:0px;\n"
"    height:0px;\n"
"}\n"
"\n"
"QRadioButton:checked\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnR.png);\n"
"}\n"
"\n"
"QRadioButton:unchecked\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/image/btnG.png);\n"
"}"));

        horizontalLayout->addWidget(mem_13);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mode_2 = new QPushButton(FormModeSelect);
        mode_2->setObjectName(QString::fromUtf8("mode_2"));
        sizePolicy.setHeightForWidth(mode_2->sizePolicy().hasHeightForWidth());
        mode_2->setSizePolicy(sizePolicy);
        mode_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(mode_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 3, -1, -1);
        mem_21 = new QToolButton(FormModeSelect);
        mem_21->setObjectName(QString::fromUtf8("mem_21"));
        sizePolicy1.setHeightForWidth(mem_21->sizePolicy().hasHeightForWidth());
        mem_21->setSizePolicy(sizePolicy1);
        mem_21->setMinimumSize(QSize(80, 30));
        mem_21->setStyleSheet(QString::fromUtf8(""));
        mem_21->setChecked(false);

        horizontalLayout_5->addWidget(mem_21);

        mem_22 = new QToolButton(FormModeSelect);
        mem_22->setObjectName(QString::fromUtf8("mem_22"));
        sizePolicy1.setHeightForWidth(mem_22->sizePolicy().hasHeightForWidth());
        mem_22->setSizePolicy(sizePolicy1);
        mem_22->setMinimumSize(QSize(80, 30));
        mem_22->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(mem_22);

        mem_23 = new QToolButton(FormModeSelect);
        mem_23->setObjectName(QString::fromUtf8("mem_23"));
        sizePolicy1.setHeightForWidth(mem_23->sizePolicy().hasHeightForWidth());
        mem_23->setSizePolicy(sizePolicy1);
        mem_23->setMinimumSize(QSize(80, 30));
        mem_23->setStyleSheet(QString::fromUtf8("text-align:center;\n"
""));

        horizontalLayout_5->addWidget(mem_23);


        verticalLayout_4->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_4, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mode_3 = new QPushButton(FormModeSelect);
        mode_3->setObjectName(QString::fromUtf8("mode_3"));
        sizePolicy.setHeightForWidth(mode_3->sizePolicy().hasHeightForWidth());
        mode_3->setSizePolicy(sizePolicy);
        mode_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(mode_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 3, -1, -1);
        mem_31 = new QToolButton(FormModeSelect);
        mem_31->setObjectName(QString::fromUtf8("mem_31"));
        sizePolicy1.setHeightForWidth(mem_31->sizePolicy().hasHeightForWidth());
        mem_31->setSizePolicy(sizePolicy1);
        mem_31->setMinimumSize(QSize(80, 30));
        mem_31->setStyleSheet(QString::fromUtf8(""));
        mem_31->setChecked(false);

        horizontalLayout_3->addWidget(mem_31);

        mem_32 = new QToolButton(FormModeSelect);
        mem_32->setObjectName(QString::fromUtf8("mem_32"));
        sizePolicy1.setHeightForWidth(mem_32->sizePolicy().hasHeightForWidth());
        mem_32->setSizePolicy(sizePolicy1);
        mem_32->setMinimumSize(QSize(80, 30));
        mem_32->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(mem_32);

        mem_33 = new QToolButton(FormModeSelect);
        mem_33->setObjectName(QString::fromUtf8("mem_33"));
        sizePolicy1.setHeightForWidth(mem_33->sizePolicy().hasHeightForWidth());
        mem_33->setSizePolicy(sizePolicy1);
        mem_33->setMinimumSize(QSize(80, 30));
        mem_33->setStyleSheet(QString::fromUtf8("text-align:center;\n"
""));

        horizontalLayout_3->addWidget(mem_33);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mode_4 = new QPushButton(FormModeSelect);
        mode_4->setObjectName(QString::fromUtf8("mode_4"));
        sizePolicy.setHeightForWidth(mode_4->sizePolicy().hasHeightForWidth());
        mode_4->setSizePolicy(sizePolicy);
        mode_4->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(mode_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 3, -1, -1);
        mem_41 = new QToolButton(FormModeSelect);
        mem_41->setObjectName(QString::fromUtf8("mem_41"));
        sizePolicy1.setHeightForWidth(mem_41->sizePolicy().hasHeightForWidth());
        mem_41->setSizePolicy(sizePolicy1);
        mem_41->setMinimumSize(QSize(80, 30));
        mem_41->setStyleSheet(QString::fromUtf8(""));
        mem_41->setChecked(false);

        horizontalLayout_6->addWidget(mem_41);

        mem_42 = new QToolButton(FormModeSelect);
        mem_42->setObjectName(QString::fromUtf8("mem_42"));
        sizePolicy1.setHeightForWidth(mem_42->sizePolicy().hasHeightForWidth());
        mem_42->setSizePolicy(sizePolicy1);
        mem_42->setMinimumSize(QSize(80, 30));
        mem_42->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(mem_42);

        mem_43 = new QToolButton(FormModeSelect);
        mem_43->setObjectName(QString::fromUtf8("mem_43"));
        sizePolicy1.setHeightForWidth(mem_43->sizePolicy().hasHeightForWidth());
        mem_43->setSizePolicy(sizePolicy1);
        mem_43->setMinimumSize(QSize(80, 30));
        mem_43->setStyleSheet(QString::fromUtf8("text-align:center;\n"
""));

        horizontalLayout_6->addWidget(mem_43);


        verticalLayout_5->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_5, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mode_5 = new QPushButton(FormModeSelect);
        mode_5->setObjectName(QString::fromUtf8("mode_5"));
        sizePolicy.setHeightForWidth(mode_5->sizePolicy().hasHeightForWidth());
        mode_5->setSizePolicy(sizePolicy);
        mode_5->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(mode_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 3, -1, -1);
        mem_51 = new QToolButton(FormModeSelect);
        mem_51->setObjectName(QString::fromUtf8("mem_51"));
        sizePolicy1.setHeightForWidth(mem_51->sizePolicy().hasHeightForWidth());
        mem_51->setSizePolicy(sizePolicy1);
        mem_51->setMinimumSize(QSize(80, 30));
        mem_51->setStyleSheet(QString::fromUtf8(""));
        mem_51->setChecked(false);

        horizontalLayout_4->addWidget(mem_51);

        mem_52 = new QToolButton(FormModeSelect);
        mem_52->setObjectName(QString::fromUtf8("mem_52"));
        sizePolicy1.setHeightForWidth(mem_52->sizePolicy().hasHeightForWidth());
        mem_52->setSizePolicy(sizePolicy1);
        mem_52->setMinimumSize(QSize(80, 30));
        mem_52->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(mem_52);

        mem_53 = new QToolButton(FormModeSelect);
        mem_53->setObjectName(QString::fromUtf8("mem_53"));
        sizePolicy1.setHeightForWidth(mem_53->sizePolicy().hasHeightForWidth());
        mem_53->setSizePolicy(sizePolicy1);
        mem_53->setMinimumSize(QSize(80, 30));
        mem_53->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(mem_53);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(30);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton_3 = new QToolButton(FormModeSelect);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton_3, 0, 0, 1, 1);

        toolButton_2 = new QToolButton(FormModeSelect);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton_2, 0, 1, 1, 1);

        toolButton = new QToolButton(FormModeSelect);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 1, 1, 1);

        label = new QLabel(FormModeSelect);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);


        retranslateUi(FormModeSelect);

        QMetaObject::connectSlotsByName(FormModeSelect);
    } // setupUi

    void retranslateUi(QWidget *FormModeSelect)
    {
        FormModeSelect->setWindowTitle(QApplication::translate("FormModeSelect", "Form", 0, QApplication::UnicodeUTF8));
        mode_1->setText(QApplication::translate("FormModeSelect", "\351\200\211\345\274\202\350\211\262", 0, QApplication::UnicodeUTF8));
        mem_11->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2061", 0, QApplication::UnicodeUTF8));
        mem_12->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2062", 0, QApplication::UnicodeUTF8));
        mem_13->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2063", 0, QApplication::UnicodeUTF8));
        mode_2->setText(QApplication::translate("FormModeSelect", "\351\200\211\350\205\271\347\231\275", 0, QApplication::UnicodeUTF8));
        mem_21->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2061", 0, QApplication::UnicodeUTF8));
        mem_22->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2062", 0, QApplication::UnicodeUTF8));
        mem_23->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2063", 0, QApplication::UnicodeUTF8));
        mode_3->setText(QApplication::translate("FormModeSelect", "\351\273\204\347\231\275\345\220\214\351\200\211", 0, QApplication::UnicodeUTF8));
        mem_31->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2061", 0, QApplication::UnicodeUTF8));
        mem_32->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2062", 0, QApplication::UnicodeUTF8));
        mem_33->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2063", 0, QApplication::UnicodeUTF8));
        mode_4->setText(QApplication::translate("FormModeSelect", "\351\200\211\347\263\257\347\261\263", 0, QApplication::UnicodeUTF8));
        mem_41->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2061", 0, QApplication::UnicodeUTF8));
        mem_42->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2062", 0, QApplication::UnicodeUTF8));
        mem_43->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2063", 0, QApplication::UnicodeUTF8));
        mode_5->setText(QApplication::translate("FormModeSelect", "\351\200\211\351\273\221\347\261\263", 0, QApplication::UnicodeUTF8));
        mem_51->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2061", 0, QApplication::UnicodeUTF8));
        mem_52->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2062", 0, QApplication::UnicodeUTF8));
        mem_53->setText(QApplication::translate("FormModeSelect", "\350\256\260\345\277\2063", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("FormModeSelect", "\350\257\273\345\217\226", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormModeSelect", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormModeSelect", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormModeSelect", "\350\211\262\351\200\211\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormModeSelect: public Ui_FormModeSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODESELECT_H
