#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <iostream>
#include "../include/database/database.hpp"
#include "../include/printer.hpp"
using namespace std;

class xhd{
public:
  xhd() 
  :m_printer("LAPTOP-SLG4Q8MV", "DASCOM") 
  {
    setlocale(LC_ALL, "");
    m_database.new_table("test");
  }
  void loop() {
    while(1) {
      wprintf(L"---------------------------------------------------------迅恒达---------------------------------------------------------\n");  
      wprintf(L"\n选项：\n");
      wprintf(L"输入1： 打单\n");
      wprintf(L"输入2： 查询\n");
      wprintf(L"输入3： 退出\n\n");
      wprintf(L"------------------------------------------------------------------------------------------------------------------------\n");
      int choice;
      cin >> choice;
      switch (choice){
        case 1: new_form();
                break;
        case 2: search();
                break;
        case 3: return;
        default:wprintf(L"请按指定要求输入\n");
                break;
      }       
    }
  }

  void new_form() {
    form m_form;
    wprintf(L"请输入:\n\n");
    wprintf(L"单号： ");
    cin >> m_form.id;
    wprintf(L"目的地:  ");
    cin >> m_form.location;
    wprintf(L"日期(格式-如2017年8月30日 写作 170830):  ");
    string tmp;
    cin >> tmp;
    string a = tmp.substr(0,2);
    string b = tmp.substr(2,2);
    string c = tmp.substr(04,2);
    string a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, d6, e1, e2, e3, e4, e5; 
    wprintf(L"收货人单位： ");
    cin >> a1;
    wprintf(L"收货人电话： ");
    cin >> a2;
    wprintf(L"收货人地址： ");
    cin >> a3;
    wprintf(L"收货人手机： ");
    cin >> a4;
    wprintf(L"发货人单位： ");
    cin >> b1;
    wprintf(L"发货人电话： ");
    cin >> b2;
    wprintf(L"发货人地址： ");
    cin >> b3;
    wprintf(L"发货人手机： ");
    cin >> b4;
    wprintf(L"货物件数： ");
    cin >> c1;
    wprintf(L"货物名称： ");
    cin >> c2;
    wprintf(L"货物包装： ");
    cin >> c3;
    wprintf(L"货物体积： ");
    cin >> c4;
    wprintf(L"货保价值： ");
    cin >> c5;
    wprintf(L"备注： ");
    cin >> m_form.note;
    wprintf(L"运费： ");
    cin >> d1;
    wprintf(L"送货费： ");
    cin >> d2;
    wprintf(L"其他费用： ");
    cin >> d3;
    wprintf(L"提货费： ");
    cin >> d4;
    wprintf(L"保险费： ");
    cin >> d5;
    wprintf(L"合计： ");
    cin >> d6;
    wprintf(L"合计（万）： ");
    cin >> e1;
    wprintf(L"合计（千）： ");
    cin >> e2;
    wprintf(L"合计（百）： ");
    cin >> e3;
    wprintf(L"合计（十）： ");
    cin >> e4;
    wprintf(L"合计（元）： ");
    cin >> e5;
    wprintf(L"制单人： ");
    cin >> m_form.document_maker;
    wprintf(L"提货人： ");
    cin >> m_form.consignee;

    m_form.date = {a, b, c};
    m_form.receiver = {a1, a2, a3, a4};
    m_form.sender = {b1, b2, b3, b4};
    m_form.cargo = {c1, c2, c3, c4, c5};
    m_form.expense = {d1, d2, d3, d4, d5, d6};
    m_form.pay = {e1, e2, e3, e4, e5};

    string flag;
    wprintf(L"是否保存？(y/n)");
    cin >> flag;
    if(flag == "y")
      save(m_form);
    wprintf(L"是否打印？(y/n)");
    cin >> flag;
    if(flag == "y")
      print(m_form);
  }

  void search() {
    wprintf(L"请输入需要查询的单号:  ");
    string id;
    cin >> id;
    form new_form;
    m_database.check(new_form, "test", id);
    std::ofstream file1("3.txt");
    file1 << new_form.id << endl;
    file1 << new_form.location << endl;
    file1 << new_form.date.year << endl;
    file1 << new_form.date.month << endl;
    file1 << new_form.date.day << endl;
    file1 << new_form.receiver.company << endl;
    file1 << new_form.receiver.landline_telephone << endl;
    file1 << new_form.receiver.address << endl;
    file1 << new_form.receiver.telephone << endl;
    file1 << new_form.sender.company << endl;
    file1 << new_form.sender.landline_telephone << endl;
    file1 << new_form.sender.address << endl;
    file1 << new_form.sender.telephone << endl;
    file1 << new_form.cargo.number << endl;
    file1 << new_form.cargo.name << endl;
    file1 << new_form.cargo.type << endl;
    file1 << new_form.cargo.weight << endl;
    file1 << new_form.cargo.volume << endl;
    file1 << new_form.cargo.price << endl;
    file1 << new_form.note << endl;
    file1 << new_form.expense.freight << endl;
    file1 << new_form.expense.shuttle << endl;
    file1 << new_form.expense.others << endl;
    file1 << new_form.expense.pick_up << endl;
    file1 << new_form.expense.insurance << endl;
    file1 << new_form.expense.total << endl;
    file1 << new_form.pay.wan << endl;
    file1 << new_form.pay.thousand << endl;
    file1 << new_form.pay.hundred << endl;
    file1 << new_form.pay.ten << endl;
    file1 << new_form.pay.yuan << endl;
    file1 << new_form.document_maker << endl;
    file1 << new_form.consignee << endl;
    file1.close();
    wprintf(L"内容已保存到记事本中\n");
    wprintf(L"是否打印？(y/n)");
    string flag;
    cin >> flag;
    if(flag == "y")
      print(new_form);
  }
  void save(form& m_form){
    m_database.insert(m_form, "test");
  }

  void print(form& m_form){
    m_printer.print(m_form);
  }
private:
  printer m_printer;
  database m_database;
};

int main() {
  xhd test;
  test.loop();
}
// #include "../include/database/database.hpp"
// #include "../include/printer.hpp"
// #include <iostream>

// int main() {
// 	cout << "test_printer" << endl;
// 	form m_form;
//   	m_form.id = "002";
//   	m_form.location = "深圳";
//   	m_form.date = {"17", "08","15"};
//   	m_form.receiver = {"达康书记有限公司", "2121212", "京州", "138138138"};
//   	m_form.sender = {"陈涛股份有限公司", "0101010", "深圳" , "136136136"};
//   	m_form.cargo = {"1", "魔剑", "纸包", "1", "0.33", "1000" };
//   	m_form.note = "开个玩笑";
//   	m_form.expense = {"1", "10", "100", "1000", "10000", "100000"};
//   	m_form.pay = {"9", "9", "9", "9", "9"};
//   	m_form.document_maker = "陈涛";
//   	m_form.consignee = "李达康";

//   	printer m_printer("LAPTOP-SLG4Q8MV", "DASCOM");
//   	m_printer.print(m_form);

//   	cout << "test_database" << endl;
//   	database m_database;
//   	m_database.new_table("test");
//   	m_database.insert(m_form, "test");
//   	form new_form;
//   	m_database.check(new_form, "test", "002");
//   	std::ofstream file1("3.txt");
//     file1 << new_form.id << endl;
//     file1 << new_form.location << endl;
//     file1 << new_form.date.year << endl;
//     file1 << new_form.date.month << endl;
//     file1 << new_form.date.day << endl;
//     file1 << new_form.receiver.company << endl;
//     file1 << new_form.receiver.landline_telephone << endl;
//     file1 << new_form.receiver.address << endl;
//     file1 << new_form.receiver.telephone << endl;
//     file1 << new_form.sender.company << endl;
//     file1 << new_form.sender.landline_telephone << endl;
//     file1 << new_form.sender.address << endl;
//     file1 << new_form.sender.telephone << endl;
//     file1 << new_form.cargo.number << endl;
//     file1 << new_form.cargo.name << endl;
//     file1 << new_form.cargo.type << endl;
//     file1 << new_form.cargo.weight << endl;
//     file1 << new_form.cargo.volume << endl;
//     file1 << new_form.cargo.price << endl;
//     file1 << new_form.note << endl;
//     file1 << new_form.expense.freight << endl;
//     file1 << new_form.expense.shuttle << endl;
//     file1 << new_form.expense.others << endl;
//     file1 << new_form.expense.pick_up << endl;
//     file1 << new_form.expense.insurance << endl;
//     file1 << new_form.expense.total << endl;
//     file1 << new_form.pay.wan << endl;
//     file1 << new_form.pay.thousand << endl;
//     file1 << new_form.pay.hundred << endl;
//     file1 << new_form.pay.ten << endl;
//     file1 << new_form.pay.yuan << endl;
//     file1 << new_form.document_maker << endl;
//     file1 << new_form.consignee << endl;
//     file1.close();
// }