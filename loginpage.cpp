#include "loginpage.h"
#include "ui_loginpage.h"
#include<QMessageBox>
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
    }
    else ui->label_6->setText("Username/Password incorrect!");
}


void loginpage::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Redirecting","Redirecting to sign up page.");
}


void loginpage::on_pushButton_3_clicked()
{
     QMessageBox::information(this,"Redirecting","Redirecting to google accounts page.");
}

