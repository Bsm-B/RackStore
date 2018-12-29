#include "ray.h"
#include "ui_ray.h"

Ray::Ray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray)
{
    ui->setupUi(this);
}

Ray::~Ray()
{
    delete ui;
}
