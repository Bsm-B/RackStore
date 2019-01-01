#include "login.h"
#include <QApplication>
#include "ray_create1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Login l;
    Ray_Create1 r;
   // l.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    //l.show();
    r.show();
    return a.exec();
}
