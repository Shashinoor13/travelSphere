#include "profile.h"
#include "ui_profile.h"
#include "mainwindow.h"

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_pushButton_clicked()
{
    MainWindow *repeat = new MainWindow();
    repeat->show();
}

