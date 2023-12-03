#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFrame>  //背景图
#include "mainwindow.h"
#include "login.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include "forgetpwd.h"
#include "logoutuser.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT



public:
    int flag =0;
    QSqlDatabase db;
    forgetPwd * forget;
    logoutUser *lo;
    MainWindow *btn; //mainwindow->退出
    login *btn1;   //注册返回
    login *l1;

    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void forgetUser();
    void logoutUser();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
