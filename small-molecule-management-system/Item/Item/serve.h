#ifndef SERVE_H
#define SERVE_H

#include <QMainWindow>
#include "special.h"
#include "normal.h"
#include <QTimer>
#include <QString>
#include <QLabel>
#include <QDateTime>
#include <QStatusBar>

namespace Ui {
class serve;
}

class serve : public QMainWindow
{
    Q_OBJECT

public:
    QTimer *tm;
    QLabel *lab1;

    explicit serve(QWidget *parent = 0);
    ~serve();

private slots:
    void on_action_special_triggered();

    void on_action_normal_triggered();

    void on_action_return_triggered();

signals:
    void ServerReturnsignal();

private:
    Ui::serve *ui;
};

#endif // SERVE_H
