#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "normal.h"
#include "special.h"
#include "serve.h"
#include <QTimer>
#include <QString>
#include <QLabel>
#include <QDateTime>
#include <QStatusBar>
#include <QMessageBox>
#include <QFrame>
#include <QFile>
#include <QIODevice>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    QTimer *tm;
    QLabel *lab1;

    Normal *nrl;
    serve *ser;
    Special *spe;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void returnsignal(); //退出信号


private slots:
    void on_action_special_triggered();

    void on_action_normal_triggered();

    void on_action_serve_triggered();

    void on_action_out_triggered();

    void on_action_setup_triggered();

    void on_action_link_triggered();

public slots:
    QString on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
