#include "booknow.h"
#include "ui_booknow.h"

BookNow::BookNow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookNow)
{
    ui->setupUi(this);
}

BookNow::~BookNow()
{
    delete ui;
}
