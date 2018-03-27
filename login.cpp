#include "login.h"
#include <QtWidgets>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QWidget>
#include <QGridLayout>
#include <QDebug>
#include <QMessageBox>

LOGINWINDOW::LOGINWINDOW(QWidget *parent)
    :QWidget(parent)
{
    nameEdit = new QLineEdit();
    passwdEdit = new QLineEdit();

    nameLabel = new QLabel(tr("user Name:"));
//    nameLabel->setTextFormat(Qt::PlainText);
    nameLabel->setTextFormat(Qt::RichText);
    nameLabel->setAlignment(Qt::AlignCenter);
//    nameLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    nameLabel->setWordWrap(true);
    passwdLabel = new QLabel(tr("password:"));
    passwdLabel->setTextFormat(Qt::PlainText);

    loginBt = new QPushButton();
    loginBt->setText(tr("登入"));
    cancelBt = new QPushButton();
    cancelBt->setText(tr("取消"));

    connect(loginBt,SIGNAL(clicked()),this,SLOT(loginBtClicked()));
    connect(cancelBt,SIGNAL(clicked()),this,SLOT(cancelBtClicked()));

    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(nameLabel,0,0,Qt::AlignRight);
    layout->addWidget(passwdLabel,1,0,Qt::AlignRight);
    layout->addWidget(nameEdit,0,1,Qt::AlignCenter);
    layout->addWidget(passwdEdit,1,1,Qt::AlignCenter);
    layout->addWidget(loginBt,2,0,Qt::AlignCenter);
    layout->addWidget(cancelBt,2,1,Qt::AlignCenter);

    this->setLayout(layout);
    this->size()=this->sizeHint();
}

LOGINWINDOW::~LOGINWINDOW()
{

}

void LOGINWINDOW::loginBtClicked()
{
    if(this->nameEdit->text()=="zhengsong"
            && this->passwdEdit->text()=="1594")
        qDebug()<<"login ok";
    else
    {
        qDebug()<<"login failed!";
        int ret = QMessageBox::warning(this,tr("name or password error!!"),
                             tr("Do you want retry?"),
                             QMessageBox::Yes|QMessageBox::Cancel);

        qDebug()<<ret;
        if(ret == 4194304)
            ::exit(0);
    }

}

void LOGINWINDOW::cancelBtClicked()
{
    ::_Exit(0);
}
