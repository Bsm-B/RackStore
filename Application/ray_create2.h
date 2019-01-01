#ifndef RAY_CREATE2_H
#define RAY_CREATE2_H

#include <QWidget>
#include <qtmaterialtextfield.h>
#include <qtmaterialflatbutton.h>

namespace Ui {
class Ray_Create2;
}

class Ray_Create2 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_Create2(QWidget *parent = nullptr);
    ~Ray_Create2();

    QtMaterialTextField * Code = new QtMaterialTextField;
    QtMaterialTextField * Name  = new QtMaterialTextField;
    QtMaterialTextField * Price  = new QtMaterialTextField;
    QtMaterialTextField * Quantity  = new QtMaterialTextField;

    QtMaterialFlatButton *  ok = new QtMaterialFlatButton("Save");
    QtMaterialFlatButton *  cancel = new QtMaterialFlatButton("Cancel");
    QString GetDate();

private:
    Ui::Ray_Create2 *ui;
};

#endif // RAY_CREATE2_H
