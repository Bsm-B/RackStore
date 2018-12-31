#include "ray.h"
#include "ui_ray.h"

Ray::Ray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ray),
    notif_appbar(new QtMaterialAppBar),
    button (new QtMaterialIconButton(QtMaterialTheme::icon("navigation", "more_vert")))
{
    ui->setupUi(this);
    Card("#1e88e5",ui->widget);
    Card("#7460ee",ui->widget_2);
    Card("#26c6da",ui->widget_3);
    Card("#ffb22b",ui->widget_4);

    Card("#ffffff",ui->widget_5);
    Card("#ffffff",ui->widget_6);
    Card("#ffffff",ui->widget_7);
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
