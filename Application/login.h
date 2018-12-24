#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <qtmaterialiconbutton.h>
#include <lib/qtmaterialtheme.h>
#include <QColorDialog>
#include <QDebug>
#include <qtmaterialtextfield.h>
#include <qtmaterialraisedbutton.h>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

private slots:

     void exit();

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;
};

#endif //

