#include "registerpage.h"
#include "ui_registerpage.h"
#include "loginpage.h"
#include <QMessageBox>

registerpage::registerpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerpage)
{
    ui->setupUi(this);
}

registerpage::~registerpage()
{
    delete ui;
}

void registerpage::on_pushButton_clicked()
{
     QString firstname = ui->lineEdit_6->text();
     QString lastname = ui->lineEdit_5->text();
     QString email = ui->lineEdit_7->text();
     QString username = ui->lineEdit_8->text();
     QString password = ui->lineEdit_4->text();
     QString date_of_birth = ui->lineEdit_3->text();
     QString gender = ui->lineEdit->text();
     QString nationality = ui->lineEdit_2->text();

     if(firstname != "" && lastname != "" && email != "" && username != "" && password != "" && date_of_birth != "" && gender != "" && nationality != "")
     {
     if(ui->radioButton->isChecked())
    {
        loginpage login;
        hide();
        login.exec();
    }
    else QMessageBox::warning(this,"Warnning!","You have not aggred to out terms and conditions.");
     }
}

