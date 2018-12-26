#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    topbar(new QtMaterialAppBar),
    button (new QtMaterialIconButton(QtMaterialTheme::icon("navigation", "menu"))),
    drawer(new QtMaterialDrawer)

{
    //setup
    ui->setupUi(this);

    // Declar
    QVBoxLayout *drawerLayout = new QVBoxLayout;
    drawerwidget = new DrawerWidget;
    // Init
    topbar->setMinimumWidth(1360);
    topbar->setMinimumHeight(60);
    button->setIconSize(QSize(24, 24));
    button->setColor(Qt::white);
    button->setFixedWidth(42);
    drawer->setFixedWidth(250);
    drawer->setClickOutsideToClose(true);
    drawer->setDrawerLayout(drawerLayout);
    drawerLayout->addWidget(drawerwidget);
    // Add
    ui->verticalLayout->addWidget(topbar);
    ui->verticalLayout_3->addWidget(button);
    ui->verticalLayout_2->addWidget(drawer);
    // Position
    topbar->move(5,3);
    //Connect
    connect(button,SIGNAL(clicked(bool)),this,SLOT(showdraw()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showdraw(){
    drawer->openDrawer();
    QGraphicsDropShadowEffect* effect1 = new QGraphicsDropShadowEffect();
    effect1->setBlurRadius(9);
    effect1->setColor(QColor(0, 0, 0, 150));
    effect1->setOffset(5,-3);
    drawer->setGraphicsEffect(effect1);
}
