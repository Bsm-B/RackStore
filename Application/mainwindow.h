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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:

    void showdraw();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QtMaterialAppBar * topbar;
    QtMaterialIconButton *button;
    QtMaterialDrawer * drawer;
    DrawerWidget * drawerwidget;
};

#endif // MAINWINDOW_H
