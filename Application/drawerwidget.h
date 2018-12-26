#ifndef DRAWERWIDGET_H
#define DRAWERWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QVBoxLayout>
#include <qtmaterialavatar.h>

namespace Ui {
class DrawerWidget;
}

class DrawerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DrawerWidget(QWidget *parent = nullptr);
    ~DrawerWidget();
    QImage * Avatar;

private:
    Ui::DrawerWidget *ui;
    QtMaterialAvatar * fromav;
};

#endif // DRAWERWIDGET_H
