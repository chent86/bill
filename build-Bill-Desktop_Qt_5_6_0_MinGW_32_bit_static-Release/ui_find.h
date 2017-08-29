/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_find
{
public:
    QPushButton *sure;
    QPushButton *cancel;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QDialog *find)
    {
        if (find->objectName().isEmpty())
            find->setObjectName(QStringLiteral("find"));
        find->resize(294, 183);
        sure = new QPushButton(find);
        sure->setObjectName(QStringLiteral("sure"));
        sure->setGeometry(QRect(40, 130, 81, 31));
        cancel = new QPushButton(find);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(170, 130, 81, 31));
        label = new QLabel(find);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 181, 31));
        tableWidget = new QTableWidget(find);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QFont font;
        font.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 70, 256, 40));
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(1);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(256);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(40);

        retranslateUi(find);

        QMetaObject::connectSlotsByName(find);
    } // setupUi

    void retranslateUi(QDialog *find)
    {
        find->setWindowTitle(QApplication::translate("find", "Dialog", 0));
        sure->setText(QApplication::translate("find", "\347\241\256\345\256\232", 0));
        cancel->setText(QApplication::translate("find", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("find", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\257\267\350\276\223\345\205\245\345\215\225\345\217\267\350\277\233\350\241\214\346\237\245\350\257\242</span></p></body></html>", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class find: public Ui_find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H
