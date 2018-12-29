#ifndef RAY_H
#define RAY_H

#include <QWidget>

namespace Ui {
class Ray;
}

class Ray : public QWidget
{
    Q_OBJECT

public:
    explicit Ray(QWidget *parent = nullptr);
    ~Ray();

private:
    Ui::Ray *ui;
};

#endif // RAY_H
