#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    connect(ui->registerPushButton,&QPushButton::clicked,this,&login::regiser);
    this->setAutoFillBackground(true);
    QPalette palette1;
    QPixmap pixmap1(":/picture/71.jpg");
    palette1.setBrush(QPalette::Window,QBrush(pixmap1));
    this->setPalette(palette1);
    this->setFixedSize(400,300);

    QStringList sl = QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localHost");
    db.setDatabaseName("../Item/userpwduser.db");
    db.open();
}

login::~login()
{
    delete ui;
}

//返回上一级
void login::on_pushButton_2_clicked()
{
    emit returnsignal();  //发送返回信号
}

void login::regiser()
{
    QSqlQuery query;
    QString selectSql = "select * from tb_user";
    query.exec(selectSql);
    while(query.next())
    {
        if(query.value(0) == ui->userLineEdit->text())
        {
           QMessageBox::warning(this,"消息对话框","该用户名已存在，请前往登录",
                                QMessageBox::Ok,QMessageBox::Cancel);
           this->hide();
           emit returnsignal();
        }
        else
        {
            query.prepare("INSERT into tb_user VALUES (?,?)");
            query.bindValue(0,ui->userLineEdit->text());
            query.bindValue(1,ui->pwdLineEdit->text());
            query.exec();
            QMessageBox::information(this,"消息对话框","注册成功，请登录",
                                     QMessageBox::Ok,QMessageBox::Cancel);

            this->hide();
            emit returnsignal();
        }
    }
}
