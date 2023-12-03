#include "serve.h"
#include "ui_serve.h"

serve::serve(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::serve)
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

serve::~serve()
{
    delete ui;
}

void serve::on_action_special_triggered()
{
    this->hide();
    Special *s = new Special;
    s->show();
}

void serve::on_action_normal_triggered()
{
    this->hide();
    Normal *n = new Normal;
    n->show();
}

//返回主界面
void serve::on_action_return_triggered()
{
    emit ServerReturnsignal();
//    this->hide();
//    MainWindow *m = new MainWindow;
//    m->show();
}
