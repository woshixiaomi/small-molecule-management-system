#include "setupform.h"
#include "ui_setupform.h"
#include "dialog.h"
#include "skin.h"

setupForm::setupForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setupForm)
{
    ui->setupUi(this);

}

setupForm::~setupForm()
{
    delete ui;
}

void setupForm::on_btn_background_clicked()
{
    skin *s = new skin;
    s->show();

}
