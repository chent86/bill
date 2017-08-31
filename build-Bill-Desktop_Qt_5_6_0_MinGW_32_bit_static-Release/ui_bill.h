/********************************************************************************
** Form generated from reading UI file 'bill.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILL_H
#define UI_BILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bill
{
public:
    QAction *store;
    QAction *find;
    QAction *print;
    QWidget *centralWidget;
    QTableWidget *table0;
    QTableWidget *note_table;
    QTableWidget *person_table;
    QLabel *title_label;
    QTableWidget *cargo_table;
    QTableWidget *payment_table;
    QTableWidget *table7;
    QTableWidget *tableWidget;
    QTableWidget *expense_table;
    QTableWidget *location_table;
    QTableWidget *date_table;
    QTableWidget *document_maker_table;
    QTableWidget *consignee_table;
    QTableWidget *id_table;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Bill)
    {
        if (Bill->objectName().isEmpty())
            Bill->setObjectName(QStringLiteral("Bill"));
        Bill->setWindowModality(Qt::WindowModal);
        Bill->setEnabled(true);
        Bill->resize(722, 750);
        Bill->setMaximumSize(QSize(722, 750));
        Bill->setIconSize(QSize(0, 0));
        store = new QAction(Bill);
        store->setObjectName(QStringLiteral("store"));
        find = new QAction(Bill);
        find->setObjectName(QStringLiteral("find"));
        print = new QAction(Bill);
        print->setObjectName(QStringLiteral("print"));
        centralWidget = new QWidget(Bill);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        table0 = new QTableWidget(centralWidget);
        if (table0->columnCount() < 1)
            table0->setColumnCount(1);
        if (table0->rowCount() < 2)
            table0->setRowCount(2);
        QFont font;
        font.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table0->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table0->setItem(1, 0, __qtablewidgetitem1);
        table0->setObjectName(QStringLiteral("table0"));
        table0->setGeometry(QRect(10, 100, 80, 160));
        table0->setAutoFillBackground(true);
        table0->setAutoScroll(false);
        table0->setTabKeyNavigation(true);
        table0->setAlternatingRowColors(false);
        table0->setShowGrid(true);
        table0->setGridStyle(Qt::SolidLine);
        table0->setSortingEnabled(false);
        table0->setWordWrap(false);
        table0->setCornerButtonEnabled(false);
        table0->setRowCount(2);
        table0->setColumnCount(1);
        table0->horizontalHeader()->setVisible(false);
        table0->horizontalHeader()->setStretchLastSection(true);
        table0->verticalHeader()->setVisible(false);
        table0->verticalHeader()->setDefaultSectionSize(80);
        table0->verticalHeader()->setStretchLastSection(true);
        note_table = new QTableWidget(centralWidget);
        if (note_table->columnCount() < 1)
            note_table->setColumnCount(1);
        if (note_table->rowCount() < 2)
            note_table->setRowCount(2);
        QBrush brush(QColor(120, 120, 120, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(102, 102, 102, 255));
        brush1.setStyle(Qt::NoBrush);
        QFont font1;
        font1.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setBackground(brush1);
        __qtablewidgetitem2->setForeground(brush);
        note_table->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        note_table->setItem(1, 0, __qtablewidgetitem3);
        note_table->setObjectName(QStringLiteral("note_table"));
        note_table->setGeometry(QRect(540, 260, 170, 80));
        note_table->setShowGrid(false);
        note_table->setRowCount(2);
        note_table->setColumnCount(1);
        note_table->horizontalHeader()->setVisible(false);
        note_table->horizontalHeader()->setDefaultSectionSize(10);
        note_table->horizontalHeader()->setMinimumSectionSize(10);
        note_table->horizontalHeader()->setStretchLastSection(true);
        note_table->verticalHeader()->setVisible(false);
        note_table->verticalHeader()->setDefaultSectionSize(25);
        note_table->verticalHeader()->setStretchLastSection(true);
        person_table = new QTableWidget(centralWidget);
        if (person_table->columnCount() < 4)
            person_table->setColumnCount(4);
        if (person_table->rowCount() < 4)
            person_table->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font);
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font);
        person_table->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(0, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font);
        person_table->setItem(0, 3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font);
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font);
        person_table->setItem(1, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font);
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(1, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font);
        person_table->setItem(1, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font);
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font);
        person_table->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFont(font);
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(2, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font);
        person_table->setItem(2, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font);
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(3, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setFont(font);
        person_table->setItem(3, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem18->setFont(font);
        __qtablewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        person_table->setItem(3, 2, __qtablewidgetitem18);
        QFont font2;
        font2.setPointSize(12);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::NoAntialias);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font2);
        person_table->setItem(3, 3, __qtablewidgetitem19);
        person_table->setObjectName(QStringLiteral("person_table"));
        person_table->setEnabled(true);
        person_table->setGeometry(QRect(90, 100, 620, 160));
        person_table->setLineWidth(0);
        person_table->setRowCount(4);
        person_table->setColumnCount(4);
        person_table->horizontalHeader()->setVisible(false);
        person_table->horizontalHeader()->setStretchLastSection(true);
        person_table->verticalHeader()->setVisible(false);
        person_table->verticalHeader()->setDefaultSectionSize(40);
        person_table->verticalHeader()->setStretchLastSection(true);
        title_label = new QLabel(centralWidget);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setEnabled(false);
        title_label->setGeometry(QRect(10, 10, 700, 85));
        title_label->setInputMethodHints(Qt::ImhSensitiveData);
        title_label->setTextFormat(Qt::AutoText);
        title_label->setWordWrap(false);
        cargo_table = new QTableWidget(centralWidget);
        if (cargo_table->columnCount() < 6)
            cargo_table->setColumnCount(6);
        if (cargo_table->rowCount() < 2)
            cargo_table->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem20->setFont(font);
        __qtablewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        cargo_table->setItem(0, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem21->setFont(font);
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        cargo_table->setItem(0, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem22->setFont(font);
        __qtablewidgetitem22->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        cargo_table->setItem(0, 2, __qtablewidgetitem22);
        QFont font3;
        font3.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem23->setFont(font3);
        __qtablewidgetitem23->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        cargo_table->setItem(0, 3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem24->setFont(font3);
        __qtablewidgetitem24->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        cargo_table->setItem(0, 4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem25->setFont(font3);
        __qtablewidgetitem25->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        cargo_table->setItem(0, 5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem26->setFont(font);
        cargo_table->setItem(1, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem27->setFont(font);
        cargo_table->setItem(1, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem28->setFont(font);
        cargo_table->setItem(1, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem29->setFont(font);
        cargo_table->setItem(1, 3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem30->setFont(font);
        cargo_table->setItem(1, 4, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem31->setFont(font);
        cargo_table->setItem(1, 5, __qtablewidgetitem31);
        cargo_table->setObjectName(QStringLiteral("cargo_table"));
        cargo_table->setGeometry(QRect(10, 260, 530, 80));
        cargo_table->setRowCount(2);
        cargo_table->setColumnCount(6);
        cargo_table->horizontalHeader()->setVisible(false);
        cargo_table->horizontalHeader()->setDefaultSectionSize(80);
        cargo_table->horizontalHeader()->setStretchLastSection(true);
        cargo_table->verticalHeader()->setVisible(false);
        cargo_table->verticalHeader()->setDefaultSectionSize(40);
        cargo_table->verticalHeader()->setStretchLastSection(true);
        payment_table = new QTableWidget(centralWidget);
        if (payment_table->columnCount() < 11)
            payment_table->setColumnCount(11);
        if (payment_table->rowCount() < 1)
            payment_table->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem32->setFont(font);
        __qtablewidgetitem32->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        payment_table->setItem(0, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem33->setFont(font);
        payment_table->setItem(0, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem34->setFont(font);
        __qtablewidgetitem34->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        payment_table->setItem(0, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem35->setFont(font);
        payment_table->setItem(0, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem36->setFont(font);
        __qtablewidgetitem36->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        payment_table->setItem(0, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem37->setFont(font);
        payment_table->setItem(0, 5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem38->setFont(font);
        __qtablewidgetitem38->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        payment_table->setItem(0, 6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem39->setFont(font);
        payment_table->setItem(0, 7, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem40->setFont(font);
        __qtablewidgetitem40->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        payment_table->setItem(0, 8, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem41->setFont(font);
        payment_table->setItem(0, 9, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem42->setFont(font);
        __qtablewidgetitem42->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        payment_table->setItem(0, 10, __qtablewidgetitem42);
        payment_table->setObjectName(QStringLiteral("payment_table"));
        payment_table->setGeometry(QRect(10, 420, 530, 50));
        payment_table->setLineWidth(4);
        payment_table->setShowGrid(false);
        payment_table->setRowCount(1);
        payment_table->setColumnCount(11);
        payment_table->horizontalHeader()->setVisible(false);
        payment_table->horizontalHeader()->setDefaultSectionSize(50);
        payment_table->horizontalHeader()->setHighlightSections(true);
        payment_table->horizontalHeader()->setStretchLastSection(true);
        payment_table->verticalHeader()->setVisible(false);
        payment_table->verticalHeader()->setStretchLastSection(true);
        table7 = new QTableWidget(centralWidget);
        if (table7->columnCount() < 2)
            table7->setColumnCount(2);
        if (table7->rowCount() < 1)
            table7->setRowCount(1);
        QFont font4;
        font4.setPointSize(15);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem43->setFont(font4);
        __qtablewidgetitem43->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table7->setItem(0, 0, __qtablewidgetitem43);
        table7->setObjectName(QStringLiteral("table7"));
        table7->setGeometry(QRect(10, 470, 700, 170));
        table7->setContextMenuPolicy(Qt::NoContextMenu);
        table7->setLineWidth(2);
        table7->setRowCount(1);
        table7->setColumnCount(2);
        table7->horizontalHeader()->setVisible(false);
        table7->horizontalHeader()->setDefaultSectionSize(30);
        table7->horizontalHeader()->setStretchLastSection(true);
        table7->verticalHeader()->setVisible(false);
        table7->verticalHeader()->setStretchLastSection(true);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(false);
        tableWidget->setGeometry(QRect(540, 340, 170, 130));
        tableWidget->setShowGrid(true);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(1);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setStretchLastSection(true);
        expense_table = new QTableWidget(centralWidget);
        if (expense_table->columnCount() < 6)
            expense_table->setColumnCount(6);
        if (expense_table->rowCount() < 2)
            expense_table->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem44->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        expense_table->setItem(0, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem45->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        expense_table->setItem(0, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem46->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        expense_table->setItem(0, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem47->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        expense_table->setItem(0, 3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem48->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        expense_table->setItem(0, 4, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem49->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        expense_table->setItem(0, 5, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignCenter);
        expense_table->setItem(1, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignCenter);
        expense_table->setItem(1, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignCenter);
        expense_table->setItem(1, 2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setTextAlignment(Qt::AlignCenter);
        expense_table->setItem(1, 3, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setTextAlignment(Qt::AlignCenter);
        expense_table->setItem(1, 4, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setTextAlignment(Qt::AlignCenter);
        expense_table->setItem(1, 5, __qtablewidgetitem55);
        expense_table->setObjectName(QStringLiteral("expense_table"));
        expense_table->setGeometry(QRect(10, 340, 530, 80));
        expense_table->setRowCount(2);
        expense_table->setColumnCount(6);
        expense_table->horizontalHeader()->setVisible(false);
        expense_table->horizontalHeader()->setDefaultSectionSize(80);
        expense_table->horizontalHeader()->setStretchLastSection(true);
        expense_table->verticalHeader()->setVisible(false);
        expense_table->verticalHeader()->setDefaultSectionSize(40);
        expense_table->verticalHeader()->setStretchLastSection(true);
        location_table = new QTableWidget(centralWidget);
        if (location_table->columnCount() < 2)
            location_table->setColumnCount(2);
        if (location_table->rowCount() < 1)
            location_table->setRowCount(1);
        QBrush brush2(QColor(152, 152, 152, 255));
        brush2.setStyle(Qt::NoBrush);
        QFont font5;
        font5.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem56->setFont(font5);
        __qtablewidgetitem56->setForeground(brush2);
        __qtablewidgetitem56->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        location_table->setItem(0, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem57->setFont(font5);
        location_table->setItem(0, 1, __qtablewidgetitem57);
        location_table->setObjectName(QStringLiteral("location_table"));
        location_table->setGeometry(QRect(10, 60, 170, 40));
        location_table->setFrameShape(QFrame::NoFrame);
        location_table->setTabKeyNavigation(true);
        location_table->setProperty("showDropIndicator", QVariant(true));
        location_table->setShowGrid(false);
        location_table->setGridStyle(Qt::NoPen);
        location_table->setWordWrap(false);
        location_table->setCornerButtonEnabled(false);
        location_table->setRowCount(1);
        location_table->setColumnCount(2);
        location_table->horizontalHeader()->setVisible(false);
        location_table->horizontalHeader()->setDefaultSectionSize(80);
        location_table->horizontalHeader()->setStretchLastSection(true);
        location_table->verticalHeader()->setVisible(false);
        location_table->verticalHeader()->setStretchLastSection(true);
        date_table = new QTableWidget(centralWidget);
        if (date_table->columnCount() < 7)
            date_table->setColumnCount(7);
        if (date_table->rowCount() < 1)
            date_table->setRowCount(1);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem58->setBackground(brush3);
        __qtablewidgetitem58->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        date_table->setItem(0, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setTextAlignment(Qt::AlignCenter);
        date_table->setItem(0, 1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem60->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        date_table->setItem(0, 2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setTextAlignment(Qt::AlignCenter);
        date_table->setItem(0, 3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem62->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        date_table->setItem(0, 4, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setTextAlignment(Qt::AlignCenter);
        date_table->setItem(0, 5, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem64->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        date_table->setItem(0, 6, __qtablewidgetitem64);
        date_table->setObjectName(QStringLiteral("date_table"));
        date_table->setGeometry(QRect(530, 70, 180, 30));
        date_table->setFrameShape(QFrame::NoFrame);
        date_table->setFrameShadow(QFrame::Raised);
        date_table->setLineWidth(0);
        date_table->setTextElideMode(Qt::ElideNone);
        date_table->setShowGrid(false);
        date_table->setRowCount(1);
        date_table->setColumnCount(7);
        date_table->horizontalHeader()->setVisible(false);
        date_table->horizontalHeader()->setDefaultSectionSize(24);
        date_table->horizontalHeader()->setHighlightSections(true);
        date_table->horizontalHeader()->setMinimumSectionSize(30);
        date_table->horizontalHeader()->setStretchLastSection(true);
        date_table->verticalHeader()->setVisible(false);
        date_table->verticalHeader()->setDefaultSectionSize(30);
        date_table->verticalHeader()->setMinimumSectionSize(10);
        date_table->verticalHeader()->setStretchLastSection(true);
        document_maker_table = new QTableWidget(centralWidget);
        if (document_maker_table->columnCount() < 2)
            document_maker_table->setColumnCount(2);
        if (document_maker_table->rowCount() < 1)
            document_maker_table->setRowCount(1);
        QBrush brush4(QColor(152, 152, 152, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem65->setFont(font5);
        __qtablewidgetitem65->setForeground(brush4);
        __qtablewidgetitem65->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        document_maker_table->setItem(0, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem66->setFont(font5);
        document_maker_table->setItem(0, 1, __qtablewidgetitem66);
        document_maker_table->setObjectName(QStringLiteral("document_maker_table"));
        document_maker_table->setGeometry(QRect(10, 640, 230, 40));
        document_maker_table->setFrameShape(QFrame::NoFrame);
        document_maker_table->setTabKeyNavigation(true);
        document_maker_table->setProperty("showDropIndicator", QVariant(true));
        document_maker_table->setShowGrid(false);
        document_maker_table->setGridStyle(Qt::NoPen);
        document_maker_table->setWordWrap(false);
        document_maker_table->setCornerButtonEnabled(false);
        document_maker_table->setRowCount(1);
        document_maker_table->setColumnCount(2);
        document_maker_table->horizontalHeader()->setVisible(false);
        document_maker_table->horizontalHeader()->setDefaultSectionSize(90);
        document_maker_table->horizontalHeader()->setStretchLastSection(true);
        document_maker_table->verticalHeader()->setVisible(false);
        document_maker_table->verticalHeader()->setStretchLastSection(true);
        consignee_table = new QTableWidget(centralWidget);
        if (consignee_table->columnCount() < 2)
            consignee_table->setColumnCount(2);
        if (consignee_table->rowCount() < 1)
            consignee_table->setRowCount(1);
        QBrush brush5(QColor(152, 152, 152, 255));
        brush5.setStyle(Qt::NoBrush);
        QBrush brush6(QColor(152, 152, 152, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem67->setFont(font5);
        __qtablewidgetitem67->setBackground(brush6);
        __qtablewidgetitem67->setForeground(brush5);
        __qtablewidgetitem67->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        consignee_table->setItem(0, 0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem68->setFont(font5);
        consignee_table->setItem(0, 1, __qtablewidgetitem68);
        consignee_table->setObjectName(QStringLiteral("consignee_table"));
        consignee_table->setGeometry(QRect(280, 640, 271, 40));
        consignee_table->setFrameShape(QFrame::NoFrame);
        consignee_table->setTabKeyNavigation(true);
        consignee_table->setProperty("showDropIndicator", QVariant(true));
        consignee_table->setShowGrid(false);
        consignee_table->setGridStyle(Qt::NoPen);
        consignee_table->setWordWrap(false);
        consignee_table->setCornerButtonEnabled(false);
        consignee_table->setRowCount(1);
        consignee_table->setColumnCount(2);
        consignee_table->horizontalHeader()->setVisible(false);
        consignee_table->horizontalHeader()->setDefaultSectionSize(90);
        consignee_table->horizontalHeader()->setStretchLastSection(true);
        consignee_table->verticalHeader()->setVisible(false);
        consignee_table->verticalHeader()->setStretchLastSection(true);
        id_table = new QTableWidget(centralWidget);
        if (id_table->columnCount() < 2)
            id_table->setColumnCount(2);
        if (id_table->rowCount() < 1)
            id_table->setRowCount(1);
        QBrush brush7(QColor(152, 152, 152, 255));
        brush7.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem69->setFont(font3);
        __qtablewidgetitem69->setForeground(brush7);
        __qtablewidgetitem69->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        id_table->setItem(0, 0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem70->setFont(font5);
        id_table->setItem(0, 1, __qtablewidgetitem70);
        id_table->setObjectName(QStringLiteral("id_table"));
        id_table->setGeometry(QRect(520, 29, 171, 31));
        id_table->setFrameShape(QFrame::NoFrame);
        id_table->setTabKeyNavigation(true);
        id_table->setProperty("showDropIndicator", QVariant(true));
        id_table->setShowGrid(false);
        id_table->setGridStyle(Qt::NoPen);
        id_table->setWordWrap(false);
        id_table->setCornerButtonEnabled(false);
        id_table->setRowCount(1);
        id_table->setColumnCount(2);
        id_table->horizontalHeader()->setVisible(false);
        id_table->horizontalHeader()->setDefaultSectionSize(60);
        id_table->horizontalHeader()->setStretchLastSection(true);
        id_table->verticalHeader()->setVisible(false);
        id_table->verticalHeader()->setStretchLastSection(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(550, 350, 71, 51));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(630, 450, 81, 20));
        Bill->setCentralWidget(centralWidget);
        table0->raise();
        note_table->raise();
        person_table->raise();
        title_label->raise();
        cargo_table->raise();
        table7->raise();
        tableWidget->raise();
        expense_table->raise();
        payment_table->raise();
        location_table->raise();
        date_table->raise();
        document_maker_table->raise();
        consignee_table->raise();
        id_table->raise();
        label_2->raise();
        label_3->raise();
        menuBar = new QMenuBar(Bill);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 722, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        Bill->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Bill);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Bill->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Bill);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Bill->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(store);
        menu->addAction(find);
        menu->addAction(print);

        retranslateUi(Bill);

        QMetaObject::connectSlotsByName(Bill);
    } // setupUi

    void retranslateUi(QMainWindow *Bill)
    {
        Bill->setWindowTitle(QApplication::translate("Bill", "Bill", 0));
        store->setText(QApplication::translate("Bill", "\344\277\235\345\255\230", 0));
        find->setText(QApplication::translate("Bill", "\346\237\245\350\257\242", 0));
        print->setText(QApplication::translate("Bill", "\346\211\223\345\215\260", 0));

        const bool __sortingEnabled = table0->isSortingEnabled();
        table0->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = table0->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("Bill", "\346\224\266\350\264\247\344\272\272", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table0->item(1, 0);
        ___qtablewidgetitem1->setText(QApplication::translate("Bill", "\345\217\221\350\264\247\344\272\272", 0));
        table0->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = note_table->isSortingEnabled();
        note_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = note_table->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("Bill", "\345\244\207\346\263\250", 0));
        note_table->setSortingEnabled(__sortingEnabled1);


        const bool __sortingEnabled2 = person_table->isSortingEnabled();
        person_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = person_table->item(0, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("Bill", "\345\215\225\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem4 = person_table->item(0, 2);
        ___qtablewidgetitem4->setText(QApplication::translate("Bill", "\347\224\265\350\257\235", 0));
        QTableWidgetItem *___qtablewidgetitem5 = person_table->item(1, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("Bill", "\345\234\260\345\235\200", 0));
        QTableWidgetItem *___qtablewidgetitem6 = person_table->item(1, 2);
        ___qtablewidgetitem6->setText(QApplication::translate("Bill", "\346\211\213\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem7 = person_table->item(2, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("Bill", "\345\215\225\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem8 = person_table->item(2, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("Bill", "\347\224\265\350\257\235", 0));
        QTableWidgetItem *___qtablewidgetitem9 = person_table->item(3, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("Bill", "\345\234\260\345\235\200", 0));
        QTableWidgetItem *___qtablewidgetitem10 = person_table->item(3, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("Bill", "\346\211\213\346\234\272", 0));
        person_table->setSortingEnabled(__sortingEnabled2);

        title_label->setText(QApplication::translate("Bill", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\346\267\261\345\234\263\345\270\202\350\256\257\346\201\222\350\276\276\350\264\247\350\277\220\346\234\211\351\231\220\345\205\254\345\217\270</span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\350\264\247\347\211\251\346\211\230\350\277\220\345\215\225</span></p><p align=\"center\">\346\237\245\350\257\242\347\224\265\350\257\235\357\274\232 <span style=\" font-size:10pt;\">0755-27779883/27777228</span></p></body></html>", 0));

        const bool __sortingEnabled3 = cargo_table->isSortingEnabled();
        cargo_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = cargo_table->item(0, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("Bill", "\344\273\266\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem12 = cargo_table->item(0, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("Bill", "\350\264\247\347\211\251\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem13 = cargo_table->item(0, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("Bill", "\345\214\205\350\243\205", 0));
        QTableWidgetItem *___qtablewidgetitem14 = cargo_table->item(0, 3);
        ___qtablewidgetitem14->setText(QApplication::translate("Bill", "\351\207\215\351\207\217\357\274\210\345\205\254\346\226\244\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem15 = cargo_table->item(0, 4);
        ___qtablewidgetitem15->setText(QApplication::translate("Bill", "\344\275\223\347\247\257\357\274\210\347\253\213\346\226\271\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem16 = cargo_table->item(0, 5);
        ___qtablewidgetitem16->setText(QApplication::translate("Bill", "\350\264\247\344\277\235\344\273\267\345\200\274", 0));
        cargo_table->setSortingEnabled(__sortingEnabled3);


        const bool __sortingEnabled4 = payment_table->isSortingEnabled();
        payment_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem17 = payment_table->item(0, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("Bill", "\345\220\210\350\256\241\357\274\210\345\244\247\345\206\231\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem18 = payment_table->item(0, 2);
        ___qtablewidgetitem18->setText(QApplication::translate("Bill", "\344\270\207", 0));
        QTableWidgetItem *___qtablewidgetitem19 = payment_table->item(0, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("Bill", "\344\273\237", 0));
        QTableWidgetItem *___qtablewidgetitem20 = payment_table->item(0, 6);
        ___qtablewidgetitem20->setText(QApplication::translate("Bill", "\344\275\260", 0));
        QTableWidgetItem *___qtablewidgetitem21 = payment_table->item(0, 8);
        ___qtablewidgetitem21->setText(QApplication::translate("Bill", "\346\213\276", 0));
        QTableWidgetItem *___qtablewidgetitem22 = payment_table->item(0, 10);
        ___qtablewidgetitem22->setText(QApplication::translate("Bill", "\345\205\203", 0));
        payment_table->setSortingEnabled(__sortingEnabled4);


        const bool __sortingEnabled5 = table7->isSortingEnabled();
        table7->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem23 = table7->item(0, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("Bill", "\346\211\230\350\277\220\345\215\217\350\256\256", 0));
        table7->setSortingEnabled(__sortingEnabled5);


        const bool __sortingEnabled6 = expense_table->isSortingEnabled();
        expense_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem24 = expense_table->item(0, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("Bill", "\350\277\220\350\264\271\357\274\210\345\205\203\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem25 = expense_table->item(0, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("Bill", "\351\200\201\350\264\247\350\264\271\357\274\210\345\205\203\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem26 = expense_table->item(0, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("Bill", "\345\205\266\345\256\203\350\264\271\347\224\250\357\274\210\345\205\203\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem27 = expense_table->item(0, 3);
        ___qtablewidgetitem27->setText(QApplication::translate("Bill", "\346\217\220\350\264\247\350\264\271\357\274\210\345\205\203\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem28 = expense_table->item(0, 4);
        ___qtablewidgetitem28->setText(QApplication::translate("Bill", "\344\277\235\351\231\251\350\264\271\357\274\210\345\205\203\357\274\211", 0));
        QTableWidgetItem *___qtablewidgetitem29 = expense_table->item(0, 5);
        ___qtablewidgetitem29->setText(QApplication::translate("Bill", "\345\220\210\350\256\241\357\274\210\345\205\203\357\274\211", 0));
        expense_table->setSortingEnabled(__sortingEnabled6);


        const bool __sortingEnabled7 = location_table->isSortingEnabled();
        location_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem30 = location_table->item(0, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("Bill", "\346\267\261\345\234\263 \350\207\263", 0));
        location_table->setSortingEnabled(__sortingEnabled7);


        const bool __sortingEnabled8 = date_table->isSortingEnabled();
        date_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem31 = date_table->item(0, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("Bill", "20", 0));
        QTableWidgetItem *___qtablewidgetitem32 = date_table->item(0, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("Bill", "\345\271\264", 0));
        QTableWidgetItem *___qtablewidgetitem33 = date_table->item(0, 4);
        ___qtablewidgetitem33->setText(QApplication::translate("Bill", "\346\234\210", 0));
        QTableWidgetItem *___qtablewidgetitem34 = date_table->item(0, 6);
        ___qtablewidgetitem34->setText(QApplication::translate("Bill", "\346\227\245", 0));
        date_table->setSortingEnabled(__sortingEnabled8);


        const bool __sortingEnabled9 = document_maker_table->isSortingEnabled();
        document_maker_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem35 = document_maker_table->item(0, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("Bill", "\345\210\266\345\215\225\344\272\272\357\274\232", 0));
        document_maker_table->setSortingEnabled(__sortingEnabled9);


        const bool __sortingEnabled10 = consignee_table->isSortingEnabled();
        consignee_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem36 = consignee_table->item(0, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("Bill", "\346\217\220\350\264\247\344\272\272\357\274\232", 0));
        consignee_table->setSortingEnabled(__sortingEnabled10);


        const bool __sortingEnabled11 = id_table->isSortingEnabled();
        id_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem37 = id_table->item(0, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("Bill", "\345\215\225\345\217\267\357\274\232", 0));
        id_table->setSortingEnabled(__sortingEnabled11);

        label_2->setText(QApplication::translate("Bill", "<html><head/><body><p><span style=\" color:#7d7d7d;\">\346\211\230\350\277\220\344\272\272\347\233\226\347\253\240\357\274\232</span></p><p><span style=\" color:#7d7d7d;\">\347\255\276\345\220\215\357\274\232</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Bill", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#7d7d7d;\">\345\271\264     \346\234\210     \346\227\245</span></p></body></html>", 0));
        menu->setTitle(QApplication::translate("Bill", "\350\217\234\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Bill: public Ui_Bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
