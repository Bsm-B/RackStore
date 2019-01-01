#include "container.h"

Container::Container()
{
    this->ID = 0;
    this->ID_produit = 0;
    this->Alert = "";
    this->Price_containe = "";
    this->Nombre_produit = 0;
    this->Flag = 0;
}
Container::Container(int id,int id_prd,QString alert,QString pric,int nprod,int flag)
{
    this->ID = id;
    this->ID_produit = id_prd;
    this->Alert = alert;
    this->Price_containe = pric;
    this->Nombre_produit = nprod;
    this->Flag = flag;
}

bool Container::Add()
{
    QSqlQuery query;
    query.prepare("INSERT INTO CONTAINER (\"ID_produit\",\"Alert\",\"Price_containe\",\"Nombre_produit\",\"Flag\")"
                        "VALUES (:id, :alert, :prx, :nbre, :flag)");
    query.bindValue(":id", QString::number(ID_produit));
    query.bindValue(":alert", Alert);
    query.bindValue(":prx", Price_containe);
    query.bindValue(":nbre", QString::number(Nombre_produit));
    query.bindValue(":flag",QString::number(Flag));
    return query.exec();
}

bool Container::Update()
{
    QSqlQuery query;
    QString StrID = QString::number(ID);
    query.prepare("UPDATE ITEM SET "
                    " \"ID_produit\" = :id_prod,  \"Alert\" = :alert,"
                     " \"Price_containe\"= :price, \"Nombre_produit\" = :nmbre_prod,"
                    "\"Flag\" = :flag"
                    " where ID = "+ StrID );
    query.bindValue(":id_prod", QString::number(ID_produit));
    query.bindValue(":alert", Alert);
    query.bindValue(":price", Price_containe);
    query.bindValue(":nmbre_prod", QString::number(Nombre_produit));
    query.bindValue(":flag",QString::number(Flag));

    return query.exec();
}

bool Container::Delete(int idd)
{
    QSqlQuery query;
    QString ID = QString::number(idd);
    query.prepare("Delete from CONTAINER where ID = :id");
    query.bindValue(":id", ID);
    return    query.exec();

}

QSqlQueryModel *Container::Get_Prodid()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT ID FROM ITEM");
        return model;
}

QSqlQueryModel *Container::Display()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from CONTAINER");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Alert"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Price Produits"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre Produits"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Flag"));
        return model;

}
