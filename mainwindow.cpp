#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "profile.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Profile_clicked()
{
    hide();
    Profile *profile = new Profile();
    profile->show();
}

