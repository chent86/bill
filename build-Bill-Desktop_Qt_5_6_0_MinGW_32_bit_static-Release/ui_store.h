/********************************************************************************
** Form generated from reading UI file 'store.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_H
#define UI_STORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_store
{
public:
    QPushButton *sure;
    QPushButton *cancel;
    QLabel *label;

    void setupUi(QDialog *store)
    {
        if (store->objectName().isEmpty())
            store->setObjectName(QStringLiteral("store"));
        store->resize(266, 116);
        sure = new QPushButton(store);
        sure->setObjectName(QStringLiteral("sure"));
        sure->setGeometry(QRect(30, 70, 81, 31));
        cancel = new QPushButton(store);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(160, 70, 81, 31));
        label = new QLabel(store);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 91, 21));

        retranslateUi(store);

        QMetaObject::connectSlotsByName(store);
    } // setupUi

    void retranslateUi(QDialog *store)
    {
        store->setWindowTitle(QApplication::translate("store", "Dialog", 0));
        sure->setText(QApplication::translate("store", "\347\241\256\345\256\232", 0));
        cancel->setText(QApplication::translate("store", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("store", "<html><head/><body><p><span style=\" font-size:16pt;\">\346\230\257\345\220\246\344\277\235\345\255\230</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class store: public Ui_store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_H
