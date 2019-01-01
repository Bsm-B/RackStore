#ifndef RAY_CREATE1_H
#define RAY_CREATE1_H

#include <QWidget>
#include <qtmaterialtextfield.h>
#include <qtmaterialautocomplete.h>
#include <qtmaterialtoggle.h>
#include <qtmaterialflatbutton.h>
#include <QLabel>

namespace Ui {
class Ray_Create1;
}

class Ray_Create1 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_Create1(QWidget *parent = nullptr);
    ~Ray_Create1();

private:
    Ui::Ray_Create1 *ui;
    QtMaterialAutoComplete * ID_Produit;
    QtMaterialAutoComplete * Alert;
    QtMaterialTextField * Price_Container;
    QtMaterialTextField * Nombre_Produit;
    QtMaterialToggle * Flag;
    QtMaterialFlatButton *  ok;
    QtMaterialFlatButton *  cancel;


};

#endif // RAY_CREATE1_H
