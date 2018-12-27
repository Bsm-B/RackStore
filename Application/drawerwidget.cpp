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
    ui->label->setText("<img src=':/images/images/logo.svg'>");

    ui->verticalLayout_2->addWidget(fromav);
    ui->label_3->setFont(QFont("Roboto", 10, QFont::Light));
    ui->label_4->setFont(QFont("Roboto", 9, QFont::Light));
    ui->label_3->setStyleSheet("QLabel { color : #9e9ebe }");
    ui->label_4->setStyleSheet("QLabel { color : #9e9ebe }");

    bt_dashboard = new QtMaterialFlatButton("DASHBOARD");
    bt_local = new QtMaterialFlatButton("LOCAL MANAGEMENT");
    bt_client = new QtMaterialFlatButton("CLIENT");
    bt_ray = new QtMaterialFlatButton("RAYS");
    bt_cart = new QtMaterialFlatButton("CARTS");
    bt_parking = new QtMaterialFlatButton("PARKING");
    bt_feed = new QtMaterialFlatButton("FEEDBACKS");
    bt_logout  = new QtMaterialFlatButton("LOGOUT");

     QLabel * line = new QLabel("<hr>");
     line->setStyleSheet("QLabel { color : #9e9ebe }");
     QLabel * copyright = new QLabel("© 2018 Rackoons Team");
     copyright->setStyleSheet("QLabel { color : #9e9ebe }");
     copyright->setFont(QFont("Roboto", 8, QFont::Thin));

    bt_dashboard->setRole(Material::Primary);
    bt_local->setRole(Material::Primary);
    bt_client->setRole(Material::Primary);
    bt_ray->setRole(Material::Primary);
    bt_cart->setRole(Material::Primary);
    bt_parking->setRole(Material::Primary);
    bt_feed->setRole(Material::Primary);
    bt_logout->setRole(Material::Primary);



    bt_dashboard->setIcon(QtMaterialTheme::icon("action", "dashboard"));
    bt_local->setIcon(QtMaterialTheme::icon("action", "store"));
    bt_client->setIcon(QtMaterialTheme::icon("action", "supervisor_account"));
    bt_ray->setIcon(QtMaterialTheme::icon("action", "view_day"));
    bt_cart->setIcon(QtMaterialTheme::icon("action", "shopping_cart"));
    bt_parking->setIcon(QtMaterialTheme::icon("maps", "local_parking"));
    bt_feed->setIcon(QtMaterialTheme::icon("action", "feedback"));
    bt_logout->setIcon(QtMaterialTheme::icon("action", "exit_to_app"));



    bt_dashboard->setFixedHeight(52);
    bt_local->setFixedHeight(52);
    bt_client->setFixedHeight(52);
    bt_ray->setFixedHeight(52);
    bt_cart->setFixedHeight(52);
    bt_parking->setFixedHeight(52);
    bt_feed->setFixedHeight(52);
    bt_logout->setFixedHeight(52);



    bt_dashboard->setIconSize(QSize(24,24));
    bt_local->setIconSize(QSize(24,24));
    bt_client->setIconSize(QSize(24,24));
    bt_ray->setIconSize(QSize(24,24));
    bt_cart->setIconSize(QSize(24,24));
    bt_parking->setIconSize(QSize(24,24));
    bt_feed->setIconSize(QSize(24,24));
    bt_logout->setIconSize(QSize(24,24));


    bt_dashboard->setCheckable(true);
    bt_local->setCheckable(true);
    bt_client->setCheckable(true);
    bt_ray->setCheckable(true);
    bt_cart->setCheckable(true);
    bt_parking->setCheckable(true);
    bt_feed->setCheckable(true);

    bt_dashboard->setOverlayStyle(Material::TintedOverlay);
    bt_local->setOverlayStyle(Material::TintedOverlay);
    bt_client->setOverlayStyle(Material::TintedOverlay);
    bt_ray->setOverlayStyle(Material::TintedOverlay);
    bt_cart->setOverlayStyle(Material::TintedOverlay);
    bt_parking->setOverlayStyle(Material::TintedOverlay);
    bt_feed->setOverlayStyle(Material::TintedOverlay);
    bt_logout->setIconSize(QSize(24,24));

    bt_dashboard->setTextAlignment(Qt::AlignLeft);
    bt_local->setTextAlignment(Qt::AlignLeft);
    bt_client->setTextAlignment(Qt::AlignLeft);
    bt_ray->setTextAlignment(Qt::AlignLeft);
    bt_cart->setTextAlignment(Qt::AlignLeft);
    bt_parking->setTextAlignment(Qt::AlignLeft);
    bt_feed->setTextAlignment(Qt::AlignLeft);
    bt_logout->setTextAlignment(Qt::AlignLeft);

    ui->verticalLayout->addWidget(bt_dashboard);
    ui->verticalLayout->addWidget(bt_local);
    ui->verticalLayout->addWidget(bt_client);
    ui->verticalLayout->addWidget(bt_ray);
    ui->verticalLayout->addWidget(bt_cart);
    ui->verticalLayout->addWidget(bt_parking);
    ui->verticalLayout->addWidget(bt_feed);
    ui->verticalLayout->addWidget(line);
    ui->verticalLayout->addWidget(bt_logout);
    ui->verticalLayout->addWidget(copyright);

    //connect
    connect(bt_dashboard,SIGNAL(clicked(bool)),this,SLOT(dashboard_cliked()));
    connect(bt_local,SIGNAL(clicked(bool)),this,SLOT(loacl_cliked()));
    connect(bt_client,SIGNAL(clicked(bool)),this,SLOT(client_cliked()));
    connect(bt_ray,SIGNAL(clicked(bool)),this,SLOT(ray_cliked()));
    connect(bt_cart,SIGNAL(clicked(bool)),this,SLOT(cart_cliked()));
    connect(bt_parking,SIGNAL(clicked(bool)),this,SLOT(parking_cliked()));
    connect(bt_feed,SIGNAL(clicked(bool)),this,SLOT(feed_cliked()));

}


DrawerWidget::~DrawerWidget()
{
    delete ui;
}

void DrawerWidget::dashboard_cliked()
{
        bt_dashboard->setChecked(true);
        bt_local->setChecked(false);
        bt_client->setChecked(false);
        bt_ray->setChecked(false);
        bt_cart->setChecked(false);
        bt_parking->setChecked(false);
        bt_feed->setChecked(false);

}
void DrawerWidget::loacl_cliked()
{

    bt_dashboard->setChecked(false);
    bt_local->setChecked(true);
    bt_client->setChecked(false);
    bt_ray->setChecked(false);
    bt_cart->setChecked(false);
    bt_parking->setChecked(false);
    bt_feed->setChecked(false);
}
void DrawerWidget::client_cliked()
{
    bt_dashboard->setChecked(false);
    bt_local->setChecked(false);
    bt_client->setChecked(true);
    bt_ray->setChecked(false);
    bt_cart->setChecked(false);
    bt_parking->setChecked(false);
    bt_feed->setChecked(false);
}
void DrawerWidget::ray_cliked()
{
    bt_dashboard->setChecked(false);
    bt_local->setChecked(false);
    bt_client->setChecked(false);
    bt_ray->setChecked(true);
    bt_cart->setChecked(false);
    bt_parking->setChecked(false);
    bt_feed->setChecked(false);
}
void DrawerWidget::cart_cliked()
{
    bt_dashboard->setChecked(false);
    bt_local->setChecked(false);
    bt_client->setChecked(false);
    bt_ray->setChecked(false);
    bt_cart->setChecked(true);
    bt_parking->setChecked(false);
    bt_feed->setChecked(false);

}
void DrawerWidget::parking_cliked()
{
    bt_dashboard->setChecked(false);
    bt_local->setChecked(false);
    bt_client->setChecked(false);
    bt_ray->setChecked(false);
    bt_cart->setChecked(false);
    bt_parking->setChecked(true);
    bt_feed->setChecked(false);
}
void DrawerWidget::feed_cliked(){

    bt_dashboard->setChecked(false);
    bt_local->setChecked(false);
    bt_client->setChecked(false);
    bt_ray->setChecked(false);
    bt_cart->setChecked(false);
    bt_parking->setChecked(false);
    bt_feed->setChecked(true);

}

