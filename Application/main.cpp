#include "login.h"
#include <QApplication>
#include "ray.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    l.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    l.show();
    //Ray r;
  //  r.show();
    return a.exec();
}
