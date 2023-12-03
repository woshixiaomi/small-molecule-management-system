#ifndef SEARCH_WINDWO_H
#define SEARCH_WINDWO_H

#include <QMainWindow>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QStringList>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QComboBox>
#include <QString>
#include <QtCharts>
#include <QChartView>
#include <QSplineSeries>
#include <QLineSeries>
#include <QSerialPort>
#include <QTimerEvent>
#include <QBarSeries>
//#include "mainwindow.h"

namespace Ui {
class Search_Windwo;
}

class Search_Windwo : public QMainWindow
{
    Q_OBJECT
    QComboBox *date_cbx_1;
    QSqlDatabase db;

public:
    explicit Search_Windwo(QWidget *parent = 0);
    ~Search_Windwo();

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_action_return_level_triggered();

    void on_action_del_triggered();

signals:
    void returnmain();
private:
    Ui::Searc_Date *ui;
    void initTableWidget(QString current_select_reaction);//10:54
    void initShowData(QString current_select_reaction);//10:54
    void initShowchart(QString current_select_reaction);


};

#endif // SEARCH_WINDWO_H
