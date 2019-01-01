#include "ray_create2.h"
#include "ui_ray_create2.h"

Ray_Create2::Ray_Create2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray_Create2)
{
    ui->setupUi(this);
}

Ray_Create2::~Ray_Create2()
{
    delete ui;
}
