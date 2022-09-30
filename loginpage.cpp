#include "loginpage.h"
#include "ui_loginpage.h"
#include "homepage.h"
#include "registerpage.h"
#include<QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QtCore>
#include<QTime>
loginpage::loginpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginpage)
{
    ui->setupUi(this);
}

loginpage::~loginpage()
{
    delete ui;
}


void loginpage::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username == "admin" && password == "admin"){
        ui->label_6->setText("Login Sucessfull.");
        homepage home;
        hide();
        home.setModal(true);
        home.exec();
    }
    else ui->label_6->setText("Username/Password incorrect!");
}


void loginpage::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Redirecting","Redirecting to sign up page.");
    hide();
    registerpage reg;
    reg.exec();
}


void loginpage::on_pushButton_3_clicked()
{
     QMessageBox::information(this,"Redirecting","Redirecting to google account page.");
     hide();
     QDesktopServices::openUrl(QUrl("https://accounts.google.com/v3/signin/identifier?dsh=S-1895161926%3A1664513168845167&continue=https%3A%2F%2Ftakeout.google.com%2F&ec=GAlAwAE&flowName=GlifWebSignIn&flowEntry=AddSession", QUrl::TolerantMode));
     show();
}

