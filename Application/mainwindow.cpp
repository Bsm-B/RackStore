#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    topbar(new QtMaterialAppBar),
    button (new QtMaterialIconButton(QtMaterialTheme::icon("navigation", "menu"))),
    notif (new QtMaterialIconButton(QtMaterialTheme::icon("communication", "mail_outline"))),
    email (new QtMaterialIconButton(QtMaterialTheme::icon("social", "notifications_none"))),
    drawer(new QtMaterialDrawer),
    fromav(new QtMaterialAvatar())

{
    //setup
    ui->setupUi(this);

    // Declar

    QVBoxLayout *drawerLayout = new QVBoxLayout;
    drawerwidget = new DrawerWidget;
    fromav->setImage((*drawerwidget->Avatar));
    fromav->setSize(46);
    QtMaterialBadge *badgenotif = new QtMaterialBadge;
    QtMaterialBadge *badgemail = new QtMaterialBadge;

    // Init
    topbar->setMinimumWidth(1360);
    topbar->setMinimumHeight(60);

    button->setIconSize(QSize(24, 24));
    button->setColor(Qt::white);
    button->setFixedWidth(42);

    notif->setIconSize(QSize(24, 24));
    notif->setColor(Qt::white);
    notif->setFixedWidth(42);

    email->setIconSize(QSize(24, 24));
    email->setColor(Qt::white);
    email->setFixedWidth(42);

    drawer->setFixedWidth(250);
    drawer->setClickOutsideToClose(true);
    drawer->setDrawerLayout(drawerLayout);
    drawerLayout->addWidget(drawerwidget);
    ui->label_3->setFont(QFont("Roboto", 10, QFont::Light));
    ui->label_3->setStyleSheet("QLabel { color : #FFFFFF }");
    badgenotif->setParent(notif);
    badgenotif->setRelativePosition(8, -4);
    badgenotif->setText("4");
    badgemail->setParent(email);
    badgemail->setRelativePosition(8, -4);
    badgemail->setText("69");
    badgemail->sizeHint();
    // Add
    ui->verticalLayout->addWidget(topbar);
    ui->verticalLayout_2->addWidget(drawer);
    ui->verticalLayout_4->addWidget(fromav);
    ui->horizontalLayout->addWidget(button);
    ui->horizontalLayout_2->addWidget(notif);
    ui->horizontalLayout_2->addWidget(email);



   // Position
    topbar->move(5,3);
    //Connect
    connect(button,SIGNAL(clicked(bool)),this,SLOT(showdraw()));


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::hidedraw()
{

    qDebug() << "Heeloo";
}

void MainWindow::showdraw(){
    drawer->openDrawer();
    QGraphicsDropShadowEffect* effect1 = new QGraphicsDropShadowEffect();
    effect1->setBlurRadius(9);
    effect1->setColor(QColor(0, 0, 0, 150));
    effect1->setOffset(5,-3);
    drawer->setGraphicsEffect(effect1);
}
