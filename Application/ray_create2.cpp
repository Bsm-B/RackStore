#include "ray_create2.h"
#include "ui_ray_create2.h"

Ray_Create2::Ray_Create2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray_Create2)
{
    ui->setupUi(this);

    Code->setLabel("Code");
    Name->setLabel("Name");
    Price->setLabel("Price");
    Quantity->setLabel("Quantity");

    Code->setFixedWidth(250);
    Name->setFixedWidth(250);
    Price->setFixedWidth(250);
    Quantity->setFixedWidth(250);

    ok->setFixedWidth(100);
    cancel->setFixedWidth(80);

    ui->verticalLayout_2->addWidget(Code);
    ui->verticalLayout_2->addWidget(Name);
    ui->verticalLayout_2->addWidget(Price);
    ui->verticalLayout_2->addWidget(Quantity);

    ui->verticalLayout_2->setAlignment(Code,Qt::AlignCenter);
    ui->verticalLayout_2->setAlignment(Name,Qt::AlignCenter);
    ui->verticalLayout_2->setAlignment(Price,Qt::AlignCenter);
    ui->verticalLayout_2->setAlignment(Quantity,Qt::AlignCenter);

    ui->horizontalLayout_5->addWidget(cancel);
    ui->horizontalLayout_5->addWidget(ok);
}

Ray_Create2::~Ray_Create2()
{
    delete ui;
}

QString Ray_Create2::GetDate()
{
    return ui->dateEdit->text();
}
