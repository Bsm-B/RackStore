#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    topbar(new QtMaterialAppBar),
    button (new QtMaterialIconButton(QtMaterialTheme::icon("navigation", "menu")))
{
    //setup
    ui->setupUi(this);

    // Declar

    // Init
    //ui->verticalLayout->addStretch(1);
    topbar->setMinimumWidth(1360);
    topbar->setMinimumHeight(60);
    button->setIconSize(QSize(24, 24));
    button->setColor(Qt::white);
    button->setFixedWidth(42);

    // Add
    ui->verticalLayout->addWidget(topbar);
    ui->verticalLayout_3->addWidget(button);
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

    button->move(420,13);

}
