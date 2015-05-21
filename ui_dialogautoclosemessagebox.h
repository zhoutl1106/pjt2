/********************************************************************************
** Form generated from reading UI file 'dialogautoclosemessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAUTOCLOSEMESSAGEBOX_H
#define UI_DIALOGAUTOCLOSEMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAutoCloseMessageBox
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *labelCntDown;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogAutoCloseMessageBox)
    {
        if (DialogAutoCloseMessageBox->objectName().isEmpty())
            DialogAutoCloseMessageBox->setObjectName(QStringLiteral("DialogAutoCloseMessageBox"));
        DialogAutoCloseMessageBox->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogAutoCloseMessageBox->sizePolicy().hasHeightForWidth());
        DialogAutoCloseMessageBox->setSizePolicy(sizePolicy);
        DialogAutoCloseMessageBox->setStyleSheet(QLatin1String("QDialog{border-image: url(:/image/tipsBkg.png);}\n"
"QPushButton\n"
"{\n"
"    border-image: url(:/image/btnG.png);\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    border-image: url(:/image/btnR.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(DialogAutoCloseMessageBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 20, 0);
        labelTitle = new QLabel(DialogAutoCloseMessageBox);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy1);
        labelTitle->setMinimumSize(QSize(0, 52));
        labelTitle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        labelTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(labelTitle);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(DialogAutoCloseMessageBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(348, 96));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout_2->addWidget(label);

        labelCntDown = new QLabel(DialogAutoCloseMessageBox);
        labelCntDown->setObjectName(QStringLiteral("labelCntDown"));
        sizePolicy1.setHeightForWidth(labelCntDown->sizePolicy().hasHeightForWidth());
        labelCntDown->setSizePolicy(sizePolicy1);
        labelCntDown->setMinimumSize(QSize(60, 60));
        labelCntDown->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelCntDown);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonOK = new QPushButton(DialogAutoCloseMessageBox);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonOK->sizePolicy().hasHeightForWidth());
        pushButtonOK->setSizePolicy(sizePolicy2);
        pushButtonOK->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogAutoCloseMessageBox);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        sizePolicy2.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy2);
        pushButtonCancel->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(DialogAutoCloseMessageBox);

        QMetaObject::connectSlotsByName(DialogAutoCloseMessageBox);
    } // setupUi

    void retranslateUi(QDialog *DialogAutoCloseMessageBox)
    {
        DialogAutoCloseMessageBox->setWindowTitle(QApplication::translate("DialogAutoCloseMessageBox", "Dialog", 0));
        labelTitle->setText(QApplication::translate("DialogAutoCloseMessageBox", "TextLabel", 0));
        label->setText(QApplication::translate("DialogAutoCloseMessageBox", "TextLabel", 0));
        labelCntDown->setText(QApplication::translate("DialogAutoCloseMessageBox", "TextLabel", 0));
        pushButtonOK->setText(QApplication::translate("DialogAutoCloseMessageBox", "\347\241\256\345\256\232", 0));
        pushButtonCancel->setText(QApplication::translate("DialogAutoCloseMessageBox", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAutoCloseMessageBox: public Ui_DialogAutoCloseMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAUTOCLOSEMESSAGEBOX_H
