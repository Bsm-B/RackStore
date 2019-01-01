#include "ray.h"
#include "ui_ray.h"
#include "ray_create1.h"
#include "ray_update1.h"
#include "ray_create2.h"
#include "ray_update2.h"

Ray::Ray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray),
    notif_appbar(new QtMaterialAppBar),
    m_dialog(new QtMaterialDialog),
    m_dialog2(new QtMaterialDialog),
    m_dialog3(new QtMaterialDialog),
    m_dialog4(new QtMaterialDialog),
    button (new QtMaterialIconButton(QtMaterialTheme::icon("navigation", "more_vert"))),
    btn_add_c2 (new QtMaterialFloatingActionButton(QtMaterialTheme::icon("content", "add"))),
    btn_update_c2 (new QtMaterialFloatingActionButton(QtMaterialTheme::icon("content", "create"))),
    btn_delete_c2 (new QtMaterialFloatingActionButton(QtMaterialTheme::icon("action", "delete"))),
    btn_add_c1 (new QtMaterialFloatingActionButton(QtMaterialTheme::icon("content", "add"))),
    btn_update_c1 (new QtMaterialFloatingActionButton(QtMaterialTheme::icon("content", "create"))),
    btn_delete_c1 (new QtMaterialFloatingActionButton(QtMaterialTheme::icon("action", "delete")))

{
    ui->setupUi(this);
    Card("#1e88e5",ui->widget);
    Card("#7460ee",ui->widget_2);
    Card("#26c6da",ui->widget_3);
    Card("#ffb22b",ui->widget_4);
    Card("#ffffff",ui->widget_5);
    Card("#ffffff",ui->widget_6);
    Card("#ffffff",ui->widget_7);
    Card("#ffffff",ui->widget_8);
    Card("#ffffff",ui->widget_9);
    Card("#ffffff",ui->widget_10);

     notif_appbar->setMaximumHeight(260);
     QLabel *label = new QLabel("Notifications");
     label->setAttribute(Qt::WA_TranslucentBackground);
     label->setForegroundRole(QPalette::Foreground);
     label->setContentsMargins(6, 0, 0, 0);

     QPalette palette = label->palette();
     palette.setColor(label->foregroundRole(), Qt::white);
     label->setPalette(palette);

     label->setFont(QFont("Roboto", 16, QFont::Light));

     button->setIconSize(QSize(16, 16));
     button->setColor(Qt::white);
     notif_appbar->appBarLayout()->addWidget(button);
     notif_appbar->appBarLayout()->addWidget(label);
    ui->verticalLayout->addWidget(notif_appbar);
    //ui->label_2->setcol
    ui->label_2->setStyleSheet(".QLabel { color: white }");
    ui->label_3->setStyleSheet(".QLabel { color: white }");
    ui->label_4->setStyleSheet(".QLabel { color: white }");
    ui->label_5->setStyleSheet(".QLabel { color: white }");
    ui->label_6->setStyleSheet(".QLabel { color: white }");
    ui->label_7->setStyleSheet(".QLabel { color: white }");
    ui->label_8->setStyleSheet(".QLabel { color: white }");
    ui->label_9->setStyleSheet(".QLabel { color: white }");
    ui->label_14->setStyleSheet(".QLabel { color : #9e9ebe }");
    ui->label_15->setStyleSheet(".QLabel { color : #9e9ebe }");
    ui->label_17->setStyleSheet(".QLabel { color : #9e9ebe }");
    ui->label_17->setStyleSheet(".QLabel { color : #9e9ebe }");
    ui->label_19->setStyleSheet(".QLabel { color : #9e9ebe }");
    ui->label_21->setStyleSheet(".QLabel { color : #9e9ebe }");

      btn_add_c2->setMini(true);
      btn_update_c2->setMini(true);
      btn_delete_c2->setMini(true);

      btn_add_c1->setMini(true);
      btn_update_c1->setMini(true);
      btn_delete_c1->setMini(true);

    ui->verticalLayout_2->addWidget(btn_add_c2);
    ui->verticalLayout_3->addWidget(btn_update_c2);
    ui->verticalLayout_4->addWidget(btn_delete_c2);

    ui->verticalLayout_5->addWidget(btn_add_c1);
    ui->verticalLayout_6->addWidget(btn_update_c1);
    ui->verticalLayout_7->addWidget(btn_delete_c1);


  //  btn_update_c1->hide();
   // btn_update_c2->hide();
   // btn_delete_c1->hide();
    //btn_delete_c2->hide();

    m_dialog->setParent(this);
    m_dialog2->setParent(this);
    m_dialog3->setParent(this);
    m_dialog4->setParent(this);

    m_dialog->hide();
    m_dialog2->hide();
    m_dialog3->hide();
    m_dialog4->hide();


    QVBoxLayout *dialogWidgetLayout = new QVBoxLayout;
    QVBoxLayout *dialogWidgetLayout2 = new QVBoxLayout;
    QVBoxLayout *dialogWidgetLayout3 = new QVBoxLayout;
    QVBoxLayout *dialogWidgetLayout4 = new QVBoxLayout;

    Ray_Create1 *RC1 = new Ray_Create1;
    Ray_update1 *RU1 = new Ray_update1;
    Ray_Create2 *RC2 = new Ray_Create2;
    Ray_Update2 *RU2 = new Ray_Update2;

    dialogWidgetLayout->addWidget(RC1);
    dialogWidgetLayout2->addWidget(RU1);
    dialogWidgetLayout3->addWidget(RC2);
    dialogWidgetLayout4->addWidget(RU2);

    RC1->setMinimumHeight(480);
    RU1->setMinimumHeight(500);
    RC2->setMinimumHeight(480);
    RU2->setMinimumHeight(500);

    m_dialog->setWindowLayout(dialogWidgetLayout);
    m_dialog2->setWindowLayout(dialogWidgetLayout2);
    m_dialog3->setWindowLayout(dialogWidgetLayout3);
    m_dialog4->setWindowLayout(dialogWidgetLayout4);

    ui->label_3->setText(QString::number(t.Get_Sum()));
    ui->label_4->setText(QString::number(t.Get_Count()));
    ui->label_6->setText(QString::number(t.Get_Qtn()));
  //  ui->label_8->setText();


    // CRUD 1

     connect(btn_add_c1,&QtMaterialIconButton::pressed,this,[=](){show_Creatpanel1();});
     connect(RC1->cancel,&QtMaterialIconButton::pressed,this,[=](){hide_Creatpanel1();});

     connect(btn_update_c1,&QtMaterialIconButton::pressed,this,[=](){show_updatepanel1();});
     connect(RU1->cancel,&QtMaterialIconButton::pressed,this,[=](){hide_updatepanel1();});

     // CRUD 2
     connect(btn_add_c2,&QtMaterialIconButton::pressed,this,[=](){show_Creatpanel2();});
     connect(RC2->cancel,&QtMaterialIconButton::pressed,this,[=](){hide_Creatpanel2();});

     connect(btn_update_c2,&QtMaterialIconButton::pressed,this,[=](){show_updatepanel2();});
     connect(RU2->cancel,&QtMaterialIconButton::pressed,this,[=](){hide_updatepanel2();});

}

Ray::~Ray()
{
    delete ui;
}

void Ray::Card(QString color , QWidget * wd)
{
    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    QVBoxLayout *widgetlayout = new QVBoxLayout;
    QString style = ".QWidget { background: " + color +
                    ";  border: 1px solid #d7dfe3;  border-radius: 4px; }";
     wd->setStyleSheet(style);
    effect->setBlurRadius(20);
    effect->setColor(QColor(0, 0, 0, 50));
    effect->setOffset(0,0);
    wd->setGraphicsEffect(effect);
    wd->setLayout(widgetlayout);
}

/*********CREATE 1***********/
void Ray::show_Creatpanel1()
{
    m_dialog->show();
    m_dialog->showDialog();
    btn_update_c1->show();
}

void Ray::hide_Creatpanel1()
{
    m_dialog->hideDialog();
    m_dialog->hide();
}

/**********UPDATE 1**********/

void Ray::show_updatepanel1()
{
    m_dialog2->show();
    m_dialog2->showDialog();
}

void Ray::hide_updatepanel1()
{
    m_dialog2->hideDialog();
    m_dialog2->hide();
}

/*********CREATE 2***********/

void Ray::show_Creatpanel2()
{
    m_dialog3->show();
    m_dialog3->showDialog();
    btn_update_c2->show();
}

void Ray::hide_Creatpanel2()
{
    m_dialog3->hideDialog();
    m_dialog3->hide();
}
/**********UPDATE 2**********/

void Ray::show_updatepanel2()
{
    m_dialog4->show();
    m_dialog4->showDialog();
}

void Ray::hide_updatepanel2()
{
    m_dialog4->hideDialog();
    m_dialog4->hide();
}


