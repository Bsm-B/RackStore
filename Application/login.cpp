#include "login.h"
#include "ui_login.h"
#include <QDebug>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login),
    view (new QtMaterialIconButton(QtMaterialTheme::icon("action", "visibility"))),
    userpassword_textbox(new QtMaterialTextField),
    toogl()
{
    ui->setupUi(this);

    setAttribute(Qt::WA_TranslucentBackground); //enable MainWindow to be transparent

    QGraphicsDropShadowEffect* effect1 = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* effect2 = new QGraphicsDropShadowEffect();

    if (RackDataBase.Open_db())
    {
        qDebug() << "Happy";
    }else{
        qDebug() << "sad";

    }

    effect1->setBlurRadius(9);
    effect1->setColor(QColor(0, 0, 0, 150));
    effect1->setOffset(-5,-5);

    effect2->setBlurRadius(9);
    effect2->setColor(QColor(0, 0, 0, 150));
    effect2->setOffset(0,0);

    ui->widget1->setGraphicsEffect(effect1);
    ui->widget1->setGraphicsEffect(effect2);


    //Declar

    QtMaterialIconButton * close = new QtMaterialIconButton(QtMaterialTheme::icon("action", "highlight_off"));
    QtMaterialRaisedButton * login = new QtMaterialRaisedButton("Login");
    QtMaterialTextField * userid_textbox = new QtMaterialTextField;

    //Init
    close->setIconSize(QSize(24,24));
    close->setUseThemeColors(true);
    view->setIconSize(QSize(16,16));
    view->setColor(QColor(158,158,190));

    login->setRole(Material::Primary);
    login->setFixedWidth(300);
    userid_textbox->setLabel("User ID");
    userpassword_textbox->setLabel("Password");
    userid_textbox->setFixedWidth(300);
    userpassword_textbox->setFixedWidth(300);
    userpassword_textbox->setEchoMode(QLineEdit::Password);
    toogl = false;

    //Add

    ui->label->setText("<img src=':/images/images/login.png'>");
    ui->label_3->setText("<img src=':/images/icon/ic_help_outline_24px.svg'>");
    ui->label_2->setStyleSheet("QLabel { color : #9e9ebe }");
    ui->verticalLayout_2->addWidget(userid_textbox);
    ui->verticalLayout_3->addWidget(userpassword_textbox);
    ui->verticalLayout_4->addWidget(login);
    ui->verticalLayout_5->addWidget(view);
    ui->verticalLayout->addWidget(close);


    //Position
    ui->verticalLayout_2->setAlignment(userid_textbox, Qt::AlignCenter);
    ui->verticalLayout_3->setAlignment(userpassword_textbox, Qt::AlignCenter);
    ui->verticalLayout_4->setAlignment(login, Qt::AlignCenter);
    ui->verticalLayout_5->setAlignment(view, Qt::AlignCenter);
    ui->verticalLayout->setAlignment(close, Qt::AlignCenter);

    //Connect

    connect(close, SIGNAL(clicked(bool)), this,SLOT(exit()));
    connect(view, SIGNAL(clicked(bool)), this,SLOT(password()));
    connect(login,SIGNAL(clicked(bool)),this,SLOT(enter()));
}

Login::~Login()
{
    delete ui;
}
void Login::enter()
{
    this->hide();
    M.showMaximized();


}

void Login::exit()
{
    QCoreApplication::quit();
}

void Login::password(){



    if (toogl)
    {
        view->setIcon(QtMaterialTheme::icon("action", "visibility"));
        userpassword_textbox->setEchoMode(QLineEdit::Password);
        toogl = false;

    }else{

        view->setIcon(QtMaterialTheme::icon("action", "visibility_off"));
        userpassword_textbox->setEchoMode(QLineEdit::Normal);
        toogl = true;

    }


}

