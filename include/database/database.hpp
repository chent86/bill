#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <stdio.h>
#include "defines.hpp"
#include <string>
#include "sqlite3.h" 
using namespace std;

class database{
public:
	database();

	~database();

	void new_table(string table_name);            //create table in the first time

	void insert(form& m_form, string table_name);   //save new form  table_name should be English

	void check(form& m_form, string table_name, string id);		 //check old form with id

private:
   sqlite3 *db;
   char *zErrMsg;
   int rc;	
};

#endif