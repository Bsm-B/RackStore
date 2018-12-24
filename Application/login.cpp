#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    // Declar

    QtMaterialIconButton * close = new QtMaterialIconButton(QtMaterialTheme::icon("toggle", "star"));
    QtMaterialRaisedButton * login = new QtMaterialRaisedButton("Login");
    QtMaterialTextField * userid_textbox = new QtMaterialTextField;
    QtMaterialTextField * userpassword_textbox = new QtMaterialTextField;

    //Init

    close->setIconSize(QSize(16,16));
    close->setUseThemeColors(true);
    login->setRole(Material::Primary);
    login->setFixedWidth(300);
    userid_textbox->setLabel("User ID");
    userpassword_textbox->setLabel("Password");
    userid_textbox->setFixedWidth(300);
    userpassword_textbox->setFixedWidth(300);

    //add

    ui->label->setText("<img src=':/images/images/login.png'>");
    ui->verticalLayout->addWidget(close);
    ui->verticalLayout_2->addWidget(userid_textbox);
    ui->verticalLayout_3->addWidget(userpassword_textbox);
    ui->verticalLayout_4->addWidget(login);


    // position
    ui->verticalLayout->setAlignment(close, Qt::AlignCenter);
    ui->verticalLayout_2->setAlignment(userid_textbox, Qt::AlignCenter);
    ui->verticalLayout_3->setAlignment(userpassword_textbox, Qt::AlignCenter);
    ui->verticalLayout_4->setAlignment(login, Qt::AlignCenter);



    //connect
   // connect(login, SIGNAL(clicked(bool)), this,SLOT(setupForm()));
    connect(close, SIGNAL(clicked(bool)), this,SLOT(exit()));

}

Login::~Login()
{
    delete ui;
}

void Login::exit()
{
    QCoreApplication::quit();
    qDebug() << "Exit";


}
