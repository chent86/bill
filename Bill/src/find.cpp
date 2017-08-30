#include "../include/find.h"
#include "ui_find.h"

Find::Find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::find)
{
    ui->setupUi(this);
    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SLOT(close()));
    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SLOT(setId()));
    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SIGNAL(find_exec()));

    QObject::connect(ui->cancel, SIGNAL(clicked()),
                       this, SLOT(close()));
}

string Find::getId(){
    return m_id;
}

void Find::setId(){
    m_id = ui->id_table->item(0, 0)->text().toStdString();
}

Find::~Find()
{
    delete ui;
}
