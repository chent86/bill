#ifndef BILL_H
#define BILL_H

#include <QMainWindow>
#include "../include/store.h"
#include "../include/find.h"
#include "../include/print.h"
#include "../include/database/database.hpp"
#include "../include/printer.hpp"

namespace Ui {
    class Bill;
}

class Bill : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bill(QWidget *parent = 0);
    void getTableInformation();
    void setTableInformation(form& form);
    ~Bill();

private slots:
    void store();
    void find();
    void print();
    void store_database();
    void print_database();
    void find_database();

private:
    Ui::Bill *ui;
    printer *m_printer;
    database *m_database;
    Store *store_tab;
    Find *find_tab;
    Print *print_tab;
    form m_form;
};

#endif // BILL_H
