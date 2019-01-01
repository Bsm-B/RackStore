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
};

#endif // RAY_H
