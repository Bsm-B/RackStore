#include "ray_update2.h"
#include "ui_ray_update2.h"

Ray_Update2::Ray_Update2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray_Update2)
{
    ui->setupUi(this);

    ID->setLabel("ID  ");
    Code->setLabel("Code");
    Name->setLabel("Name");
    Price->setLabel("Price");
    Quantity->setLabel("Quantity");

    Code->setFixedWidth(250);
    Name->setFixedWidth(250);
    Price->setFixedWidth(250);
    Quantity->setFixedWidth(250);
    ID->setFixedWidth(250);

    ok->setFixedWidth(100);
    cancel->setFixedWidth(80);


    ui->verticalLayout->addWidget(ID);
    ui->verticalLayout->addWidget(Code);
    ui->verticalLayout->addWidget(Name);
    ui->verticalLayout->addWidget(Price);
    ui->verticalLayout->addWidget(Quantity);

    ui->verticalLayout->setAlignment(ID,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Code,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Name,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Price,Qt::AlignCenter);
    ui->verticalLayout->setAlignment(Quantity,Qt::AlignCenter);

    ui->horizontalLayout_3->addWidget(cancel);
    ui->horizontalLayout_3->addWidget(ok);
}

Ray_Update2::~Ray_Update2()
{
    delete ui;
}

QString Ray_Update2::GetDate()
{
       return ui->dateEdit_2->text();
}
