#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    l.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    l.show();
    return a.exec();
}
