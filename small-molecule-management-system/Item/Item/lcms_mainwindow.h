#ifndef LCMS_MAINWINDOW_H
#define LCMS_MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QLabel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QPushButton>
#include "search_window.h"
#include <QMessageBox>


namespace Ui {
class Lcms_Mainwindow;
}

class Lcms_Mainwindow : public QMainWindow
{
    Q_OBJECT
    QLabel *labal_1;


public:
    QSqlDatabase db;
   Search_Window *s;
    explicit Lcms_Mainwindow(QWidget *parent = 0);
    ~Lcms_Mainwindow();
private slots:
    void on_date_pushbutton_2_clicked();

    void on_date_pushbutton_1_clicked();

    void on_comboBox_3_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Lcms_Mainwindow *ui;
};

#endif // LCMS_MAINWINDOW_H
