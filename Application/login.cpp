#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login),
    view (new QtMaterialIconButton(QtMaterialTheme::icon("action", "visibility"))),
    userpassword_textbox(new QtMaterialTextField),
    toogl()
{
    ui->setupUi(this);
    // Declar

    QtMaterialIconButton * close = new QtMaterialIconButton(QtMaterialTheme::icon("toggle", "star"));
    QtMaterialRaisedButton * login = new QtMaterialRaisedButton("Login");
    QtMaterialTextField * userid_textbox = new QtMaterialTextField;

    //Init

    close->setIconSize(QSize(16,16));
    close->setUseThemeColors(true);
    view->setIconSize(QSize(32,32));
    view->setUseThemeColors(true);

    login->setRole(Material::Primary);
    login->setFixedWidth(300);
    userid_textbox->setLabel("User ID");
    userpassword_textbox->setLabel("Password");
    userid_textbox->setFixedWidth(300);
    userpassword_textbox->setFixedWidth(300);
    userpassword_textbox->setEchoMode(QLineEdit::Password);
    toogl = false;
    //add

    ui->label->setText("<img src=':/images/images/login.png'>");
    ui->label_3->setText("<img src=':/images/icon/ic_help_outline_24px.svg'>");
    ui->label_2->setStyleSheet("QLabel { color : #9e9ebe }");
    ui->verticalLayout->addWidget(close);
    ui->verticalLayout_2->addWidget(userid_textbox);
    ui->verticalLayout_3->addWidget(userpassword_textbox);
    ui->verticalLayout_4->addWidget(login);
    ui->verticalLayout_5->addWidget(view);


    // position
    ui->verticalLayout->setAlignment(close, Qt::AlignCenter);
    ui->verticalLayout_2->setAlignment(userid_textbox, Qt::AlignCenter);
    ui->verticalLayout_3->setAlignment(userpassword_textbox, Qt::AlignCenter);
    ui->verticalLayout_4->setAlignment(login, Qt::AlignCenter);
    ui->verticalLayout_5->setAlignment(view, Qt::AlignCenter);


    //connect
   // connect(login, SIGNAL(clicked(bool)), this,SLOT(setupForm()));
    connect(close, SIGNAL(clicked(bool)), this,SLOT(exit()));
    connect(view, SIGNAL(clicked(bool)), this,SLOT(password()));


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

void Login::password(){

    qDebug() << "Click";


    if (toogl)
    {
        view->setIcon(QtMaterialTheme::icon("action", "visibility"));
        userpassword_textbox->setEchoMode(QLineEdit::Password);
        toogl = false;
        qDebug() << "on";

    }else{

        view->setIcon(QtMaterialTheme::icon("action", "visibility_off"));
        userpassword_textbox->setEchoMode(QLineEdit::Normal);
        toogl = true;
        qDebug() << "off";

    }



}
