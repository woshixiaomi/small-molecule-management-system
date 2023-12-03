#ifndef FORGETPWD_H
#define FORGETPWD_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class forgetPwd;
}

class forgetPwd : public QWidget
{
    Q_OBJECT

public:
    explicit forgetPwd(QWidget *parent = 0);
    ~forgetPwd();
public slots:
     void modify();
signals:
    void returnsignal();
private:
    Ui::forgetPwd *ui;
};

#endif // FORGETPWD_H
