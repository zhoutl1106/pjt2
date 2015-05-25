/********************************************************************************
** Form generated from reading UI file 'formcntcheck.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCNTCHECK_H
#define UI_FORMCNTCHECK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCntCheck
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditCnt;
    QLabel *label_4;
    QLineEdit *lineEditGroup;
    QLabel *label_5;
    QLineEdit *lineEditNum;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_reset;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_query;
    QLabel *label_7;
    QSpinBox *spinBoxGroup;
    QLabel *label_8;
    QWidget *widget;
    QLabel *label_9;
    QSpinBox *spinBoxNum;
    QLabel *label_10;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormCntCheck)
    {
        if (FormCntCheck->objectName().isEmpty())
            FormCntCheck->setObjectName(QString::fromUtf8("FormCntCheck"));
        FormCntCheck->setWindowModality(Qt::NonModal);
        FormCntCheck->resize(1024, 520);
        FormCntCheck->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(FormCntCheck);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(FormCntCheck);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 50));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(50);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(FormCntCheck);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        lineEditCnt = new QLineEdit(FormCntCheck);
        lineEditCnt->setObjectName(QString::fromUtf8("lineEditCnt"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditCnt->sizePolicy().hasHeightForWidth());
        lineEditCnt->setSizePolicy(sizePolicy);
        lineEditCnt->setStyleSheet(QString::fromUtf8(""));
        lineEditCnt->setFrame(true);
        lineEditCnt->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditCnt);

        label_4 = new QLabel(FormCntCheck);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        lineEditGroup = new QLineEdit(FormCntCheck);
        lineEditGroup->setObjectName(QString::fromUtf8("lineEditGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditGroup->sizePolicy().hasHeightForWidth());
        lineEditGroup->setSizePolicy(sizePolicy1);
        lineEditGroup->setMinimumSize(QSize(40, 0));
        lineEditGroup->setMaximumSize(QSize(40, 16777215));
        lineEditGroup->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditGroup);

        label_5 = new QLabel(FormCntCheck);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        lineEditNum = new QLineEdit(FormCntCheck);
        lineEditNum->setObjectName(QString::fromUtf8("lineEditNum"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditNum->sizePolicy().hasHeightForWidth());
        lineEditNum->setSizePolicy(sizePolicy2);
        lineEditNum->setMaximumSize(QSize(40, 16777215));
        lineEditNum->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditNum);

        label_6 = new QLabel(FormCntCheck);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton_reset = new QToolButton(FormCntCheck);
        toolButton_reset->setObjectName(QString::fromUtf8("toolButton_reset"));
        sizePolicy2.setHeightForWidth(toolButton_reset->sizePolicy().hasHeightForWidth());
        toolButton_reset->setSizePolicy(sizePolicy2);
        toolButton_reset->setMinimumSize(QSize(80, 30));

        horizontalLayout_3->addWidget(toolButton_reset);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton_query = new QToolButton(FormCntCheck);
        toolButton_query->setObjectName(QString::fromUtf8("toolButton_query"));

        horizontalLayout->addWidget(toolButton_query);

        label_7 = new QLabel(FormCntCheck);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        spinBoxGroup = new QSpinBox(FormCntCheck);
        spinBoxGroup->setObjectName(QString::fromUtf8("spinBoxGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoxGroup->sizePolicy().hasHeightForWidth());
        spinBoxGroup->setSizePolicy(sizePolicy3);
        spinBoxGroup->setMinimumSize(QSize(150, 0));
        spinBoxGroup->setMinimum(1);

        horizontalLayout->addWidget(spinBoxGroup);

        label_8 = new QLabel(FormCntCheck);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_8);

        widget = new QWidget(FormCntCheck);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout->addWidget(widget);

        label_9 = new QLabel(FormCntCheck);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        spinBoxNum = new QSpinBox(FormCntCheck);
        spinBoxNum->setObjectName(QString::fromUtf8("spinBoxNum"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxNum->sizePolicy().hasHeightForWidth());
        spinBoxNum->setSizePolicy(sizePolicy4);
        spinBoxNum->setMinimumSize(QSize(150, 0));
        spinBoxNum->setMinimum(1);

        horizontalLayout->addWidget(spinBoxNum);

        label_10 = new QLabel(FormCntCheck);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_10);

        toolButton = new QToolButton(FormCntCheck);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy5);
        toolButton->setMinimumSize(QSize(80, 30));
        toolButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/back.png);\n"
"font: 20pt \"Microsoft YaHei\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(FormCntCheck);

        QMetaObject::connectSlotsByName(FormCntCheck);
    } // setupUi

    void retranslateUi(QWidget *FormCntCheck)
    {
        FormCntCheck->setWindowTitle(QApplication::translate("FormCntCheck", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormCntCheck", "\345\226\267\351\230\200\347\233\221\346\216\247", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormCntCheck", "\345\267\245\344\275\234\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        lineEditCnt->setText(QApplication::translate("FormCntCheck", "1234567890", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FormCntCheck", "\347\254\254", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FormCntCheck", "\347\273\204", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FormCntCheck", "\344\270\252", 0, QApplication::UnicodeUTF8));
        toolButton_reset->setText(QApplication::translate("FormCntCheck", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        toolButton_query->setText(QApplication::translate("FormCntCheck", "\345\274\200\345\247\213\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FormCntCheck", "\347\254\254", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FormCntCheck", "\347\273\204", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FormCntCheck", "\347\254\254", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("FormCntCheck", "\344\270\252", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormCntCheck", "    \350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormCntCheck: public Ui_FormCntCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCNTCHECK_H
