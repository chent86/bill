#ifndef STORE_H
#define STORE_H

#include <QDialog>
#include "defines.hpp"

namespace Ui {
class store;
}

class Store : public QDialog
{
    Q_OBJECT

signals:
    void store_exec();

public:
    explicit Store(QWidget *parent = 0);
    ~Store();

private:
    Ui::store *ui;
};

#endif // STORE_H
