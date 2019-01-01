#ifndef RAY_UPDATE2_H
#define RAY_UPDATE2_H

#include <QWidget>

namespace Ui {
class Ray_Update2;
}

class Ray_Update2 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_Update2(QWidget *parent = nullptr);
    ~Ray_Update2();

private:
    Ui::Ray_Update2 *ui;
};

#endif // RAY_UPDATE2_H
