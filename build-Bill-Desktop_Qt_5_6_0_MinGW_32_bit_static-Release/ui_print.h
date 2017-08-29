/********************************************************************************
** Form generated from reading UI file 'print.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Print
{
public:
    QPushButton *sure;
    QPushButton *cancel;
    QLabel *label;

    void setupUi(QDialog *Print)
    {
        if (Print->objectName().isEmpty())
            Print->setObjectName(QStringLiteral("Print"));
        Print->resize(274, 140);
        sure = new QPushButton(Print);
        sure->setObjectName(QStringLiteral("sure"));
        sure->setGeometry(QRect(30, 90, 81, 31));
        cancel = new QPushButton(Print);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(160, 90, 81, 31));
        label = new QLabel(Print);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 40, 91, 21));

        retranslateUi(Print);

        QMetaObject::connectSlotsByName(Print);
    } // setupUi

    void retranslateUi(QDialog *Print)
    {
        Print->setWindowTitle(QApplication::translate("Print", "Dialog", 0));
        sure->setText(QApplication::translate("Print", "\347\241\256\345\256\232", 0));
        cancel->setText(QApplication::translate("Print", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("Print", "<html><head/><body><p><span style=\" font-size:16pt;\">\346\230\257\345\220\246\346\211\223\345\215\260</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Print: public Ui_Print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
