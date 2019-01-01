#include "ray_create1.h"
#include "ui_ray_create1.h"

Ray_Create1::Ray_Create1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray_Create1)
{
    ui->setupUi(this);

    ID_Produit->setLabel("ID Produit");
    Alert->setLabel("Alert");
    Price_Container->setLabel("Price");
    Nombre_Produit->setLabel("Nomber Produits");
    Flag->setCheckable(true);

    ID_Produit->setFixedWidth(250);
    Alert->setFixedWidth(250);
    Price_Container->setFixedWidth(250);
    Nombre_Produit->setFixedWidth(250);

    ok->setFixedWidth(100);
    cancel->setFixedWidth(80);

    ui->verticalLayout->addWidget(ID_Produit);
    ui->verticalLayout->addWidget(Alert);
    ui->verticalLayout->addWidget(Price_Container);
    ui->verticalLayout->addWidget(Nombre_Produit);
    ui->verticalLayout->setAlignment(ID_Produit,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Alert,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Price_Container,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Nombre_Produit,Qt::AlignCenter);
    ui->verticalLayout_3->addWidget(Flag);
    ui->horizontalLayout_3->addWidget(cancel);
    ui->horizontalLayout_3->addWidget(ok);
}

Ray_Create1::~Ray_Create1()
{
    delete ui;
}
