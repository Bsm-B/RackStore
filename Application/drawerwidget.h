#ifndef DRAWERWIDGET_H
#define DRAWERWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QVBoxLayout>
#include <qtmaterialavatar.h>
#include <qtmaterialflatbutton.h>

namespace Ui {
class DrawerWidget;
}

class DrawerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DrawerWidget(QWidget *parent = nullptr);
    ~DrawerWidget();
    QImage * Avatar;
private slots:

   void dashboard_cliked();
   void loacl_cliked();
   void client_cliked();
   void ray_cliked();
   void cart_cliked();
   void parking_cliked();
   void feed_cliked();

private:
    Ui::DrawerWidget *ui;
    QtMaterialAvatar * fromav;
    QtMaterialFlatButton * bt_dashboard ;
    QtMaterialFlatButton * bt_local ;
    QtMaterialFlatButton * bt_client ;
    QtMaterialFlatButton * bt_ray ;
    QtMaterialFlatButton * bt_cart ;
    QtMaterialFlatButton * bt_parking ;
    QtMaterialFlatButton * bt_feed ;

};

#endif // DRAWERWIDGET_H
