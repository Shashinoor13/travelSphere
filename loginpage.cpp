#include "loginpage.h"
#include "ui_loginpage.h"
#include "registerpage.h"
#include "mainwindow.h"
#include<QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QtCore>
#include<QTime>
#include<QPixmap>


QString username;

void login();

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
    username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/shashinoorghimire/Qt/projects/build-travelSphere_in_Qmake-Qt_6_3_2_for_macOS-Release/database/userdatabase.sqlite");

    if(db.open())
    {
        QSqlQuery qry;
        int count=0;
        if(qry.exec("select * from Users where username='"+username+"' and password='"+password+"'"))
        {
            while(qry.next())
            {
                QString user_id="setText(qry.value(0).toString())";
                count++;
            }
            if(count==1)
            {
                this->close();
                    MainWindow *mainWindow = new MainWindow();
                    mainWindow->show();
            }
            else
            {
                ui->label_6->setText("Username/Password Incorrect");
            }
        }


    }
    else
        QMessageBox::information(this,"Connection","Database not connected");
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

