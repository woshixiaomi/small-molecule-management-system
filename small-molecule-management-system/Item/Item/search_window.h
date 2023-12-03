#ifndef SEARCH_WINDOW_H
#define SEARCH_WINDOW_H

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

namespace Ui {
class Search_Window;
}

class Search_Window : public QMainWindow
{
    Q_OBJECT

public:
    QComboBox *date_cbx_1;
    QSqlDatabase db;
    explicit Search_Window(QWidget *parent = 0);
    ~Search_Window();


private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_action_return_level_triggered();

    void on_action_del_triggered();

signals:
    void returnmain();
private:
   // Ui::Searc_Date *ui;
    void initTableWidget(QString current_select_reaction);//10:54
    void initShowData(QString current_select_reaction);//10:54
    void initShowchart(QString current_select_reaction);
};

#endif // SEARCH_WINDOW_H
