#include "formwelcome.h"
#include "ui_formwelcome.h"
#include "../dialogautoclosemessagebox.h"

#include "../dialog.h"
extern Dialog *g_dialog;
extern void Sleep(int);

FormWelcome::FormWelcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormWelcome)
{
    ui->setupUi(this);
    timer = new QTimer();
    timer->setInterval(6000);
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
        g_dialog->fileManager->getLastConfigIndex();
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
        DialogAutoCloseMessageBox box(NULL,"是否使用该模式",str,"否","是",10,true);
        if(box.exec() == QDialog::Rejected)
        {
            //******send cmds
            g_dialog->fileManager->readConfig(g_dialog->fileManager->m_lastMode,g_dialog->fileManager->m_lastIndex);
            emit switchToPage(2);
        }
        else
            emit switchToPage(4);

        //unstandard ash clean;
        char tmp[3] = {0};
        QByteArray cmd232 = QByteArray(tmp,3);
        char* p232 = cmd232.data();
        memset(p232,0,3);
        DialogAutoCloseMessageBox dlg(NULL,"清灰","...","","",0,false);
        dlg.setText("正在清灰");
        dlg.show();
        cmd232.data()[0] = 0x09;
        g_dialog->serialManager->writeCmd(0,cmd232);
        Sleep(15000);
        memset(p232,0,3);
        cmd232.data()[0] = 0x0a;
        g_dialog->serialManager->writeCmd(0,cmd232);
        Sleep(15000);
        dlg.close();
    }
    else
        emit switchToPage(1);
}
