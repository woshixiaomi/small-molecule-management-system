#include "special.h"
#include "ui_special.h"
Special::Special(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Special)
{
    ui->setupUi(this);

    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap(":/picture/85.jpg");
    palette.setBrush(QPalette::Window,QBrush(pixmap));
    this->setPalette(palette);
    //this->setFixedSize(400,300);

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

Special::~Special()
{
    delete ui;
}

void Special::on_action_normal_triggered()
{
    emit NormalToSpecial();
//    this->hide();
//    Normal *n = new Normal;
//    n->show();
}

void Special::on_action_server_triggered()
{
    this->hide();
    serve *se = new serve;
    se->show();
}

//返回主界面
void Special::on_action_return_triggered()
{
    emit SpecialReturnsignal();
//    this->hide();
//    MainWindow *m = new MainWindow;
//    m->show();
}
