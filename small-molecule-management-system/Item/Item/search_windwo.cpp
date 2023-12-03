#include "search_windwo.h"
#include "ui_search_windwo.h"

Search_Windwo::Search_Windwo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Search_Windwo)
{
    ui->setupUi(this);
}

Search_Windwo::~Search_Windwo()
{
    delete ui;
}

void Search_Windwo::on_comboBox_currentIndexChanged(const QString &arg1)
{

}

void Search_Windwo::on_action_return_level_triggered()
{

}

void Search_Windwo::on_action_del_triggered()
{

}
