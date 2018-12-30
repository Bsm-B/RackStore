#ifndef RAY_H
#define RAY_H

#include <QWidget>
#include <QGraphicsDropShadowEffect>
#include <QVBoxLayout>
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
private:
    Ui::Ray *ui;
};

#endif // RAY_H
