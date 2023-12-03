#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_color_clicked()
{
    QColorDialog::getColor();  //调用getColor函数，找到颜色调色板

    /*改变字体颜色，需要先手动全选，再勾选颜色，才能显示勾选过的字体颜色*/
    selectColor = QColorDialog ::getColor(Qt::red,this,"颜色对话框");
    //edit->setTextColor(selectColor);

   // edit->selectAll();  //可以实现系统帮助把字全选，就不用自己选了
}

