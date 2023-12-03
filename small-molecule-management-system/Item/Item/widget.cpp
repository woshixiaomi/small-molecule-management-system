#include "widget.h"
#include "ui_widget.h"
#include "mainwindow.h"
#include "forgetpwd.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->forgetPushButton,&QPushButton::clicked,this,&Widget::forgetUser);
    connect(ui->logoutPushButton,&QPushButton::clicked,this,&Widget::logoutUser);
    ui->userLineEdit->setPlaceholderText("请输入账号");
    ui->pwdLineEdit->setPlaceholderText("请输入密码");
    //登录密码*显示
    ui->pwdLineEdit->setEchoMode(QLineEdit::Password);

    QStringList sl = QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localHost");
    db.setDatabaseName("../projectWidget/userTest.db");
    db.open();
}

Widget::~Widget()
{
    delete ui;
}

//登录
void Widget::on_pushButton_clicked()
{
    btn = new MainWindow;
    connect(btn,&MainWindow::returnsignal,this,[=](){
        show();
        btn->hide();
    });
    this->hide();
    btn->show();
//    this->hide();
//    MainWindow *w = new MainWindow;
//    w->show();
    QSqlQuery query;
    QString selectSql = "select * from tb_user";
    query.exec(selectSql);
    while(query.next())
    {
        if(query.value(0)==ui->userLineEdit->text())
        {
            flag =1 ;
            if(query.value(1)==ui->pwdLineEdit->text())
            {
                btn = new MainWindow;
                connect(btn,&MainWindow::returnsignal,this,[=](){
                    show();
                    btn->hide();
                });
                this->hide();
                btn->show();
            }
            else
            {
                QMessageBox::warning(this,"消息对话框","账号密码有误，请重新登录",
                                     QMessageBox::Close);

            }
        }
    }
//    if(flag == 0)
//    {
//        QMessageBox::warning(this,"消息对话框","账号密码有误，请重新登录",
//                             QMessageBox::Close);
//     }
}

//注册
void Widget::on_pushButton_2_clicked()
{
    btn1 = new login;
    connect(btn1,&login::returnsignal,this,[=](){
        show();
        btn1->hide();
    });
    this->hide();
    btn1->show();

}

void Widget::forgetUser()
{
    forget =new forgetPwd;
    forget->show();
}

void Widget::logoutUser()
{
//    lo = new logoutUser;
//    lo->show();
}
