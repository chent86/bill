#include "../include/database.hpp"

string s;

int callback(void*para , int nCount, char** pValue, char** pName) {
    s = "";
    for(int i=0;i<nCount;i++){ 
          s+=pValue[i];  
    } 
    return 0; 
}

database::database() {
  rc = sqlite3_open("database.db", &db);
}

database::~database() {
  sqlite3_close(db);
}

void database::insert(form& m_form, string table_name) {
  const char *sql;
  string tmp = "insert into " + table_name + 
  "(id, location, date,"+

  "receiver_company, receiver_landline_telephone, receiver_address, receiver_telephone,"+
  "sender_company, sender_landline_telephone, sender_address, sender_telephone, "+

  "cargo_number, cargo_name, cargo_type, cargo_weight, cargo_volume, cargo_price, "+

  "note, freight, shuttle, others, pick_up, insurance, total,"+
  "wan, thousand, hundred, ten, yuan, document_maker, consignee)" + "values(" +
  m_form.id + ",'" + m_form.location + "','" + m_form.date.year + 
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
  rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
}

void database::check(form& m_form, string table_name, string id) {
  const char *sql[31];
  string tmp;

  tmp = "select id from "+table_name+" where id="+id+";";
  sql[0] = tmp.c_str();
  rc = sqlite3_exec(db, sql[0], callback, 0, &zErrMsg);
  m_form.id = s;

  tmp = "select location from "+table_name+" where id="+id+";";
  sql[1] = tmp.c_str();
  rc = sqlite3_exec(db, sql[1], callback, 0, &zErrMsg);
  m_form.location = s;

  tmp = "select date from "+table_name+" where id="+id+";";
  sql[2] = tmp.c_str();
  rc = sqlite3_exec(db, sql[2], callback, 0, &zErrMsg);
  m_form.date.year = s.substr(0,4);
  m_form.date.month = s.substr(4,2);
  m_form.date.day = s.substr(6,2);

  tmp = "select receiver_company from "+table_name+" where id="+id+";";
  sql[3] = tmp.c_str();
  rc = sqlite3_exec(db, sql[3], callback, 0, &zErrMsg);
  m_form.receiver.company = s;

  tmp = "select receiver_landline_telephone from "+table_name+" where id="+id+";";
  sql[4] = tmp.c_str();
  rc = sqlite3_exec(db, sql[4], callback, 0, &zErrMsg);
  m_form.receiver.landline_telephone = s;

  tmp = "select receiver_address from "+table_name+" where id="+id+";";
  sql[5] = tmp.c_str();
  rc = sqlite3_exec(db, sql[5], callback, 0, &zErrMsg);
  m_form.receiver.address = s;

  tmp = "select receiver_telephone from "+table_name+" where id="+id+";";
  sql[6] = tmp.c_str();
  rc = sqlite3_exec(db, sql[6], callback, 0, &zErrMsg);
  m_form.receiver.telephone = s;

  tmp = "select sender_company from "+table_name+" where id="+id+";";
  sql[7] = tmp.c_str();
  rc = sqlite3_exec(db, sql[7], callback, 0, &zErrMsg);
  m_form.sender.company= s;

  tmp = "select sender_landline_telephone from "+table_name+" where id="+id+";";
  sql[8] = tmp.c_str();
  rc = sqlite3_exec(db, sql[8], callback, 0, &zErrMsg);
  m_form.sender.landline_telephone= s;

  tmp = "select sender_address from "+table_name+" where id="+id+";";
  sql[9] = tmp.c_str();
  rc = sqlite3_exec(db, sql[9], callback, 0, &zErrMsg);
  m_form.sender.address= s;

  tmp = "select sender_telephone from "+table_name+" where id="+id+";";
  sql[10] = tmp.c_str();
  rc = sqlite3_exec(db, sql[10], callback, 0, &zErrMsg);
  m_form.sender.telephone= s;

  tmp = "select cargo_number from "+table_name+" where id="+id+";";
  sql[11] = tmp.c_str();
  rc = sqlite3_exec(db, sql[11], callback, 0, &zErrMsg);
  m_form.cargo.number = s;

  tmp = "select cargo_name from "+table_name+" where id="+id+";";
  sql[12] = tmp.c_str();
  rc = sqlite3_exec(db, sql[12], callback, 0, &zErrMsg);
  m_form.cargo.name = s;     

  tmp = "select cargo_type from "+table_name+" where id="+id+";";
  sql[13] = tmp.c_str();
  rc = sqlite3_exec(db, sql[13], callback, 0, &zErrMsg);
  m_form.cargo.type = s;   

  tmp = "select cargo_weight from "+table_name+" where id="+id+";";
  sql[14] = tmp.c_str();
  rc = sqlite3_exec(db, sql[14], callback, 0, &zErrMsg);
  m_form.cargo.weight = s;  

  tmp = "select cargo_volume from "+table_name+" where id="+id+";";
  sql[15] = tmp.c_str();
  rc = sqlite3_exec(db, sql[15], callback, 0, &zErrMsg);
  m_form.cargo.volume = s;  

  tmp = "select cargo_price from "+table_name+" where id="+id+";";
  sql[16] = tmp.c_str();
  rc = sqlite3_exec(db, sql[16], callback, 0, &zErrMsg);
  m_form.cargo.price = s; 

  tmp = "select note from "+table_name+" where id="+id+";";
  sql[17] = tmp.c_str();
  rc = sqlite3_exec(db, sql[17], callback, 0, &zErrMsg);
  m_form.note = s;  

  tmp = "select freight from "+table_name+" where id="+id+";";
  sql[18] = tmp.c_str();
  rc = sqlite3_exec(db, sql[18], callback, 0, &zErrMsg);
  m_form.expense.freight = s;

  tmp = "select shuttle from "+table_name+" where id="+id+";";
  sql[19] = tmp.c_str();
  rc = sqlite3_exec(db, sql[19], callback, 0, &zErrMsg);
  m_form.expense.shuttle = s;  

  tmp = "select others from "+table_name+" where id="+id+";";
  sql[20] = tmp.c_str();
  rc = sqlite3_exec(db, sql[20], callback, 0, &zErrMsg);
  m_form.expense.others = s;     

  tmp = "select pick_up from "+table_name+" where id="+id+";";
  sql[21] = tmp.c_str();
  rc = sqlite3_exec(db, sql[21], callback, 0, &zErrMsg);
  m_form.expense.pick_up = s; 

  tmp = "select insurance from "+table_name+" where id="+id+";";
  sql[22] = tmp.c_str();
  rc = sqlite3_exec(db, sql[22], callback, 0, &zErrMsg);
  m_form.expense.insurance = s; 

  tmp = "select total from "+table_name+" where id="+id+";";
  sql[23] = tmp.c_str();
  rc = sqlite3_exec(db, sql[23], callback, 0, &zErrMsg);
  m_form.expense.total = s;

  tmp = "select wan from "+table_name+" where id="+id+";";
  sql[24] = tmp.c_str();
  rc = sqlite3_exec(db, sql[24], callback, 0, &zErrMsg);
  m_form.pay.wan = s;

  tmp = "select thousand from "+table_name+" where id="+id+";";
  sql[25] = tmp.c_str();
  rc = sqlite3_exec(db, sql[25], callback, 0, &zErrMsg);
  m_form.pay.thousand = s;

  tmp = "select hundred from "+table_name+" where id="+id+";";
  sql[26] = tmp.c_str();
  rc = sqlite3_exec(db, sql[26], callback, 0, &zErrMsg);
  m_form.pay.hundred = s;

  tmp = "select ten from "+table_name+" where id="+id+";";
  sql[27] = tmp.c_str();
  rc = sqlite3_exec(db, sql[27], callback, 0, &zErrMsg);
  m_form.pay.ten = s;

  tmp = "select yuan from "+table_name+" where id="+id+";";
  sql[28] = tmp.c_str();
  rc = sqlite3_exec(db, sql[28], callback, 0, &zErrMsg);
  m_form.pay.yuan = s;

  tmp = "select document_maker from "+table_name+" where id="+id+";";
  sql[29] = tmp.c_str();
  rc = sqlite3_exec(db, sql[29], callback, 0, &zErrMsg);
  m_form.document_maker = s;

  tmp = "select consignee from "+table_name+" where id="+id+";";
  sql[30] = tmp.c_str();
  rc = sqlite3_exec(db, sql[30], callback, 0, &zErrMsg);
  m_form.consignee = s;

}

void database::new_table(string table_name) {
  const char *sql;
  string tmp;
  tmp = "CREATE TABLE "+table_name+
        "(id              INT         ,"+     //单号

        "location         TEXT        ,"+     //到达站

        "date             CHAR(8)     ,"+     //日期为字符串， 4+2+2

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
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);  
} 