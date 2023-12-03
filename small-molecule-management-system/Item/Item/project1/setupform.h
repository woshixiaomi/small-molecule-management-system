#ifndef SETUPFORM_H
#define SETUPFORM_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

#include <QColorDialog>  //调整字体颜色
#include <QColor>
#include <QIODevice>
#include <QFile>

namespace Ui {
class setupForm;
}

class setupForm : public QWidget
{
    Q_OBJECT

public:
    QPushButton *colorBtn;
    QColor selectColor;

    explicit setupForm(QWidget *parent = 0);
    ~setupForm();

private slots:


    //void on_btn_color_clicked();

   // void on_btn_background_clicked();

    void on_btn_background_clicked();

private:
    Ui::setupForm *ui;
};

#endif // SETUPFORM_H
