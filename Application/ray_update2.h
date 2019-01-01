#ifndef RAY_UPDATE2_H
#define RAY_UPDATE2_H

#include <QWidget>
#include <qtmaterialtextfield.h>
#include <qtmaterialflatbutton.h>


namespace Ui {
class Ray_Update2;
}

class Ray_Update2 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_Update2(QWidget *parent = nullptr);
    ~Ray_Update2();

    QtMaterialTextField * ID = new QtMaterialTextField;
    QtMaterialTextField * Code = new QtMaterialTextField;
    QtMaterialTextField * Name  = new QtMaterialTextField;
    QtMaterialTextField * Price  = new QtMaterialTextField;
    QtMaterialTextField * Quantity  = new QtMaterialTextField;
    QtMaterialFlatButton *  ok = new QtMaterialFlatButton("Save");
    QtMaterialFlatButton *  cancel = new QtMaterialFlatButton("Cancel");
    QString GetDate();
private:
    Ui::Ray_Update2 *ui;
};

#endif // RAY_UPDATE2_H
