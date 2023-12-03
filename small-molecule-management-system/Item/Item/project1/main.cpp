#include "widget.h"
#include <QApplication>
#include "mainwindow.h"
#include "dialog.h"
#include "setupform.h"
#include "skin.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //a.setStyleSheet();
#if 0 //给注册页面设置背景为灰色
    Widget *w1 = new Widget;
    QPalette pal(w1->palette());

    pal.setColor(QPalette::Background,Qt::gray);
    w1->setWindowOpacity(1);
    w1->setAutoFillBackground(true);
    w1->setPalette(pal);
    w1->show();
#endif


#if 0  //给注册页面背景添加图片
    Widget w1;
    w1.setAutoFillBackground(true);
    QPalette pal;
    QPixmap pix(":/6.jpg");
    pal.setBrush(QPalette::Window,QBrush(pix));
    w1.setPalette(pal);
#endif


    MainWindow w1;  //主界面
    w1.show();
    QString str;
    skin s1;
    //on_comboBox_choose_currentTextChanged(const QString &arg1);
    w1.setStyleSheet(s1.on_comboBox_choose_currentTextChanged(str));
    //a.setStyleSheet();

    //a.setStyleSheet();


    //skin skin1;
    //skin1.show();


    //setupForm s1;
    //s1.show();
    //Dialog d1;      //设置界面

    //d1.show();

    return a.exec();
}
