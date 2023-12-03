#include "normal.h"
#include "ui_normal.h"

Normal::Normal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Normal)
{
    ui->setupUi(this);

    //动态获取时间
    tm = new QTimer(this);
    static QString n = QString("%1").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    lab1 = new QLabel(this);
    lab1->move(60,350);
    lab1->setText(n);
    connect(tm,&QTimer::timeout,[=](){
        n = QString("%1").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
        lab1->setText(n);
    });
    tm->start(1000);   //每隔1s发送获取时间

    QStatusBar *sBar = statusBar();
    sBar->addPermanentWidget(lab1);

}

Normal::~Normal()
{
    delete ui;
}

//normal to special
void Normal::on_action_special_triggered()
{
//    n = new Special;
//    connect(n,&Special::NormalToSpecial,this,[=](){
//        show();
//        n->hide();
//    });
//    this->hide();
//    n->show();
    this->hide();
    Special *s = new Special;
    s->show();
}

void Normal::on_action_server_triggered()
{
    this->hide();
    serve *se = new serve;
    se->show();
}

//返回主界面
void Normal::on_action_return_triggered()
{

     emit NormalReturnsignal();  //发射信号
//    this->hide();
//    MainWindow *m = new MainWindow;
//    m->show();
}

void Normal::on_pushButton_clicked()
{
    this->hide();
  lcwindow=new Lcms_Mainwindow;
  lcwindow->show();
}
