#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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

    ui->dockWidget->setVisible(false);  //点击设置才显示浮窗
}

MainWindow::~MainWindow()
{
    delete ui;
}

//to特殊
void MainWindow::on_action_special_triggered()
{
    spe = new Special;
    connect(spe,&Special::SpecialReturnsignal,this,[=](){
        show();
        spe->hide();
    });
    this->hide();
    spe->show();
//    this->hide();
//    Special *s = new Special;
//    s->show();
}

//to常规
void MainWindow::on_action_normal_triggered()
{
    nrl = new Normal;
    connect(nrl,&Normal::NormalReturnsignal,this,[=](){
        show();
        nrl->hide();
    });
    this->hide();
    nrl->show();
//    this->hide();
//    Normal *n = new Normal;
//    n->show();
}

//to特殊
void MainWindow::on_action_serve_triggered()
{
    ser = new serve;
    connect(ser,&serve::ServerReturnsignal,this,[=](){
        show();
        ser->hide();
    });
    this->hide();
    ser->show();
//    this->hide();
//    serve *se = new serve;
//    se->show();
}

//退出
void MainWindow::on_action_out_triggered()
{
     emit returnsignal();

}

//设置
void MainWindow::on_action_setup_triggered()
{
    ui->dockWidget->show();
}

//悬浮窗
QString MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString text = ui->comboBox->currentText();
    QString fileName = ":/" + text;
    QFile f(fileName);
    f.open(QIODevice::ReadOnly);
    QString style = f.readAll();
    setStyleSheet(style);
    f.close();
    return style;
}

//联系我们
void MainWindow::on_action_link_triggered()
{
    QMessageBox::information(this,"小分子检测系统","联系方式:12345678 <br/> 公司地址:陕西省西安市雁塔区",QMessageBox::Ok,QMessageBox::Close);
}
