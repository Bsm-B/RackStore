#include "ray_update1.h"
#include "ui_ray_update1.h"

Ray_update1::Ray_update1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray_update1)
{
    ui->setupUi(this);

    ID->setLabel("ID");
    ID_Produit->setLabel("ID Produit");
    Alert->setLabel("Alert");
    Price_Container->setLabel("Price");
    Nombre_Produit->setLabel("Nomber Produits");
    Flag->setCheckable(true);

    ID->setFixedWidth(200);
    ID_Produit->setFixedWidth(200);
    Alert->setFixedWidth(200);
    Price_Container->setFixedWidth(200);
    Nombre_Produit->setFixedWidth(200);

    ok->setFixedWidth(100);
    cancel->setFixedWidth(80);

    ui->verticalLayout->addWidget(ID);
    ui->verticalLayout->addWidget(ID_Produit);
    ui->verticalLayout->addWidget(Alert);
    ui->verticalLayout->addWidget(Price_Container);
    ui->verticalLayout->addWidget(Nombre_Produit);

    ui->verticalLayout->setAlignment(ID,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(ID_Produit,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Alert,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Price_Container,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Nombre_Produit,Qt::AlignCenter);

    ui->verticalLayout_3->addWidget(Flag);

    ui->horizontalLayout_3->addWidget(cancel);
    ui->horizontalLayout_3->addWidget(ok);
}

Ray_update1::~Ray_update1()
{
    delete ui;
}
