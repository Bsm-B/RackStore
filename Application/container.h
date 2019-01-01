#ifndef CONTAINER_H
#define CONTAINER_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

class Container
{
public:
    Container();
    Container(int,int,QString,QString,int,int);
    bool Add();
    bool Update();
    bool Delete(int);
    QSqlQueryModel * Get_Prodid();
    QSqlQueryModel * Display();
private:
    int ID,ID_produit,Nombre_produit,Flag;
    QString Alert,Price_containe;
};

#endif // CONTAINER_H
