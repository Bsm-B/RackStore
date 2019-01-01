#ifndef RAY_H
#define RAY_H

#include <QWidget>
#include <QGraphicsDropShadowEffect>
#include <QVBoxLayout>
#include <qtmaterialappbar.h>
#include <qtmaterialiconbutton.h>
#include <lib/qtmaterialtheme.h>
#include <QLabel>
#include <qtmaterialiconbutton.h>
#include <qtmaterialfab.h>
#include <qtmaterialdialog.h>
#include "item.h"
#include "container.h"
#include <QString>
#include "ray_create1.h"
#include "ray_update1.h"
#include "ray_create2.h"
#include "ray_update2.h"

namespace Ui {
class Ray;
}

class Ray : public QWidget
{
    Q_OBJECT

public:
    explicit Ray(QWidget *parent = nullptr);
    ~Ray();
    void Card(QString, QWidget *);
    void show_Creatpanel1();
    void hide_Creatpanel1();

    void show_updatepanel1();
    void hide_updatepanel1();

    void show_Creatpanel2();
    void hide_Creatpanel2();

    void show_updatepanel2();
    void hide_updatepanel2();

    void add_container();
    void update_container();
    void delete_container();

    void add_item();
    void update_item();
    void delete_item();

private slots:


private:
    Ui::Ray *ui;
     QtMaterialAppBar       *notif_appbar;
     QtMaterialDialog       * m_dialog;
     QtMaterialDialog       * m_dialog2;
     QtMaterialDialog       * m_dialog3;
     QtMaterialDialog       * m_dialog4;
     QtMaterialIconButton *button;
     QtMaterialFloatingActionButton * btn_add_c2;
     QtMaterialFloatingActionButton * btn_update_c2;
     QtMaterialFloatingActionButton * btn_delete_c2;
     QtMaterialFloatingActionButton * btn_add_c1;
     QtMaterialFloatingActionButton * btn_update_c1;
     QtMaterialFloatingActionButton * btn_delete_c1;
      Item t; // obj
      Container C; //obj

      Ray_Create1 *RC1 = new Ray_Create1;
      Ray_update1 *RU1 = new Ray_update1;
      Ray_Create2 *RC2 = new Ray_Create2;
      Ray_Update2 *RU2 = new Ray_Update2;

};

#endif // RAY_H
