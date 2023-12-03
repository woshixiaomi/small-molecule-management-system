#include "widget.h"
#include <QApplication>
#include "mainwindow.h"
#include "special.h"
#include "normal.h"
#include "login.h"
#include "lcms_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
#if 1
    Widget w;

    //添加登录背景图
    w.setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap(":/picture/71.jpg");
    palette.setBrush(QPalette::Window,QBrush(pixmap));
    w.setPalette(palette);
    w.setFixedSize(400,300);

//    login l1;

//    //添加注册背景图

//    QPalette palette1;
//    QPixmap pixmap1("../picture/84.jpg");
//    palette1.setBrush(QPalette::Window,QBrush(pixmap1));
//    l1.setPalette(palette1);
//    l1.setFixedSize(600,400);
//    l1.setAutoFillBackground(true);
#endif
#if 0
    MainWindow w1;
    w1.show();
    QString str;
    w1.setStyleSheet(w1.on_comboBox_currentTextChanged(str));

#endif
#if 0
    MainWindow w;
    w.show();
#endif
#if 0
    Special w;
#endif
#if 0
    Normal w;
#endif
#if 0
    login w;
#endif
    w.show();
    return a.exec();
}
