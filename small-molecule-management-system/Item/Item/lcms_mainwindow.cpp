#include "lcms_mainwindow.h"
#include "ui_lcms_mainwindow.h"

Lcms_Mainwindow::Lcms_Mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Lcms_Mainwindow)
{
    ui->setupUi(this);
    ui->setupUi(this);
    labal_1=new QLabel("labal",this);
    labal_1->move(0,0);
    labal_1->setPixmap(QPixmap(":/p1"));
    labal_1->resize(60,60);
    labal_1->setScaledContents(true);

    /*db=QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("../project/data.db");
    db.open();*/

    ui->setupUi(this);
    labal_1=new QLabel("labal",this);
    labal_1->move(0,0);
    labal_1->setPixmap(QPixmap(":/p1"));
    labal_1->resize(60,60);
    labal_1->setScaledContents(true);

    /*db=QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("../project/data.db");
    db.open();*/



}

Lcms_Mainwindow::~Lcms_Mainwindow()
{
    delete ui;
}

void Lcms_Mainwindow::on_date_pushbutton_2_clicked()
{

}

/*void Lcms_Mainwindow::on_date_pushbutton_1_clicked()
{
    s = new Searc_Date;
    connect(s,&Searc_Date::returnmain,this,[=](){
      this->show();
       s->hide();
    });
    this->hide();
    s->show();
//    Searc_Date *f= new Searc_Date;
//    f->show();
}*/

void Lcms_Mainwindow::on_comboBox_3_activated(const QString &arg1)
{

}

void Lcms_Mainwindow::on_pushButton_clicked()
{
    bool is_accord=((ui->lineEdit->text().isEmpty())||(ui->lineEdit_2->text().isEmpty())||(ui->lineEdit_3->text().isEmpty())||
                    (ui->lineEdit_4->text().isEmpty())||(ui->lineEdit_5->text().isEmpty())||(ui->lineEdit_6->text().isEmpty())||
                    (ui->lineEdit_7->text().isEmpty()));
    if(is_accord)
    {
       QMessageBox::information(this,"tip","数据输入不完全，请继续输入",QMessageBox::Ok|QMessageBox::Cancel);

    }

    else
    {
        QSqlQuery query;

       QString current_reaction=ui->comboBox_3->currentText();

       if(current_reaction=="reaction1")
       {

          query.prepare("insert into reaction1 values(?,?,?,?,?,?,?,?,?)");
          query.bindValue(0,ui->comboBox->currentText());
          query.bindValue(1,ui->comboBox_2->currentText());
          query.bindValue(2,ui->lineEdit->text().toInt());
          query.bindValue(3,ui->lineEdit_2->text().toInt());
          query.bindValue(4,ui->lineEdit_3->text().toInt());
          query.bindValue(5,ui->lineEdit_4->text().toInt());
          query.bindValue(6,ui->lineEdit_5->text().toInt());
          query.bindValue(7,ui->lineEdit_6->text().toInt());
          query.bindValue(8,ui->lineEdit_7->text().toInt());
          query.exec();
       }
        else if(current_reaction=="reaction2")
          {
             query.prepare("insert into reaction1 values(?,?,?,?,?,?,?,?,?)");
             query.bindValue(0,ui->comboBox->currentText());
             query.bindValue(1,ui->comboBox_2->currentText());
             query.bindValue(2,ui->lineEdit->text().toInt());
             query.bindValue(3,ui->lineEdit_2->text().toInt());
             query.bindValue(4,ui->lineEdit_3->text().toInt());
             query.bindValue(5,ui->lineEdit_4->text().toInt());
             query.bindValue(6,ui->lineEdit_5->text().toInt());
             query.bindValue(7,ui->lineEdit_6->text().toInt());
             query.bindValue(8,ui->lineEdit_7->text().toInt());

             query.exec();
           }
         else
         {
            //qDebug()<<"123";
           query.prepare("insert into reaction3 values(?,?,?,?,?,?,?,?,?)");
           query.bindValue(0,ui->comboBox->currentText());
           query.bindValue(1,ui->comboBox_2->currentText());
           query.bindValue(2,ui->lineEdit->text().toInt());
           query.bindValue(3,ui->lineEdit_2->text().toInt());
           query.bindValue(4,ui->lineEdit_3->text().toInt());
           query.bindValue(5,ui->lineEdit_4->text().toInt());
           query.bindValue(6,ui->lineEdit_5->text().toInt());
           query.bindValue(7,ui->lineEdit_6->text().toInt());
           query.bindValue(8,ui->lineEdit_7->text().toInt());
           query.exec();
       }
      }


}

void Lcms_Mainwindow::on_date_pushbutton_1_clicked()
{

}
