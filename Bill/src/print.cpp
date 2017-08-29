#include "include/print.h"
#include "ui_print.h"

Print::Print(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Print)
{
    ui->setupUi(this);
    QObject::connect(ui->sure, SIGNAL(clicked()),
                       this, SLOT(close()));
    QObject::connect(ui->cancel, SIGNAL(clicked()),
                       this, SLOT(close()));
}

Print::~Print()
{
    delete ui;
}
