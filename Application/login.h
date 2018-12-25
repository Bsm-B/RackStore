#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QColorDialog>
#include <QDebug>
#include <QPainter>
#include <QThread>
#include <qtmaterialiconbutton.h>
#include <lib/qtmaterialtheme.h>
#include <qtmaterialtextfield.h>
#include <qtmaterialraisedbutton.h>
#include <QGraphicsDropShadowEffect>
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

private slots:

     void exit();
     void password();
     void enter();

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;
    QtMaterialIconButton * view;
    QtMaterialTextField * userpassword_textbox;
    bool toogl;
    MainWindow  M;
};

#endif //

