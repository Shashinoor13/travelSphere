#include "registerpage.h"
#include "ui_registerpage.h"
#include "loginpage.h"
#include <QMessageBox>
#include <QRadioButton>


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
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //esma databasae ko path halney hai pichadi .sqlite extension vako .sqbpro wala haina
    db.setDatabaseName("/Users/shashinoorghimire/Qt/projects/build-travelSphere_in_Qmake-Qt_6_3_2_for_macOS-Release/database/userdatabase.sqlite");
    //declaring the variables
     QDate DOB = ui->dateEdit->date();
     QString firstname = ui->lineEdit_6->text();
     QString lastname = ui->lineEdit_5->text();
     QString email = ui->lineEdit_7->text();
     QString username = ui->lineEdit_8->text();
     QString password = ui->lineEdit_4->text();
     QString date_of_birth = DOB.toString();
     QString gender = ui->comboBox->currentText();
     QString nationality = ui->lineEdit_2->text();
     //opening databsaae
        db.open();
         QSqlQuery aa;
         //preparing and binding the values
         aa.prepare("INSERT INTO Users('firstname','lastname','email','username','password','date-of-birth','gender','nationality','Remarks')VALUES(:firstname,:lastname,:email,:username,:password,:date,:gender,:nationality,'sucess')");
        aa.bindValue(":firstname",firstname);
        aa.bindValue(":lastname",lastname);
        aa.bindValue(":email",email);
        aa.bindValue(":username",username);
        aa.bindValue(":password",password);
        aa.bindValue(":date",date_of_birth);
        aa.bindValue(":gender",gender);
        aa.bindValue(":nationality",nationality);



if (ui->radioButton->isChecked()){
     if(firstname != "" && lastname != "" && email != "" && username != "" && password != "" && date_of_birth != "" && gender != "" && nationality != "" && ui->radioButton->isChecked())
     {
         //executing the commands after checking all the criterias.
         aa.exec();
         QMessageBox::information(this,"","account created sucessfully");
         loginpage login;
         hide();
         login.exec();
         }
         else if(firstname == "" || lastname == "" || email == "" || username == "" || password == "" || date_of_birth == "" || gender == "" || nationality == "" || ui->radioButton->isChecked()){
         QMessageBox::information(this,"Missing","All the fields are mandatory");
        registerpage reg;
        hide();
        reg.exec();
     }
     }
   else  QMessageBox::warning(this,"Warnning!","You have not aggred to out terms and conditions.");

}
void registerpage::on_pushButton_2_clicked()
{

    loginpage login;
    hide();
    login.exec();
}

