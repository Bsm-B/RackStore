#include "database.h"

DataBase::DataBase()
{

}

bool DataBase::Open_db()
{
    bool Test(false);
    MyDatabase = QSqlDatabase::addDatabase("QODBC");
    MyDatabase.setDatabaseName("RACK");
    MyDatabase.setUserName("ad1");
    MyDatabase.setPassword("rackteam001");
    if (MyDatabase.open()) Test=true;
    return  Test;
}

void DataBase::Close_db()
{
    MyDatabase.close();
}
