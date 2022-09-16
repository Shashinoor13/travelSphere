#include "loginpage.h"
#include "homepage.h"
#include <QApplication>
#include"registerpage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    registerpage r;
    loginpage w;
    r.show();
    w.show();
    return a.exec();
}
