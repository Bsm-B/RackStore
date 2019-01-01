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

};

#endif // RAY_H
