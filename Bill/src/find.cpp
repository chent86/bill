#include "include/find.h"
#include "ui_find.h"

Find::Find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::find)
{
    ui->setupUi(this);
    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SLOT(close()));
    QObject::connect(ui->cancel, SIGNAL(clicked()),
                       this, SLOT(close()));
}

Find::~Find()
{
    delete ui;
}
