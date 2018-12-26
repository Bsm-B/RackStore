#include "drawerwidget.h"
#include "ui_drawerwidget.h"

DrawerWidget::DrawerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrawerWidget),
    fromav(new QtMaterialAvatar())
{
    ui->setupUi(this);
    Avatar = new QImage(":/images/images/Avatar.jpg");
    fromav->setImage((*Avatar));
    fromav->setSize(64);
    ui->label->setText("<img src=':/images/images/Rack.png'>");
    ui->verticalLayout_2->addWidget(fromav);
    ui->label_3->setFont(QFont("Roboto", 10, QFont::Light));
    ui->label_4->setFont(QFont("Roboto", 9, QFont::Light));

}


DrawerWidget::~DrawerWidget()
{
    delete ui;
}


