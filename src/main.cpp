#include "../include/database/database.hpp"
#include "../include/printer.hpp"
#include <iostream>

int main() {
	cout << "test_printer" << endl;
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

  	printer m_printer("LAPTOP-SLG4Q8MV", "DASCOM");
  	m_printer.print(m_form);

  	cout << "test_database" << endl;
  	database m_database;
  	m_database.new_table("test");
  	m_database.insert(m_form, "test");
  	form new_form;
  	m_database.check(new_form, "test", "002");
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
}