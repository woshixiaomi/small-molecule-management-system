#include "logoutuser.h"
#include "ui_logoutuser.h"

logoutUser::logoutUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logoutUser)
{
    ui->setupUi(this);
    connect(ui->logoutPushButton,&QPushButton::clicked,this,&logoutUser::logout);
}

logoutUser::~logoutUser()
{
    delete ui;
}

void logoutUser::logout()
{
    QSqlQuery query;
    QString selectSql = "select * from tb_user";
    query.exec(selectSql);
    while(query.next())
    {
        if(query.value(0)==ui->userLineEdit->text())
        {
            flag = 1;
            if(query.value(1)==ui->pwdLineEdit->text())
            {

                QString userName = ui->userLineEdit->text();
                QString delSql =QString("delete from tb_user where user = '%1'").arg(userName);
                query.exec(delSql);

                QMessageBox::information(this,"消息对话框","注销成功，返回登录界面",
                                         QMessageBox::Ok,QMessageBox::Cancel);

                this->hide();
                emit returnsignal();
            }
            else
            {
                QMessageBox::warning(this,"消息对话框","账号密码有误，注销失败,返回登录界面",
                                     QMessageBox::Close);

                this->hide();
                emit returnsignal();
            }
        }

    }
    if(flag==0)
    {
        QMessageBox::warning(this,"消息对话框","账号密码有误，注销失败,返回登录界面",
                             QMessageBox::Close);

        this->hide();
        emit returnsignal();
    }
}
