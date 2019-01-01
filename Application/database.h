#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

class DataBase
{
public:
    DataBase();
    bool Open_db();
    void Close_db();
private:
    QSqlDatabase MyDatabase;

};

#endif // DATABASE_H
