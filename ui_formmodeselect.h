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
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *mode_1;
    QPushButton *mode_2;
    QPushButton *mode_3;
    QPushButton *mode_4;
    QPushButton *mode_5;
    QToolButton *toolButton;

    void setupUi(QWidget *FormModeSelect)
    {
        if (FormModeSelect->objectName().isEmpty())
            FormModeSelect->setObjectName(QString::fromUtf8("FormModeSelect"));
        FormModeSelect->resize(1024, 520);
        verticalLayout = new QVBoxLayout(FormModeSelect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FormModeSelect);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(150);
        gridLayout->setVerticalSpacing(80);
        gridLayout->setContentsMargins(150, 50, 150, 50);
        mode_1 = new QPushButton(FormModeSelect);
        mode_1->setObjectName(QString::fromUtf8("mode_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mode_1->sizePolicy().hasHeightForWidth());
        mode_1->setSizePolicy(sizePolicy1);
        mode_1->setStyleSheet(QString::fromUtf8(""));
        mode_1->setChecked(false);

        gridLayout->addWidget(mode_1, 0, 0, 1, 1);

        mode_2 = new QPushButton(FormModeSelect);
        mode_2->setObjectName(QString::fromUtf8("mode_2"));
        sizePolicy1.setHeightForWidth(mode_2->sizePolicy().hasHeightForWidth());
        mode_2->setSizePolicy(sizePolicy1);
        mode_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(mode_2, 0, 1, 1, 1);

        mode_3 = new QPushButton(FormModeSelect);
        mode_3->setObjectName(QString::fromUtf8("mode_3"));
        sizePolicy1.setHeightForWidth(mode_3->sizePolicy().hasHeightForWidth());
        mode_3->setSizePolicy(sizePolicy1);
        mode_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(mode_3, 1, 0, 1, 1);

        mode_4 = new QPushButton(FormModeSelect);
        mode_4->setObjectName(QString::fromUtf8("mode_4"));
        sizePolicy1.setHeightForWidth(mode_4->sizePolicy().hasHeightForWidth());
        mode_4->setSizePolicy(sizePolicy1);
        mode_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(mode_4, 1, 1, 1, 1);

        mode_5 = new QPushButton(FormModeSelect);
        mode_5->setObjectName(QString::fromUtf8("mode_5"));
        sizePolicy1.setHeightForWidth(mode_5->sizePolicy().hasHeightForWidth());
        mode_5->setSizePolicy(sizePolicy1);
        mode_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(mode_5, 2, 0, 1, 1);

        toolButton = new QToolButton(FormModeSelect);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(toolButton, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(FormModeSelect);

        QMetaObject::connectSlotsByName(FormModeSelect);
    } // setupUi

    void retranslateUi(QWidget *FormModeSelect)
    {
        FormModeSelect->setWindowTitle(QApplication::translate("FormModeSelect", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormModeSelect", "\350\211\262\351\200\211\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        mode_1->setText(QApplication::translate("FormModeSelect", "\351\200\211\345\274\202\350\211\262", 0, QApplication::UnicodeUTF8));
        mode_2->setText(QApplication::translate("FormModeSelect", "\351\200\211\350\205\271\347\231\275", 0, QApplication::UnicodeUTF8));
        mode_3->setText(QApplication::translate("FormModeSelect", "\351\273\204\347\231\275\345\220\214\351\200\211", 0, QApplication::UnicodeUTF8));
        mode_4->setText(QApplication::translate("FormModeSelect", "\351\200\211\347\263\257\347\261\263", 0, QApplication::UnicodeUTF8));
        mode_5->setText(QApplication::translate("FormModeSelect", "\351\200\211\351\273\221\347\261\263", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("FormModeSelect", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormModeSelect: public Ui_FormModeSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODESELECT_H
