#ifndef FIND_H
#define FIND_H

#include <QDialog>
#include "defines.hpp"

namespace Ui {
class find;
}

class Find : public QDialog
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = 0);
    string getId(){return m_id;}
    ~Find();

private:
    Ui::find *ui;
    string m_id;
};

#endif // FIND_H
