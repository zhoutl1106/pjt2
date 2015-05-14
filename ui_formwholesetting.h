/********************************************************************************
** Form generated from reading UI file 'formwholesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWHOLESETTING_H
#define UI_FORMWHOLESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormWholeSetting
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
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
            FormWholeSetting->setObjectName(QStringLiteral("FormWholeSetting"));
        FormWholeSetting->resize(1024, 600);
        verticalLayout = new QVBoxLayout(FormWholeSetting);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(50, 50, 50, 50);
        label = new QLabel(FormWholeSetting);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        toolButton_2 = new QToolButton(FormWholeSetting);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        toolButton_2->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_2, 0, 0, 1, 1);

        toolButton_3 = new QToolButton(FormWholeSetting);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_3, 0, 1, 1, 1);

        toolButton_4 = new QToolButton(FormWholeSetting);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        sizePolicy.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy);
        toolButton_4->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_4, 0, 2, 1, 1);

        toolButton_5 = new QToolButton(FormWholeSetting);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_5, 0, 3, 1, 1);

        toolButton_6 = new QToolButton(FormWholeSetting);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        sizePolicy.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy);
        toolButton_6->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_6, 0, 4, 1, 1);

        toolButton_7 = new QToolButton(FormWholeSetting);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        sizePolicy.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy);
        toolButton_7->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_7, 0, 5, 1, 1);

        toolButton_8 = new QToolButton(FormWholeSetting);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        sizePolicy.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy);
        toolButton_8->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(toolButton_8, 0, 6, 1, 1);

        widget_1 = new QWidget(FormWholeSetting);
        widget_1->setObjectName(QStringLiteral("widget_1"));

        gridLayout->addWidget(widget_1, 1, 0, 1, 1);

        widget_2 = new QWidget(FormWholeSetting);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        widget_3 = new QWidget(FormWholeSetting);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        gridLayout->addWidget(widget_3, 1, 2, 1, 1);

        widget_4 = new QWidget(FormWholeSetting);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        gridLayout->addWidget(widget_4, 1, 3, 1, 1);

        widget_5 = new QWidget(FormWholeSetting);
        widget_5->setObjectName(QStringLiteral("widget_5"));

        gridLayout->addWidget(widget_5, 1, 4, 1, 1);

        widget_6 = new QWidget(FormWholeSetting);
        widget_6->setObjectName(QStringLiteral("widget_6"));

        gridLayout->addWidget(widget_6, 1, 5, 1, 1);

        widget_7 = new QWidget(FormWholeSetting);
        widget_7->setObjectName(QStringLiteral("widget_7"));

        gridLayout->addWidget(widget_7, 1, 6, 1, 1);


        verticalLayout->addLayout(gridLayout);

        toolButton = new QToolButton(FormWholeSetting);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMinimumSize(QSize(80, 50));

        verticalLayout->addWidget(toolButton, 0, Qt::AlignRight);


        retranslateUi(FormWholeSetting);

        QMetaObject::connectSlotsByName(FormWholeSetting);
    } // setupUi

    void retranslateUi(QWidget *FormWholeSetting)
    {
        FormWholeSetting->setWindowTitle(QApplication::translate("FormWholeSetting", "Form", 0));
        label->setText(QApplication::translate("FormWholeSetting", "\346\225\264\346\234\272\350\256\276\347\275\256", 0));
        toolButton_2->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2721", 0));
        toolButton_3->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2722", 0));
        toolButton_4->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2723", 0));
        toolButton_5->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2724", 0));
        toolButton_6->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2725", 0));
        toolButton_7->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2726", 0));
        toolButton_8->setText(QApplication::translate("FormWholeSetting", "\347\233\270\346\234\2727", 0));
        toolButton->setText(QApplication::translate("FormWholeSetting", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class FormWholeSetting: public Ui_FormWholeSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWHOLESETTING_H
