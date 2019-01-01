#ifndef RAY_UPDATE1_H
#define RAY_UPDATE1_H

#include <QWidget>
#include <qtmaterialtextfield.h>
#include <qtmaterialautocomplete.h>
#include <qtmaterialtoggle.h>
#include <qtmaterialflatbutton.h>

namespace Ui {
class Ray_update1;
}

class Ray_update1 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_update1(QWidget *parent = nullptr);
    ~Ray_update1();

    QtMaterialTextField * ID = new QtMaterialTextField;
    QtMaterialAutoComplete * ID_Produit = new QtMaterialAutoComplete;
    QtMaterialAutoComplete * Alert = new QtMaterialAutoComplete;
    QtMaterialTextField * Price_Container = new QtMaterialTextField;
    QtMaterialTextField * Nombre_Produit = new QtMaterialTextField;
    QtMaterialToggle * Flag = new QtMaterialToggle;
    QtMaterialFlatButton *  ok = new QtMaterialFlatButton("Save");
    QtMaterialFlatButton *  cancel = new  QtMaterialFlatButton("Cancel");
private:

    Ui::Ray_update1 *ui;

};

#endif // RAY_UPDATE1_H
