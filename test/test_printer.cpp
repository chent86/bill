#include <string>
#include <iostream>
#include <fstream>
#include <vector>
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
int main() {
  form m_form;
  m_form.id = "002";
  m_form.location = "深圳";
  m_form.date = {"17", "08","15"};
  m_form.receiver = {"达康书记有限公司", "2121212", "京州", "138138138"};
  m_form.sender = {"陈涛股份有限公司", "0101010", "深圳" , "136136136"};
  m_form.cargo = {"1", "魔剑", "纸包", "1", "0.33", "1000" };
  m_form.note = "开个玩笑";
  m_form.expense = {"1", "10", "100", "1000", "10000", "100000"};
  m_form.pay = {"9", "9", "9", "9", "9"};
  m_form.document_maker = "陈涛";
  m_form.consignee = "李达康";
  std::ofstream file("1.txt");
  string p_location = "        ";
  string p_date = "      00    00   00";

  string p_receiver_company = "                                            ";
  string p_receiver_landline_telephone = "                    ";
    string p_receiver_address = "                                            ";
    string p_receiver_telephone = "                    ";

  string p_sender_company = "                                            ";
  string p_sender_landline_telephone = "                    ";
    string p_sender_address = "                                            ";
    string p_sender_telephone = "                    ";

    string p_note = "                  ";

    string p_cargo_number = "      ";
    string p_cargo_name = "              ";
    string p_cargo_type = "      ";
    string p_cargo_weight = "      ";
    string p_cargo_volume = "        ";
    string p_cargo_price = "      ";

    string p_expense_freight = "        ";
    string p_expense_shuttle = "        ";
    string p_expense_others = "        ";
    string p_expense_pick_up = "      ";
    string p_expense_insurance = "      ";
    string p_expense_total = "        ";

    string p_pay_wan = "      ";
    string p_pay_thousand = "      ";
    string p_pay_hundred = "      ";
    string p_pay_ten = "      ";
    string p_pay_yuan = "      ";

    string p_document_maker = "                ";
    string p_consignee = "                          ";

    p_location = m_form.location + p_location.substr(0,p_location.length()-m_form.location.size());

    p_date[6] = m_form.date.year[0];
    p_date[7] = m_form.date.year[1];

    p_date[12] = m_form.date.month[0];
    p_date[13] = m_form.date.month[1];

    p_date[17] = m_form.date.day[0];
    p_date[18] = m_form.date.day[1];

    p_receiver_company = m_form.receiver.company + p_receiver_company.substr(0,p_receiver_company.length()-m_form.receiver.company.length());
    p_receiver_landline_telephone = m_form.receiver.landline_telephone + p_receiver_landline_telephone.substr(0,p_receiver_landline_telephone.length()-m_form.receiver.landline_telephone.length()); 
    p_receiver_address = m_form.receiver.address + p_receiver_address.substr(0,p_receiver_address.length()-m_form.receiver.address.length());
    p_receiver_telephone = m_form.receiver.telephone + p_receiver_telephone.substr(0,p_receiver_telephone.length()-m_form.receiver.telephone.length());

    p_sender_company = m_form.sender.company + p_sender_company.substr(0,p_sender_company.length()-m_form.sender.company.length());
    p_sender_landline_telephone = m_form.sender.landline_telephone + p_sender_landline_telephone.substr(0,p_sender_landline_telephone.length()-m_form.sender.landline_telephone.length()); 
    p_sender_address = m_form.sender.address + p_sender_address.substr(0,p_sender_address.length()-m_form.sender.address.length());
    p_sender_telephone = m_form.sender.telephone + p_sender_telephone.substr(0,p_sender_telephone.length()-m_form.sender.telephone.length());

    p_note = m_form.note + p_note.substr(0,p_note.length()-m_form.note.length());

    p_cargo_number = m_form.cargo.number + p_cargo_number.substr(0,p_cargo_number.length()-m_form.cargo.number.length());
    p_cargo_name = m_form.cargo.name + p_cargo_name.substr(0,p_cargo_name.length()-m_form.cargo.name.length());
    p_cargo_type = m_form.cargo.type + p_cargo_type.substr(0,p_cargo_type.length()-m_form.cargo.type.length());
    p_cargo_weight = m_form.cargo.weight + p_cargo_weight.substr(0,p_cargo_weight.length()-m_form.cargo.weight.length());
    p_cargo_volume = m_form.cargo.volume + p_cargo_volume.substr(0,p_cargo_volume.length()-m_form.cargo.volume.length());
    p_cargo_price = m_form.cargo.price + p_cargo_price.substr(0,p_cargo_price.length()-m_form.cargo.price.length());  

    p_expense_freight = m_form.expense.freight + p_expense_freight.substr(0,p_expense_freight.length()-m_form.expense.freight.length());
    p_expense_shuttle = m_form.expense.shuttle + p_expense_shuttle.substr(0,p_expense_shuttle.length()-m_form.expense.shuttle.length());
    p_expense_others = m_form.expense.others + p_expense_others.substr(0,p_expense_others.length()-m_form.expense.others.length());
    p_expense_pick_up = m_form.expense.pick_up + p_expense_pick_up.substr(0,p_expense_pick_up.length()-m_form.expense.pick_up.length());
    p_expense_insurance = m_form.expense.insurance + p_expense_insurance.substr(0,p_expense_insurance.length()-m_form.expense.insurance.length());
    p_expense_total = m_form.expense.total + p_expense_total.substr(0,p_expense_total.length()-m_form.expense.total.length());

    p_pay_wan = m_form.pay.wan + p_pay_wan.substr(0,p_pay_wan.length()-m_form.pay.wan.length());
    p_pay_thousand = m_form.pay.thousand + p_pay_thousand.substr(0,p_pay_thousand.length()-m_form.pay.thousand.length());
    p_pay_hundred = m_form.pay.hundred + p_pay_hundred.substr(0,p_pay_hundred.length()-m_form.pay.hundred.length());
    p_pay_ten = m_form.pay.ten + p_pay_ten.substr(0,p_pay_ten.length()-m_form.pay.ten.length());
    p_pay_yuan = m_form.pay.yuan + p_pay_yuan.substr(0,p_pay_yuan.length()-m_form.pay.yuan.length());

    p_document_maker = m_form.document_maker + p_document_maker.substr(0,p_document_maker.length()-m_form.document_maker.length());
    p_consignee = m_form.consignee + p_consignee.substr(0,p_consignee.length()-m_form.consignee.length());

  std::vector<string> format;
  format.push_back("\n\n\n\n\n\n                  ");
  format.push_back(p_location);
  format.push_back("                                                     ");
  format.push_back(p_date);
  format.push_back("\n\n                        ");
  format.push_back(p_receiver_company);
  format.push_back("                        ");
  format.push_back(p_receiver_landline_telephone);
  format.push_back("\n                        ");
  format.push_back(p_receiver_address);
  format.push_back("                  ");
  format.push_back(p_receiver_telephone);
  format.push_back("\n\n                        ");
  format.push_back(p_sender_company);
  format.push_back("                        ");
  format.push_back(p_sender_landline_telephone);
  format.push_back("\n\n                        ");
  format.push_back(p_sender_address);
  format.push_back("                  ");
  format.push_back(p_sender_telephone);
  format.push_back("\n\n\n                                                                               ");
  format.push_back(p_note);
  format.push_back("\n    ");
  format.push_back(p_cargo_number);
  format.push_back("    ");
  format.push_back(p_cargo_name);
  format.push_back("    ");
  format.push_back(p_cargo_type);
  format.push_back("     ");
  format.push_back(p_cargo_weight);
  format.push_back("      ");
  format.push_back(p_cargo_volume);
  format.push_back("      ");
  format.push_back(p_cargo_price);
  format.push_back("\n\n\n\n     ");
  format.push_back(p_expense_freight);
  format.push_back("    ");
  format.push_back(p_expense_shuttle);
  format.push_back("    ");
  format.push_back(p_expense_others);
  format.push_back("    ");
  format.push_back(p_expense_pick_up);
  format.push_back("      ");
  format.push_back(p_expense_insurance);
  format.push_back("     ");
  format.push_back(p_expense_total);
  format.push_back("\n\n                  ");
  format.push_back(p_pay_wan);
  format.push_back("      ");
  format.push_back(p_pay_thousand);
  format.push_back("    ");
  format.push_back(p_pay_hundred);
  format.push_back("    ");
  format.push_back(p_pay_ten);
  format.push_back("    ");
  format.push_back(p_pay_yuan);
  format.push_back("\n\n\n\n\n\n\n\n              ");
  format.push_back(p_document_maker);
  format.push_back("                  ");
  format.push_back(p_consignee);

  for(int i = 0; i < format.size(); i++)
    file << format[i];    

  file.close();
  string computer_name = "LAPTOP-SLG4Q8MV";
  string printer_name = "DASCOM";
  system("PowerShell -Command \"& {get-content 1.txt -encoding utf8 | set-content 2.txt -encoding unicode}\"");
  //string tmp = "print /d:\\\\" + computer_name + "\\" + printer_name + " 2.txt";
  //system(tmp.c_str());
}