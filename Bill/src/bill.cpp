#include "include/bill.h"
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

    QObject::connect(ui->store, SIGNAL(triggered()),
                       this, SLOT(store()));

    QObject::connect(ui->find, SIGNAL(triggered()),
                       this, SLOT(find()));

    QObject::connect(ui->print, SIGNAL(triggered()),
                       this, SLOT(print()));
}

void Bill::store(){
    Store* store_tab = new Store;
    QObject::connect(store_tab, SIGNAL(store_exec()),
                       this, SLOT(store_database()));
    store_tab->show();
}

void Bill::store_database(){
    this->getTableInformation();
}

void Bill::find(){
    Find* find_tab = new Find;
    find_tab->show();
}

void Bill::print(){
    Print* print_tab = new Print;
    print_tab->show();
}

void Bill::getTableInformation(){
    m_form.id = ui->id_table->item(0, 1)->text().toStdString();

    m_form.id = ui->location_table->item(0, 1)->text().toStdString();

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

Bill::~Bill()
{
    delete ui;
}
