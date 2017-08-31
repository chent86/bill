#include "../include/database.hpp"
#include <iostream>
using namespace std;

database::database() {
    if(QSqlDatabase::contains("BILL")){
       db = QSqlDatabase::database("BILL");
    }
    else{
       db = QSqlDatabase::addDatabase("QSQLITE", "BILL");
    }
    db.setDatabaseName("bill.db");
    db.open();
    query = new QSqlQuery(db);
    this->new_table("bill");
}

database::~database() {
}

void database::insert(form& m_form, string table_name) {
  const char *sql;
  string tmp = "insert into " + table_name + 
  "(id, location, date,"+

  "receiver_company, receiver_landline_telephone, receiver_address, receiver_telephone,"+
  "sender_company, sender_landline_telephone, sender_address, sender_telephone, "+

  "cargo_number, cargo_name, cargo_type, cargo_weight, cargo_volume, cargo_price, "+

  "note, freight, shuttle, others, pick_up, insurance, total,"+
  "wan, thousand, hundred, ten, yuan, document_maker, consignee)" + "values('" +
  m_form.id + "','" + m_form.location + "','" + m_form.date.year + 
  m_form.date.month + m_form.date.day + "','" +
  m_form.receiver.company + "','" + m_form.receiver.landline_telephone + "','"+
  m_form.receiver.address + "','" + m_form.receiver.telephone+ "','" +
  m_form.sender.company + "','" + m_form.sender.landline_telephone + "','" + 
  m_form.sender.address + "','" + m_form.sender.telephone + "','" + 
  m_form.cargo.number + "','"   + m_form.cargo.name + "','" + 
  m_form.cargo.type + "','" + m_form.cargo.weight + "','" + 
  m_form.cargo.volume + "','" + m_form.cargo.price + "','" + m_form.note + "','" + 
  m_form.expense.freight + "','" + m_form.expense.shuttle + "','" + 
  m_form.expense.others + "','" + m_form.expense.pick_up + "','" + 
  m_form.expense.insurance + "','" + m_form.expense.total + "'," +
  m_form.pay.wan + "," + m_form.pay.thousand + "," + 
  m_form.pay.hundred + "," + m_form.pay.ten + "," + 
  m_form.pay.yuan+ ",'" + m_form.document_maker + "','" + m_form.consignee + "');";

  sql = tmp.c_str();

  query->exec(sql);
}

void database::check(form& m_form, string table_name, string id) {
  const char *sql[31];
  string tmp;
  string s;

  tmp = "select id from "+table_name+" where id = '"+id+"'";
  sql[0] = tmp.c_str();
  query->exec(sql[0]);
  query->first();
  m_form.id = query->value(0).toString().toStdString();

  tmp = "select location from "+table_name+" where id='"+id+"';";
  sql[1] = tmp.c_str();
  query->exec(sql[1]);
  query->first();
  m_form.location = query->value(0).toString().toStdString();

  tmp = "select date from "+table_name+" where id='"+id+"';";
  sql[2] = tmp.c_str();
  query->exec(sql[2]);
  query->first();
  s = query->value(0).toString().toStdString();
  m_form.date.year = s.substr(0,2);
  m_form.date.month = s.substr(2,2);
  m_form.date.day = s.substr(4,2);

  tmp = "select receiver_company from "+table_name+" where id='"+id+"';";
  sql[3] = tmp.c_str();
  query->exec(sql[3]);
  query->first();
  m_form.receiver.company = query->value(0).toString().toStdString();

  tmp = "select receiver_landline_telephone from "+table_name+" where id='"+id+"';";
  sql[4] = tmp.c_str();
  query->exec(sql[4]);
  query->first();
  m_form.receiver.landline_telephone = query->value(0).toString().toStdString();

  tmp = "select receiver_address from "+table_name+" where id='"+id+"';";
  sql[5] = tmp.c_str();
  query->exec(sql[5]);
  query->first();
  m_form.receiver.address = query->value(0).toString().toStdString();

  tmp = "select receiver_telephone from "+table_name+" where id='"+id+"';";
  sql[6] = tmp.c_str();
  query->exec(sql[6]);
  query->first();
  m_form.receiver.telephone = query->value(0).toString().toStdString();

  tmp = "select sender_company from "+table_name+" where id='"+id+"';";
  sql[7] = tmp.c_str();
  query->exec(sql[7]);
  query->first();
  m_form.sender.company = query->value(0).toString().toStdString();

  tmp = "select sender_landline_telephone from "+table_name+" where id='"+id+"';";
  sql[8] = tmp.c_str();
  query->exec(sql[8]);
  query->first();
  m_form.sender.landline_telephone = query->value(0).toString().toStdString();

  tmp = "select sender_address from "+table_name+" where id='"+id+"';";
  sql[9] = tmp.c_str();
  query->exec(sql[9]);
  query->first();
  m_form.sender.address = query->value(0).toString().toStdString();

  tmp = "select sender_telephone from "+table_name+" where id='"+id+"';";
  sql[10] = tmp.c_str();
  query->exec(sql[10]);
  query->first();
  m_form.sender.telephone = query->value(0).toString().toStdString();

  tmp = "select cargo_number from "+table_name+" where id='"+id+"';";
  sql[11] = tmp.c_str();
  query->exec(sql[11]);
  query->first();
  m_form.cargo.number = query->value(0).toString().toStdString();

  tmp = "select cargo_name from "+table_name+" where id='"+id+"';";
  sql[12] = tmp.c_str();
  query->exec(sql[12]);
  query->first();
  m_form.cargo.name = query->value(0).toString().toStdString();

  tmp = "select cargo_type from "+table_name+" where id='"+id+"';";
  sql[13] = tmp.c_str();
  query->exec(sql[13]);
  query->first();
  m_form.cargo.type = query->value(0).toString().toStdString();

  tmp = "select cargo_weight from "+table_name+" where id='"+id+"';";
  sql[14] = tmp.c_str();
  query->exec(sql[14]);
  query->first();
  m_form.cargo.weight = query->value(0).toString().toStdString();

  tmp = "select cargo_volume from "+table_name+" where id='"+id+"';";
  sql[15] = tmp.c_str();
  query->exec(sql[15]);
  query->first();
  m_form.cargo.volume = query->value(0).toString().toStdString();

  tmp = "select cargo_price from "+table_name+" where id='"+id+"';";
  sql[16] = tmp.c_str();
  query->exec(sql[16]);
  query->first();
  m_form.cargo.price = query->value(0).toString().toStdString();

  tmp = "select note from "+table_name+" where id='"+id+"';";
  sql[17] = tmp.c_str();
  query->exec(sql[17]);
  query->first();
  m_form.note = query->value(0).toString().toStdString();

  tmp = "select freight from "+table_name+" where id='"+id+"';";
  sql[18] = tmp.c_str();
  query->exec(sql[18]);
  query->first();
  m_form.expense.freight = query->value(0).toString().toStdString();

  tmp = "select shuttle from "+table_name+" where id='"+id+"';";
  sql[19] = tmp.c_str();
  query->exec(sql[19]);
  query->first();
  m_form.expense.shuttle = query->value(0).toString().toStdString();

  tmp = "select others from "+table_name+" where id='"+id+"';";
  sql[20] = tmp.c_str();
  query->exec(sql[20]);
  query->first();
  m_form.expense.others = query->value(0).toString().toStdString();

  tmp = "select pick_up from "+table_name+" where id='"+id+"';";
  sql[21] = tmp.c_str();
  query->exec(sql[21]);
  query->first();
  m_form.expense.pick_up = query->value(0).toString().toStdString();

  tmp = "select insurance from "+table_name+" where id='"+id+"';";
  sql[22] = tmp.c_str();
  query->exec(sql[22]);
  query->first();
  m_form.expense.insurance = query->value(0).toString().toStdString();

  tmp = "select total from "+table_name+" where id='"+id+"';";
  sql[23] = tmp.c_str();
  query->exec(sql[23]);
  query->first();
  m_form.expense.total = query->value(0).toString().toStdString();

  tmp = "select wan from "+table_name+" where id='"+id+"';";
  sql[24] = tmp.c_str();
  query->exec(sql[24]);
  query->first();
  m_form.pay.wan = query->value(0).toString().toStdString();

  tmp = "select thousand from "+table_name+" where id='"+id+"';";
  sql[25] = tmp.c_str();
  query->exec(sql[25]);
  query->first();
  m_form.pay.thousand = query->value(0).toString().toStdString();

  tmp = "select hundred from "+table_name+" where id='"+id+"';";
  sql[26] = tmp.c_str();
  query->exec(sql[26]);
  query->first();
  m_form.pay.hundred = query->value(0).toString().toStdString();

  tmp = "select ten from "+table_name+" where id='"+id+"';";
  sql[27] = tmp.c_str();
  query->exec(sql[27]);
  query->first();
  m_form.pay.ten = query->value(0).toString().toStdString();

  tmp = "select yuan from "+table_name+" where id='"+id+"';";
  sql[28] = tmp.c_str();
  query->exec(sql[28]);
  query->first();
  m_form.pay.yuan = query->value(0).toString().toStdString();

  tmp = "select document_maker from "+table_name+" where id='"+id+"';";
  sql[29] = tmp.c_str();
  query->exec(sql[29]);
  query->first();
  m_form.document_maker = query->value(0).toString().toStdString();

  tmp = "select consignee from "+table_name+" where id='"+id+"';";
  sql[30] = tmp.c_str();
  query->exec(sql[30]);
  query->first();
  m_form.consignee = query->value(0).toString().toStdString();

}

void database::new_table(string table_name) {
  const char *sql;
  string tmp;
  tmp = "CREATE TABLE "+table_name+
        "(id              TEXT         ,"+     //单号

        "location         TEXT        ,"+     //到达站

        "date             CHAR(6)     ,"+     //日期为字符串， 2+2+2

        "receiver_company             TEXT       ,"+
        "receiver_landline_telephone  char(15)   ,"+
        "receiver_address             TEXT       ,"+
        "receiver_telephone           char(15)   ,"+

        "sender_company               TEXT       ,"+
        "sender_landline_telephone    char(15)   ,"+
        "sender_address               TEXT       ,"+
        "sender_telephone             char(15)   ,"+

        "cargo_number     TEXT      ,"+
        "cargo_name       TEXT      ,"+
        "cargo_type       TEXT      ,"+
        "cargo_weight     TEXT      ,"+
        "cargo_volume     TEXT      ,"+      //货物信息
        "cargo_price      TEXT      ,"+

        "note             TEXT      ,"+

        "freight          TEXT      ,"+
        "shuttle          TEXT      ,"+
        "others           TEXT      ,"+      //费目
        "pick_up          TEXT      ,"
        "insurance        TEXT      ,"+
        "total            TEXT      ,"+ 

        "wan              INT       ,"+
        "thousand         INT       ,"+
        "hundred          INT       ,"+
        "ten              INT       ,"+      //费目
        "yuan             INT       ,"+

        "document_maker   TEXT      ,"+

        "consignee        TEXT     );";
    sql = tmp.c_str();
    query->exec(sql);
} 
