#include "../include/printer.hpp"

printer::printer(string computer_name, string printer_name)
:computer_name(computer_name), printer_name(printer_name) {}

printer::~printer() {}

void printer::print(form& m_form) {

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
	system("PowerShell -Command \"& {get-content 1.txt -encoding utf8 | set-content 2.txt -encoding unicode}\"");
	string tmp = "print /d:\\\\" + computer_name + "\\" + printer_name + " 2.txt";
	system(tmp.c_str());
}