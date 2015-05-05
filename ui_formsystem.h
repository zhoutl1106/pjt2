/********************************************************************************
** Form generated from reading UI file 'formsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSYSTEM_H
#define UI_FORMSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSystem
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QToolButton *toolButton_7;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_9;
    QToolButton *toolButton_8;
    QToolButton *toolButton;

    void setupUi(QWidget *FormSystem)
    {
        if (FormSystem->objectName().isEmpty())
            FormSystem->setObjectName(QStringLiteral("FormSystem"));
        FormSystem->setWindowModality(Qt::WindowModal);
        FormSystem->resize(1024, 520);
        gridLayout = new QGridLayout(FormSystem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(150);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(200, 20, 200, 50);
        label_2 = new QLabel(FormSystem);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        toolButton_7 = new QToolButton(FormSystem);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy1);
        toolButton_7->setMinimumSize(QSize(0, 0));
        toolButton_7->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(toolButton_7, 1, 0, 1, 1);

        toolButton_4 = new QToolButton(FormSystem);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        sizePolicy1.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy1);
        toolButton_4->setMinimumSize(QSize(0, 0));
        toolButton_4->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(toolButton_4, 1, 1, 1, 1);

        toolButton_5 = new QToolButton(FormSystem);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        sizePolicy1.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy1);
        toolButton_5->setMinimumSize(QSize(0, 0));
        toolButton_5->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(toolButton_5, 2, 0, 1, 1);

        toolButton_9 = new QToolButton(FormSystem);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        sizePolicy1.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy1);
        toolButton_9->setMinimumSize(QSize(0, 0));
        toolButton_9->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(toolButton_9, 2, 1, 1, 1);

        toolButton_8 = new QToolButton(FormSystem);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        sizePolicy1.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy1);
        toolButton_8->setMinimumSize(QSize(0, 0));
        toolButton_8->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(toolButton_8, 3, 0, 1, 1);

        toolButton = new QToolButton(FormSystem);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMinimumSize(QSize(0, 0));
        toolButton->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";border-image: url(:/image/back.png);"));

        gridLayout->addWidget(toolButton, 3, 1, 1, 1);


        retranslateUi(FormSystem);

        QMetaObject::connectSlotsByName(FormSystem);
    } // setupUi

    void retranslateUi(QWidget *FormSystem)
    {
        FormSystem->setWindowTitle(QApplication::translate("FormSystem", "Form", 0));
        label_2->setText(QApplication::translate("FormSystem", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        toolButton_7->setText(QApplication::translate("FormSystem", "\346\270\205\347\201\260\350\256\276\347\275\256", 0));
        toolButton_4->setText(QApplication::translate("FormSystem", "\350\203\214\346\231\257\346\235\277\350\260\203\346\225\264", 0));
        toolButton_5->setText(QApplication::translate("FormSystem", "\345\226\267\351\230\200\350\256\276\347\275\256", 0));
        toolButton_9->setText(QApplication::translate("FormSystem", "\347\262\276\345\272\246\347\273\206\350\260\203", 0));
        toolButton_8->setText(QApplication::translate("FormSystem", "\346\225\264\346\234\272\350\256\276\347\275\256", 0));
        toolButton->setText(QApplication::translate("FormSystem", "    \350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class FormSystem: public Ui_FormSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSYSTEM_H
