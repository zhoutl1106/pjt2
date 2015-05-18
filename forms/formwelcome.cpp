#include "formwelcome.h"
#include "ui_formwelcome.h"
#include "../dialogautoclosemessagebox.h"

#include "../dialog.h"
extern Dialog *g_dialog;

FormWelcome::FormWelcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormWelcome)
{
    ui->setupUi(this);
    timer = new QTimer();
    timer->setInterval(30);
    timer->setSingleShot(true);
    connect(timer,SIGNAL(timeout()),this,SLOT(checkLicense()));
}

FormWelcome::~FormWelcome()
{
    delete ui;
}

void FormWelcome::showEvent(QShowEvent *e)
{
    timer->start();
}

void FormWelcome::checkLicense()
{
    bool ret = g_dialog->fileManager->checkDate();;    //*****check from file
    if(ret)
    {
        g_dialog->fileManager->getConfig();
        QString str;
        qDebug()<<"in welcome"<<g_dialog->fileManager->m_lastMode;
        switch(g_dialog->fileManager->m_lastMode)
        {
        case 1:str = "选异色";break;
        case 3:str = "黄白同选";break;
        case 5:str = "选黑米";break;
        case 2:str = "选腹白";break;
        case 4:str = "选糯米";break;
        default:
            emit switchToPage(4);
            return;
        }
        DialogAutoCloseMessageBox box(NULL,"是否使用该模式",str,"是","否",5,true);
        if(box.exec() == QDialog::Accepted)
        {
            //******send cmds
            g_dialog->fileManager->readConfig(g_dialog->fileManager->m_lastMode,g_dialog->fileManager->m_lastIndex);
            emit switchToPage(2);
        }
        else
            emit switchToPage(4);
    }
    else
        emit switchToPage(1);
}
