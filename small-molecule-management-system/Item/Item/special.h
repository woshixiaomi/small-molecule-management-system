#ifndef SPECIAL_H
#define SPECIAL_H

#include <QMainWindow>
#include "normal.h"
#include "serve.h"
#include <QTimer>
#include <QString>
#include <QLabel>
#include <QDateTime>
#include <QStatusBar>

#include <QFrame>
namespace Ui {
class Special;
}

class Special : public QMainWindow
{
    Q_OBJECT

public:
    QTimer *tm;
    QLabel *lab1;



    explicit Special(QWidget *parent = 0);
    ~Special();

private slots:
    void on_action_normal_triggered();

    void on_action_server_triggered();

    void on_action_return_triggered();

signals:
    void SpecialReturnsignal();
    void NormalToSpecial();

private:
    Ui::Special *ui;
};

#endif // SPECIAL_H
