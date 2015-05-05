/********************************************************************************
** Form generated from reading UI file 'formcntcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCNTCHECK_H
#define UI_FORMCNTCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCntCheck
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPos;
    QLabel *label;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormCntCheck)
    {
        if (FormCntCheck->objectName().isEmpty())
            FormCntCheck->setObjectName(QStringLiteral("FormCntCheck"));
        FormCntCheck->setWindowModality(Qt::NonModal);
        FormCntCheck->resize(400, 300);
        verticalLayout = new QVBoxLayout(FormCntCheck);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPos = new QLabel(FormCntCheck);
        labelPos->setObjectName(QStringLiteral("labelPos"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPos->sizePolicy().hasHeightForWidth());
        labelPos->setSizePolicy(sizePolicy);
        labelPos->setMinimumSize(QSize(200, 0));
        labelPos->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelPos);

        label = new QLabel(FormCntCheck);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        toolButton_2 = new QToolButton(FormCntCheck);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);

        toolButton = new QToolButton(FormCntCheck);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FormCntCheck);

        QMetaObject::connectSlotsByName(FormCntCheck);
    } // setupUi

    void retranslateUi(QWidget *FormCntCheck)
    {
        FormCntCheck->setWindowTitle(QApplication::translate("FormCntCheck", "Form", 0));
        labelPos->setText(QApplication::translate("FormCntCheck", "(7,14) : 0", 0));
        label->setText(QApplication::translate("FormCntCheck", "\345\267\245\344\275\234\346\254\241\346\225\260\346\237\245\350\257\242\344\270\255", 0));
        toolButton_2->setText(QApplication::translate("FormCntCheck", "\345\274\200\345\247\213\346\237\245\350\257\242", 0));
        toolButton->setText(QApplication::translate("FormCntCheck", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class FormCntCheck: public Ui_FormCntCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCNTCHECK_H
