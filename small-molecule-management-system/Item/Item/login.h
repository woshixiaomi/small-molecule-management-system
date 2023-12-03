#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QFrame>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    int flag =0;
    QSqlDatabase db;
    explicit login(QWidget *parent = 0);
    ~login();

signals:
    void returnsignal();  //返回信号

private slots:
    void on_pushButton_2_clicked();
    void regiser();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
