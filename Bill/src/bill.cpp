#include "../include/bill.h"
#include "ui_bill.h"
#include <QPushButton>
#include <iostream>
using namespace std;

Bill::Bill(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Bill)
{
    ui->setupUi(this);

    //设置部分表格背景透明；
    ui->location_table->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->date_table->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->document_maker_table->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->consignee_table->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->id_table->setStyleSheet("background-color:rgba(0,0,0,0)");

    //设置各表格行列大小合理化
    ui->person_table->setColumnWidth(0, 50);
    ui->person_table->setColumnWidth(1, 350);
    ui->person_table->setColumnWidth(2, 50);
    
    ui->cargo_table->setColumnWidth(0, 80);
    ui->cargo_table->setColumnWidth(1, 120);
    ui->cargo_table->setColumnWidth(2, 60);
    ui->cargo_table->setColumnWidth(3, 85);
    ui->cargo_table->setColumnWidth(4, 85);

    ui->expense_table->setColumnWidth(2, 95);

    ui->payment_table->setColumnWidth(0, 120);
    ui->payment_table->setColumnWidth(1, 50);
    ui->payment_table->setColumnWidth(2, 30);
    ui->payment_table->setColumnWidth(3, 50);
    ui->payment_table->setColumnWidth(4, 30);
    ui->payment_table->setColumnWidth(5, 50);
    ui->payment_table->setColumnWidth(6, 30);
    ui->payment_table->setColumnWidth(7, 50);
    ui->payment_table->setColumnWidth(8, 30);
    ui->payment_table->setColumnWidth(9, 50);

    //菜单键3个信号槽设置
    QObject::connect(ui->store, SIGNAL(triggered()),
                       this, SLOT(store()));

    QObject::connect(ui->find, SIGNAL(triggered()),
                       this, SLOT(find()));

    QObject::connect(ui->print, SIGNAL(triggered()),
                       this, SLOT(print()));

    //初始化数据库和打印者
    m_database = new database;
    m_printer = new printer("i don't know", "i don't know", "i don't know");
}

void Bill::store(){
    this->store_tab = new Store;
    QObject::connect(store_tab, SIGNAL(store_exec()),
                       this, SLOT(store_database()));
    store_tab->show();
}

void Bill::find(){
    this->find_tab = new Find;
    QObject::connect(find_tab, SIGNAL(find_exec()),
                       this, SLOT(find_database()));
    find_tab->show();
}

void Bill::print(){
    this->print_tab = new Print;
    QObject::connect(print_tab, SIGNAL(print_exec()),
                       this, SLOT(print_database()));
    print_tab->show();
}

void Bill::store_database(){
    this->getTableInformation();
    m_database->insert(m_form, "bill");
}

void Bill::print_database(){
    this->getTableInformation();
    m_printer->print(m_form);
}

void Bill::find_database(){
    Bill *t_bill = new Bill;
    form t_form ;
    m_database->check(t_form, "bill", find_tab->getId());
    t_bill->setTableInformation(t_form);
    t_bill->show();
}

void Bill::getTableInformation(){
    m_form.id = ui->id_table->item(0, 1)->text().toStdString();

    m_form.location = ui->location_table->item(0, 1)->text().toStdString();

    m_form.date.year = ui->date_table->item(0, 1)->text().toStdString();
    m_form.date.month = ui->date_table->item(0, 3)->text().toStdString();
    m_form.date.day = ui->date_table->item(0, 5)->text().toStdString();

    m_form.receiver.company = ui->person_table->item(0, 1)->text().toStdString();
    m_form.receiver.landline_telephone = ui->person_table->item(0, 3)->text().toStdString();
    m_form.receiver.address = ui->person_table->item(1, 1)->text().toStdString();
    m_form.receiver.telephone = ui->person_table->item(1, 3)->text().toStdString();

    m_form.sender.company = ui->person_table->item(2, 1)->text().toStdString();
    m_form.sender.landline_telephone = ui->person_table->item(2, 3)->text().toStdString();
    m_form.sender.address = ui->person_table->item(3, 1)->text().toStdString();
    m_form.sender.telephone = ui->person_table->item(3, 3)->text().toStdString();

    m_form.cargo.number = ui->cargo_table->item(1, 0)->text().toStdString();
    m_form.cargo.name = ui->cargo_table->item(1, 1)->text().toStdString();
    m_form.cargo.type = ui->cargo_table->item(1, 2)->text().toStdString();
    m_form.cargo.weight = ui->cargo_table->item(1, 3)->text().toStdString();
    m_form.cargo.volume = ui->cargo_table->item(1, 4)->text().toStdString();
    m_form.cargo.price = ui->cargo_table->item(1, 5)->text().toStdString();

    m_form.note = ui->note_table->item(1, 0)->text().toStdString();

    m_form.expense.freight = ui->expense_table->item(1, 0)->text().toStdString();
    m_form.expense.shuttle = ui->expense_table->item(1, 1)->text().toStdString();
    m_form.expense.others = ui->expense_table->item(1, 2)->text().toStdString();
    m_form.expense.pick_up = ui->expense_table->item(1, 3)->text().toStdString();
    m_form.expense.insurance = ui->expense_table->item(1, 4)->text().toStdString();
    m_form.expense.total = ui->expense_table->item(1, 5)->text().toStdString();

    m_form.pay.wan = ui->payment_table->item(0, 1)->text().toStdString();
    m_form.pay.thousand = ui->payment_table->item(0, 3)->text().toStdString();
    m_form.pay.hundred = ui->payment_table->item(0, 5)->text().toStdString();
    m_form.pay.ten = ui->payment_table->item(0, 7)->text().toStdString();
    m_form.pay.yuan = ui->payment_table->item(0, 9)->text().toStdString();

    m_form.document_maker = ui->document_maker_table->item(0, 1)->text().toStdString();
    m_form.consignee = ui->consignee_table->item(0, 1)->text().toStdString();

}

void Bill::setTableInformation(form& t_form){
    ui->id_table->item(0, 1)->setText(QString::fromStdString(t_form.id));

    ui->location_table->item(0, 1)->setText(QString::fromStdString(t_form.location));

    ui->date_table->item(0, 1)->setText(QString::fromStdString(t_form.date.year));
    ui->date_table->item(0, 3)->setText(QString::fromStdString(t_form.date.month));
    ui->date_table->item(0, 5)->setText(QString::fromStdString(t_form.date.day));

    ui->person_table->item(0, 1)->setText(QString::fromStdString(t_form.receiver.company));
    ui->person_table->item(0, 3)->setText(QString::fromStdString(t_form.receiver.landline_telephone));
    ui->person_table->item(1, 1)->setText(QString::fromStdString(t_form.receiver.address));
    ui->person_table->item(1, 3)->setText(QString::fromStdString(t_form.receiver.telephone));

    ui->person_table->item(2, 1)->setText(QString::fromStdString(t_form.sender.company));
    ui->person_table->item(2, 3)->setText(QString::fromStdString(t_form.sender.landline_telephone));
    ui->person_table->item(3, 1)->setText(QString::fromStdString(t_form.sender.address));
    ui->person_table->item(3, 3)->setText(QString::fromStdString(t_form.sender.telephone));

    ui->cargo_table->item(1, 0)->setText(QString::fromStdString(t_form.cargo.number));
    ui->cargo_table->item(1, 1)->setText(QString::fromStdString(t_form.cargo.name));
    ui->cargo_table->item(1, 2)->setText(QString::fromStdString(t_form.cargo.type));
    ui->cargo_table->item(1, 3)->setText(QString::fromStdString(t_form.cargo.weight));
    ui->cargo_table->item(1, 4)->setText(QString::fromStdString(t_form.cargo.volume));
    ui->cargo_table->item(1, 5)->setText(QString::fromStdString(t_form.cargo.price));

    ui->note_table->item(1, 0)->setText(QString::fromStdString(t_form.note));

    ui->expense_table->item(1, 0)->setText(QString::fromStdString(t_form.expense.freight));
    ui->expense_table->item(1, 1)->setText(QString::fromStdString(t_form.expense.shuttle));
    ui->expense_table->item(1, 2)->setText(QString::fromStdString(t_form.expense.others));
    ui->expense_table->item(1, 3)->setText(QString::fromStdString(t_form.expense.pick_up));
    ui->expense_table->item(1, 4)->setText(QString::fromStdString(t_form.expense.insurance));
    ui->expense_table->item(1, 5)->setText(QString::fromStdString(t_form.expense.total));

    ui->payment_table->item(0, 1)->setText(QString::fromStdString(t_form.pay.wan));
    ui->payment_table->item(0, 3)->setText(QString::fromStdString(t_form.pay.thousand));
    ui->payment_table->item(0, 5)->setText(QString::fromStdString(t_form.pay.hundred));
    ui->payment_table->item(0, 7)->setText(QString::fromStdString(t_form.pay.ten));
    ui->payment_table->item(0, 9)->setText(QString::fromStdString(t_form.pay.yuan));

    ui->document_maker_table->item(0, 1)->setText(QString::fromStdString(t_form.document_maker));
    ui->consignee_table->item(0, 1)->setText(QString::fromStdString(t_form.consignee));
}

Bill::~Bill()
{
    delete ui;
}
