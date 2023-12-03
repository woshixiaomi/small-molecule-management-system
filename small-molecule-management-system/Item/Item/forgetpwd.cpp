#include "forgetpwd.h"
#include "ui_forgetpwd.h"

forgetPwd::forgetPwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forgetPwd)
{
    ui->setupUi(this);
    connect(ui->forgetPushButton,&QPushButton::clicked,this,&forgetPwd::modify);
}

forgetPwd::~forgetPwd()
{
    delete ui;
}

void forgetPwd::modify()
{
    QSqlQuery query;
    query.prepare("update tb_user set pwd=? where user =?");
    query.addBindValue(ui->pwdLineEdit->text());
    query.addBindValue(ui->userLineEdit->text());
    query.exec();
    QMessageBox::information(this,"消息对话框","密码修改成功，请登录",
                             QMessageBox::Ok,QMessageBox::Cancel);
    this->hide();
    emit returnsignal();
}
