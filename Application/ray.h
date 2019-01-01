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
private slots:


private:
    Ui::Ray *ui;
     QtMaterialAppBar       *notif_appbar;
     QtMaterialIconButton *button;
     QtMaterialFloatingActionButton * btn_add_c2;
     QtMaterialFloatingActionButton * btn_update_c2;
     QtMaterialFloatingActionButton * btn_delete_c2;
     QtMaterialFloatingActionButton * btn_add_c1;
     QtMaterialFloatingActionButton * btn_update_c1;
     QtMaterialFloatingActionButton * btn_delete_c1;

};

#endif // RAY_H
