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
#include <qtmaterialfab.h>
#include <QMouseEvent>
#include <QEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:

    void showdraw();
    void set_tab_dash();
    void set_tab_local();
    void set_tab_client();
    void set_tab_ray();
    void set_tab_cart();
    void set_tab_parking();
    void set_tab_feed();
    void set_tab_settings();
    void logout();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void mousePressEvent(QMouseEvent * event) override;
private:
    Ui::MainWindow *ui;
    QtMaterialAppBar * topbar;
    QtMaterialIconButton *button;
    QtMaterialIconButton *notif;
    QtMaterialIconButton *email;
    QtMaterialDrawer * drawer;
    DrawerWidget * drawerwidget;
    QtMaterialAvatar * fromav;
    QtMaterialFloatingActionButton * settings ;


};

#endif // MAINWINDOW_H
