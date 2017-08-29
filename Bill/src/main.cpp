#include "include/bill.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication* app = new QApplication(argc, argv);
    Bill* bill = new Bill;

    bill->show();

    return app->exec();
}
