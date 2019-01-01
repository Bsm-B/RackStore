#include "ray_update2.h"
#include "ui_ray_update2.h"

Ray_Update2::Ray_Update2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray_Update2)
{
    ui->setupUi(this);
}

Ray_Update2::~Ray_Update2()
{
    delete ui;
}
