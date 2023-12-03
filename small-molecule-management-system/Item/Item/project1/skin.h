#ifndef SKIN_H
#define SKIN_H

#include <QWidget>
#include <QString>
#include <QFileDialog> //文件对话框
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class skin;
}

class skin : public QWidget
{
    Q_OBJECT

public:
    explicit skin(QWidget *parent = 0);
    ~skin();

public slots:
    QString on_comboBox_choose_currentTextChanged(const QString &arg1);

private:
    Ui::skin *ui;
};

#endif // SKIN_H
