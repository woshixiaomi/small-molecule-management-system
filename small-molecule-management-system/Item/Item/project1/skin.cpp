#include "skin.h"
#include "ui_skin.h"

skin::skin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::skin)
{
    ui->setupUi(this);
}

skin::~skin()
{
    delete ui;
}

QString skin::on_comboBox_choose_currentTextChanged(const QString &arg1)
{

    /*在ui中添加换肤的功能，用下拉列表框进行实现，给下拉列表框添加资源(起别名) 起的别名是 :/Dark*/

     QString text = ui->comboBox_choose->currentText();//获取到下拉文本框的文本信息（Dark）
     QString filename = ":/"+text;  //这里是做了拼接字符串【文件名：:/  下拉文本框名：text = ui->comboBox_2->currentText()】  拼接后的是:":/"+text
     qDebug()<<filename;  //这里是验证下看修改后的换肤的下拉列表框的别名是否正确
     QFile f(filename);  //实例化QFile对象 来操作文件
     f.open(QIODevice::ReadOnly);  //以只读方式打开文件
      QString style = f.readAll();  //读取文件中所有内容
     setStyleSheet(style);  //将文件内容QSS应用在该窗体
     f.close();  //关闭文件
     return style;

}
