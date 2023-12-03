#ifndef NORMAL_H
#define NORMAL_H

#include <QMainWindow>
#include "special.h"
#include "serve.h"
#include <QTimer>
#include <QDateTime>
#include <QLabel>
#include <QString>
#include "lcms_mainwindow.h"
namespace Ui {
class Normal;
}

class Normal : public QMainWindow
{
    Q_OBJECT

public:
    QTimer *tm;
    QLabel *lab1;
    Lcms_Mainwindow *lcwindow;


    //Special *n;

    explicit Normal(QWidget *parent = 0);
    ~Normal();

private slots:
    void on_action_special_triggered();

    void on_action_server_triggered();

    void on_action_return_triggered();

    void on_pushButton_clicked();

signals:
    void NormalReturnsignal();

private:
    Ui::Normal *ui;
};

#endif // NORMAL_H
