#include "loginpage.h"
#include "registerpage.h"
#include "booking.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Booking b;
    loginpage w;
    registerpage r;
    w.show();
    b.show();
    return a.exec();
}
