#include "ray.h"
#include "ui_ray.h"

Ray::Ray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray)
{
    ui->setupUi(this);
    ui->label->setText("<img src='://Application/images/Ray/paper1.png'>");
    ui->label_2->setText("<img src='://Application/images/Ray/paper2.png'>");
    ui->label_3->setText("<img src='://Application/images/Ray/paper3.png'>");
    ui->label_4->setText("<img src='://Application/images/Ray/paper4.png'>");
}

Ray::~Ray()
{
    delete ui;
}
