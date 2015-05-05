/********************************************************************************
** Form generated from reading UI file 'formmain.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMAIN_H
#define UI_FORMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormMain
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_8;
    QToolButton *toolButton_3;
    QToolButton *toolButtonValve;
    QToolButton *toolButtonVibrator;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButtonExit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *FormMain)
    {
        if (FormMain->objectName().isEmpty())
            FormMain->setObjectName(QStringLiteral("FormMain"));
        FormMain->resize(1024, 520);
        FormMain->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"    border-image: url(:/image/btnG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/btnR.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(FormMain);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(60, 60, 60, 60);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(120);
        gridLayout->setVerticalSpacing(30);
        toolButton_5 = new QToolButton(FormMain);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setMinimumSize(QSize(300, 75));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        toolButton_5->setFont(font);
        toolButton_5->setStyleSheet(QStringLiteral(""));
        toolButton_5->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolButton_5->setAutoRaise(true);

        gridLayout->addWidget(toolButton_5, 0, 0, 1, 1);

        toolButton_6 = new QToolButton(FormMain);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        sizePolicy.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy);
        toolButton_6->setMinimumSize(QSize(300, 75));
        toolButton_6->setFont(font);
        toolButton_6->setStyleSheet(QStringLiteral(""));
        toolButton_6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_6->setAutoRaise(true);

        gridLayout->addWidget(toolButton_6, 0, 1, 1, 1);

        toolButton_8 = new QToolButton(FormMain);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        sizePolicy.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy);
        toolButton_8->setMinimumSize(QSize(300, 75));
        toolButton_8->setFont(font);
        toolButton_8->setStyleSheet(QStringLiteral(""));
        toolButton_8->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolButton_8->setAutoRaise(true);

        gridLayout->addWidget(toolButton_8, 1, 0, 1, 1);

        toolButton_3 = new QToolButton(FormMain);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setMinimumSize(QSize(300, 75));
        toolButton_3->setFont(font);
        toolButton_3->setStyleSheet(QStringLiteral(""));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_3->setAutoRaise(true);

        gridLayout->addWidget(toolButton_3, 1, 1, 1, 1);

        toolButtonValve = new QToolButton(FormMain);
        toolButtonValve->setObjectName(QStringLiteral("toolButtonValve"));
        sizePolicy.setHeightForWidth(toolButtonValve->sizePolicy().hasHeightForWidth());
        toolButtonValve->setSizePolicy(sizePolicy);
        toolButtonValve->setMinimumSize(QSize(300, 75));
        toolButtonValve->setFont(font);
        toolButtonValve->setStyleSheet(QStringLiteral(""));
        toolButtonValve->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolButtonValve->setAutoRaise(true);

        gridLayout->addWidget(toolButtonValve, 2, 0, 1, 1);

        toolButtonVibrator = new QToolButton(FormMain);
        toolButtonVibrator->setObjectName(QStringLiteral("toolButtonVibrator"));
        sizePolicy.setHeightForWidth(toolButtonVibrator->sizePolicy().hasHeightForWidth());
        toolButtonVibrator->setSizePolicy(sizePolicy);
        toolButtonVibrator->setMinimumSize(QSize(300, 75));
        toolButtonVibrator->setFont(font);
        toolButtonVibrator->setStyleSheet(QStringLiteral(""));
        toolButtonVibrator->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolButtonVibrator->setAutoRaise(true);

        gridLayout->addWidget(toolButtonVibrator, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButtonExit = new QToolButton(FormMain);
        toolButtonExit->setObjectName(QStringLiteral("toolButtonExit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButtonExit->sizePolicy().hasHeightForWidth());
        toolButtonExit->setSizePolicy(sizePolicy1);
        toolButtonExit->setMinimumSize(QSize(300, 75));
        toolButtonExit->setFont(font);
        toolButtonExit->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"    border-image: url(:/image/shutdownG.png);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"    border-image: url(:/image/shutdownR.png);\n"
"}"));
        toolButtonExit->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolButtonExit->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonExit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FormMain);

        QMetaObject::connectSlotsByName(FormMain);
    } // setupUi

    void retranslateUi(QWidget *FormMain)
    {
        FormMain->setWindowTitle(QApplication::translate("FormMain", "Form", 0));
        toolButton_5->setText(QApplication::translate("FormMain", "\346\265\201\351\207\217\346\216\247\345\210\266", 0));
        toolButton_6->setText(QApplication::translate("FormMain", "\350\211\262\351\200\211\346\250\241\345\274\217", 0));
        toolButton_8->setText(QApplication::translate("FormMain", "\347\262\276\345\272\246\350\260\203\346\225\264", 0));
        toolButton_3->setText(QApplication::translate("FormMain", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        toolButtonValve->setText(QApplication::translate("FormMain", "\345\226\267\351\230\200 \345\205\263", 0));
        toolButtonVibrator->setText(QApplication::translate("FormMain", "\344\276\233\346\226\231 \345\205\263", 0));
        toolButtonExit->setText(QApplication::translate("FormMain", "   \345\205\263\346\234\272", 0));
    } // retranslateUi

};

namespace Ui {
    class FormMain: public Ui_FormMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMAIN_H
