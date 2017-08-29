#ifndef BILL_H
#define BILL_H

#include <QMainWindow>
#include "store.h"
#include "find.h"
#include "print.h"

namespace Ui {
    class Bill;
}

class Bill : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bill(QWidget *parent = 0);
    void getTableInformation();
    ~Bill();

private slots:
    void store();
    void find();
    void print();
    void store_database();

private:
    Ui::Bill *ui;
    Bill *find_tab;
    form m_form;
};

#endif // BILL_H
