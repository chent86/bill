#ifndef PRINT_H
#define PRINT_H

#include <QDialog>
#include "defines.hpp"

namespace Ui {
class Print;
}

class Print : public QDialog
{
    Q_OBJECT

signals:
    void print_exec();

public:
    explicit Print(QWidget *parent = 0);
    ~Print();

private:
    Ui::Print *ui;
};

#endif // PRINT_H
