#ifndef SETUP_H
#define SETUP_H

#include <QWidget>

namespace Ui {
class Setup;
}

class Setup : public QWidget
{
    Q_OBJECT

public:
    explicit Setup(QWidget *parent = 0);
    ~Setup();

private slots:


private:
    Ui::Setup *ui;
};
//git push
#endif // SETUP_H
