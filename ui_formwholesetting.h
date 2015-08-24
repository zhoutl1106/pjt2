/********************************************************************************
** Form generated from reading UI file 'formwholesetting.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWHOLESETTING_H
#define UI_FORMWHOLESETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormWholeSetting
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonMain;
    QToolButton *toolButtonCfg;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonIP;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QWidget *widget_1;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *widget_6;
    QWidget *widget_7;
    QToolButton *toolButton;

    void setupUi(QWidget *FormWholeSetting)
    {
        if (FormWholeSetting->objectName().isEmpty())
            FormWholeSetting->setObjectName(QString::fromUtf8("FormWholeSetting"));
        FormWholeSetting->resize(1024, 600);
        verticalLayout = new QVBoxLayout(FormWholeSetting);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(150, -1, 150, -1);
        label = new QLabel(FormWholeSetting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        groupBox_2 = new QGroupBox(FormWholeSetting);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButtonMain = new QToolButton(groupBox_2);
        toolButtonMain->setObjectName(QString::fromUtf8("toolButtonMain"));
        toolButtonMain->setMinimumSize(QSize(150, 50));

        horizontalLayout->addWidget(toolButtonMain);

        toolButtonCfg = new QToolButton(groupBox_2);
        toolButtonCfg->setObjectName(QString::fromUtf8("toolButtonCfg"));
        toolButtonCfg->setMinimumSize(QSize(150, 50));

        horizontalLayout->addWidget(toolButtonCfg);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(FormWholeSetting);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setMinimum(101);
        spinBox->setMaximum(150);

        horizontalLayout_2->addWidget(spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        toolButtonIP = new QToolButton(groupBox_3);
        toolButtonIP->setObjectName(QString::fromUtf8("toolButtonIP"));
        toolButtonIP->setMinimumSize(QSize(80, 50));

        horizontalLayout_2->addWidget(toolButtonIP);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(FormWholeSetting);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy1);
        toolButton_2->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_2, 0, 0, 1, 1);

        toolButton_3 = new QToolButton(groupBox);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        sizePolicy1.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy1);
        toolButton_3->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_3, 0, 1, 1, 1);

        toolButton_4 = new QToolButton(groupBox);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        sizePolicy1.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy1);
        toolButton_4->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_4, 0, 2, 1, 1);

        toolButton_5 = new QToolButton(groupBox);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        sizePolicy1.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy1);
        toolButton_5->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_5, 0, 3, 1, 1);

        toolButton_6 = new QToolButton(groupBox);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        sizePolicy1.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy1);
        toolButton_6->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_6, 0, 4, 1, 1);

        toolButton_7 = new QToolButton(groupBox);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        sizePolicy1.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy1);
        toolButton_7->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_7, 0, 5, 1, 1);

        toolButton_8 = new QToolButton(groupBox);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        sizePolicy1.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy1);
        toolButton_8->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(toolButton_8, 0, 6, 1, 1);

        widget_1 = new QWidget(groupBox);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        widget_1->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_1, 1, 0, 1, 1);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_3, 1, 2, 1, 1);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_4, 1, 3, 1, 1);

        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_5, 1, 4, 1, 1);

        widget_6 = new QWidget(groupBox);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_6, 1, 5, 1, 1);

        widget_7 = new QWidget(groupBox);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget_7, 1, 6, 1, 1);


        verticalLayout->addWidget(groupBox);

        toolButton = new QToolButton(FormWholeSetting);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(80, 50));

        verticalLayout->addWidget(toolButton, 0, Qt::AlignHCenter);


        retranslateUi(FormWholeSetting);

        QMetaObject::connectSlotsByName(FormWholeSetting);
    } // setupUi

    void retranslateUi(QWidget *FormWholeSetting)
    {
        FormWholeSetting->setWindowTitle(QApplication::translate("FormWholeSetting", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormWholeSetting", "\346\225\264\346\234\272\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FormWholeSetting", "\347\263\273\347\273\237\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        toolButtonMain->setText(QApplication::translate("FormWholeSetting", "\344\270\273\347\250\213\345\272\217\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        toolButtonCfg->setText(QApplication::translate("FormWholeSetting", "\351\205\215\347\275\256\346\226\207\344\273\266\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("FormWholeSetting", "IP\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormWholeSetting", "192.168.1.", 0, QApplication::UnicodeUTF8));
        toolButtonIP->setText(QApplication::translate("FormWholeSetting", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FormWholeSetting", "\345\210\206\351\200\211\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2721", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2722", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2723", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2724", 0, QApplication::UnicodeUTF8));
        toolButton_6->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2725", 0, QApplication::UnicodeUTF8));
        toolButton_7->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2726", 0, QApplication::UnicodeUTF8));
        toolButton_8->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2727", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormWholeSetting", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormWholeSetting: public Ui_FormWholeSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWHOLESETTING_H
