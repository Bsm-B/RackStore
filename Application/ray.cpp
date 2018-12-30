#include "ray.h"
#include "ui_ray.h"

Ray::Ray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray)
{
    ui->setupUi(this);
    Card("#ffffff",ui->widget);
}

Ray::~Ray()
{
    delete ui;
}

void Ray::Card(QString color , QWidget * wd)
{
    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    QVBoxLayout *widgetlayout = new QVBoxLayout;
    QString style = ".QWidget { background: " + color +
                    ";  border: 1px solid #d7dfe3;  border-radius: 4px; }";
    wd->setStyleSheet(style);
    effect->setBlurRadius(20);
    effect->setColor(QColor(0, 0, 0, 50));
    effect->setOffset(0,0);
    wd->setGraphicsEffect(effect);
    wd->setLayout(widgetlayout);
}
