#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include "sqlite3.h" 
using namespace std;
struct form {

  struct Date {
    string year;
    string month;
    string day;
  };

  struct Person {
    string company;    //公司
    string landline_telephone;    //固定电话
    string address;   //单位地址
    string telephone;    //手机
  };
  
  struct Cargo{
    string number;     //货物件数
    string name;       //货物名称
    string type;       //包装类型
    string weight;     //重量
    string volume;     //体积
    string price;      //货保价值
  };

  struct Expense{
    string freight;    //运费
    string shuttle;    //送货费
    string others;     //其他费用
    string pick_up;    //提货费
    string insurance;  //保险费
    string total;      //合计
  };

  struct Total_payment{
    string wan;           //万
    string thousand;      //千
    string hundred;       //百
    string ten;           //十
    string yuan;          //元   
  };
  
  string id;           //单号

  string location;  //到达站

  Date date;       //日期

  Person receiver;       //收货人

  Person sender;     //发货人

  Cargo cargo;   //货物信息

  string note;         //备注

  Expense expense;   //费用（元）

  Total_payment pay;   //运费合计

  string document_maker;  //制单人

  string consignee;     //提货人

};

string s;
int callback(void*para , int nCount, char** pValue, char** pName) {
    s = "";
    for(int i=0;i<nCount;i++){ 
          s+=pValue[i];  
    } 
    return 0; 
}

class database {
public:
  database() {
    rc = sqlite3_open("database.db", &db);
  }
  ~database() {
    cout << "bye!" << endl;
    sqlite3_close(db);
  }
  void new_table() {
  const char *sql;
  string tmp;
  string table_name = "test2";
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
  void add() {
  form m_form;
  m_form.id = "002";
  m_form.location = "深圳市宝安区";
  m_form.date = {"17", "08","15"};
  m_form.receiver = {"达康书记有限公司", "2121212", "京州", "138138138"};
  m_form.sender = {"陈涛股份有限公司", "0101010", "深圳" , "136136136"};
  m_form.cargo = {"1", "魔剑阿波菲斯", "纸包装", "1吨", "0.33立方米", "1亿" };
  m_form.note = "开个玩笑";
  m_form.expense = {"1", "10", "100", "1000", "10000", "100000"};
  m_form.pay = {"9", "9", "9", "9", "9"};
  m_form.document_maker = "陈涛";
  m_form.consignee = "李达康";

  const char *sql;
  string table_name = "test2";
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
    m_form.pay.yuan + ",'" + m_form.document_maker + "','" + m_form.consignee + "');";

  sql = tmp.c_str();
  rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
  }
  void check(){
    form m_form;
    const char *sql[31];
    string id = "2";
    string table_name = "test2";
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

 //   return m_form;
    std::ofstream file1("1.txt");
    file1 << m_form.id << endl;
    file1 << m_form.location << endl;
    file1 << m_form.date.year << endl;
    file1 << m_form.date.month << endl;
    file1 << m_form.date.day << endl;
    file1 << m_form.receiver.company << endl;
    file1 << m_form.receiver.landline_telephone << endl;
    file1 << m_form.receiver.address << endl;
    file1 << m_form.receiver.telephone << endl;
    file1 << m_form.sender.company << endl;
    file1 << m_form.sender.landline_telephone << endl;
    file1 << m_form.sender.address << endl;
    file1 << m_form.sender.telephone << endl;
    file1 << m_form.cargo.number << endl;
    file1 << m_form.cargo.name << endl;
    file1 << m_form.cargo.type << endl;
    file1 << m_form.cargo.weight << endl;
    file1 << m_form.cargo.volume << endl;
    file1 << m_form.cargo.price << endl;
    file1 << m_form.note << endl;
    file1 << m_form.expense.freight << endl;
    file1 << m_form.expense.shuttle << endl;
    file1 << m_form.expense.others << endl;
    file1 << m_form.expense.pick_up << endl;
    file1 << m_form.expense.insurance << endl;
    file1 << m_form.expense.total << endl;
    file1 << m_form.pay.wan << endl;
    file1 << m_form.pay.thousand << endl;
    file1 << m_form.pay.hundred << endl;
    file1 << m_form.pay.ten << endl;
    file1 << m_form.pay.yuan << endl;
    file1 << m_form.document_maker << endl;
    file1 << m_form.consignee << endl;
    file1.close();
  }
  void loop() {
    int c;
    while(1) {
      cout << "-----------------------------\n" <<
              "name & age\n" <<
              "1 to add new table\n" <<
              "2 to insert information\n" <<
              "3 to check information\n" <<
              "4 to quit\n" <<
              "-----------------------------\n";
      cin >> c;
      switch(c) {
        case 1:new_table();
               break;
        case 2:add();
               break;
        case 3:check();
               break;
        case 4:return;
               break;
        default:cout << "\nplease enter again!" << endl;
      }
    }
  }
private:
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
};
int main() {
  database a;
  a.loop();

}
//gcc -shared sqlite3.c -o sqlite3.dll  win下链接
//gcc 1.cpp -lstdc++ sqlite3.c          win下编译  

//g++ 1.cpp -l sqlite3                  linux下编译