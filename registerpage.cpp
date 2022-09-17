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
    if(ui->radioButton->isChecked())
    {
        loginpage login;
        hide();
        login.exec();
    }
    else QMessageBox::warning(this,"Warnning!","You have not aggred to out terms and conditions.");
}

