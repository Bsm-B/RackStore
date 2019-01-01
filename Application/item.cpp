#include "item.h"

Item::Item()
{
    this->Id = 0;
    this->Code = "";
    this->Name = "";
    this->Price = 0;
    this->Quantity = 0;
    this->Date = QDate::currentDate().toString();
}

Item::Item(int id, QString code, QString name, float price, int qnt, QString date)
{
    this->Id = id;
    this->Code = code;
    this->Name = name;
    this->Price = price;
    this->Quantity = qnt;
    this->Date = date;
}


QSqlQueryModel * Item::Display(){

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from item");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date"));
        return model;
}

bool Item::Update()
{
    QSqlQuery query;
    QString StrID = QString::number(Id);
    query.prepare("UPDATE ITEM SET "
                    " \"Code\" = :code,  \"Name\" = :name,"
                     " \"Price\"= :price, \"Quantity\" = :quantity,"
                    "\"Date\" = :date"
                    " where ID = "+ StrID );

    query.bindValue(":code", Code);
    query.bindValue(":name", Name);
    query.bindValue(":price", QString::number(Price));
    query.bindValue(":quantity", QString::number(Quantity));
    query.bindValue(":date",Date);
    return query.exec();

}

bool Item::Check(int idd)
{
    QSqlQuery test;
    test.prepare("select ID from Item where ID = :search");
    test.bindValue(":search", QString::number(idd));
    return test.exec();
}

bool Item::Add(){

    QSqlQuery query;
    query.prepare("INSERT INTO ITEM (\"Code\",\"Name\",\"Price\",\"Quantity\",\"Date\")"
                        "VALUES (:id, :code, :name, :type, :price, :quantity, :date)");

    query.bindValue(":code", Code);
    query.bindValue(":name", Name);
    query.bindValue(":price", QString::number(Price));
    query.bindValue(":quantity", QString::number(Quantity));
    query.bindValue(":date",Date);

    return query.exec();
}


bool Item::Delete(int idd){

    QSqlQuery query;
    QString ID = QString::number(idd);
    query.prepare("Delete from Item where ID = :id ");
    query.bindValue(":id", ID);
    return    query.exec();
}


int Item::Get_Count()
{
    QSqlQuery query;
    int result(0);
    query.prepare("select count(id) from item");
    if (query.exec())
    {
        while (query.next())
        {
             result = query.value(0).toInt();
             return  result;
        }
    }

        return  result;
}


int Item::Get_Sum()
{
    QSqlQuery query;
    int result(0);
    query.prepare("select sum(\"Price\") from item");
    if (query.exec())
    {
        while (query.next())
        {
             result = query.value(0).toInt();
             return  result;
        }
    }

        return  result;
}

int Item::Get_Qtn()
{
    QSqlQuery query;
    int result(0);
    query.prepare("select sum(\"Quantity\") from item");
    if (query.exec())
    {
        while (query.next())
        {
             result = query.value(0).toInt();
             return  result;
        }
    }

        return  result;
}


QSqlQueryModel * Item::DisplayID()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ITEM  ORDER BY ID");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}


QSqlQueryModel * Item::Search(int i,QString n){

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ITEM Where ID = " + QString::number(i)+ "OR \"Code\" = '"+ n+ "'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Price"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date"));
        return model;
}



