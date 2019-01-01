#ifndef RAY_CREATE2_H
#define RAY_CREATE2_H

#include <QWidget>

namespace Ui {
class Ray_Create2;
}

class Ray_Create2 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_Create2(QWidget *parent = nullptr);
    ~Ray_Create2();

private:
    Ui::Ray_Create2 *ui;
};

#endif // RAY_CREATE2_H
