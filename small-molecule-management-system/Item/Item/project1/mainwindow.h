#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QColorDialog>
#include <QPushButton>
#include <QColor>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QPushButton * colorbtn;
    QColor selectColor;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_action_link_triggered();


    void on_action_setup_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
