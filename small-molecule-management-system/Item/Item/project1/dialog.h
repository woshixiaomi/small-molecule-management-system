#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QColorDialog>
#include <QColor>
#include <QPushButton>
#include <QTextEdit>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    QColor selectColor;
    QTextEdit *edit;
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_btn_color_clicked();



private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
