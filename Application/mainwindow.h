#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <lib/qtmaterialtheme.h>
#include <qtmaterialappbar.h>
#include <qtmaterialiconbutton.h>
#include <qtmaterialdrawer.h>
#include <QGraphicsDropShadowEffect>
#include <QThread>
#include "drawerwidget.h"
#include <qtmaterialavatar.h>
#include <qtmaterialbadge.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:

    void showdraw();
    void hidedraw();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QtMaterialAppBar * topbar;
    QtMaterialIconButton *button;
    QtMaterialIconButton *notif;
    QtMaterialIconButton *email;
    QtMaterialDrawer * drawer;
    DrawerWidget * drawerwidget;
    QtMaterialAvatar * fromav;

};

#endif // MAINWINDOW_H
