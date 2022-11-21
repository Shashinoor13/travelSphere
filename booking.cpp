#include "booking.h"
#include "ui_booking.h"
#include "profile.h""

Booking::Booking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Booking)
{
    ui->setupUi(this);
}

Booking::~Booking()
{
    delete ui;
}

void Booking::on_Profile_clicked()
{
    hide();
    Profile *profile = new Profile();
    profile->show();
}

