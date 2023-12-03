#include "search_window.h"
#include "ui_search_window.h"

Search_Window::Search_Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Search_Window)
{

}

Search_Window::~Search_Window()
{
    delete ui;
}
