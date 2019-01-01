#ifndef ITEM_H
#define ITEM_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

class Item
{
public:
    Item();
    Item(int,QString,QString,float,int,QString);

    QSqlQueryModel * Display();
    QSqlQueryModel * DisplayID();

    QSqlQueryModel * Search(int,QString);


    bool Add();
    bool Delete(int);
    bool Update();
    bool Check(int);
    int  Get_Count();
    int Get_Sum();
    int Get_Qtn();

private:
    int Id,Quantity;
    QString Code,Name,Date;
    float Price;


};

#endif // ITEM_H
