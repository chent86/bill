#include "include/store.h"
#include "ui_store.h"

Store::Store(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::store)
{
    ui->setupUi(this);
    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SLOT(close()));

    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SIGNAL(store_exec()));

    QObject::connect(ui->cancel, SIGNAL(clicked()),
                       this, SLOT(close()));
}

Store::~Store()
{
    delete ui;
}
