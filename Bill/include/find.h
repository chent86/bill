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

signals:
    void find_exec();

public:
    explicit Find(QWidget *parent = 0);
    string getId();
    ~Find();

 private slots:
    void setId();

private:
    Ui::find *ui;
    string m_id;
};

#endif // FIND_H
