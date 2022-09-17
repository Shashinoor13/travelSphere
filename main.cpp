#include "loginpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //registerpage r;
    loginpage w;
   // r.show();
    w.show();
    return a.exec();
}
