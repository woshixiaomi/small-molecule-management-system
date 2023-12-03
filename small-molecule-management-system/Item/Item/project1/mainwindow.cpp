#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setupform.h"
//主页面:联系我们  设置

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // colorbtn = new QPushButton("颜色对话框",this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_link_triggered()  //联系我们对话框
{
    QMessageBox::information(this,"小分子检测系统","联系方式:12345678 <br/> 公司地址:陕西省西安市雁塔区",QMessageBox::Ok,QMessageBox::Close);  //消息对话框

}



void MainWindow::on_action_setup_triggered() //设置对话框:颜色 字体 背景
{
    setupForm *setup = new setupForm;
    setup->show();
}
