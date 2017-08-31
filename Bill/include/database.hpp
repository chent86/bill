#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "../include/defines.hpp"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

class database{
public:
    database();

    ~database();

    void new_table(string table_name);            //create table in the first time

    void insert(form& m_form, string table_name);   //save new form  table_name should be English

    void check(form& m_form, string table_name, string id);		 //check old form with id

private:
   QSqlDatabase db;
   QSqlQuery* query;
};

#endif
