#ifndef LOGOUTUSER_H
#define LOGOUTUSER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class logoutUser;
}

class logoutUser : public QWidget
{
    Q_OBJECT

public:
    QSqlDatabase db;
    int flag=0;
    explicit logoutUser(QWidget *parent = 0);
    ~logoutUser();
public slots:
    void logout();
signals:
    void returnsignal();
private:
    Ui::logoutUser *ui;
};

#endif // LOGOUTUSER_H
