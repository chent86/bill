#-------------------------------------------------
#
# Project created by QtCreator 2017-08-17T00:35:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bill
TEMPLATE = app


SOURCES += src/main.cpp\
        src/bill.cpp \
    src/store.cpp \
    src/find.cpp \
    src/print.cpp \
    src/database.cpp \
    src/printer.cpp \
    include/database/sqlite3.c \
    include/database/shell.c

HEADERS  += include/bill.h \
    include/store.h \
    include/find.h \
    include/print.h \
    include/defines.hpp \
    include/printer.hpp \
    include/database/database.hpp \
    include/database/sqlite3.h \
    include/database/sqlite3ext.h

FORMS    += ui/bill.ui \
    ui/store.ui \
    ui/find.ui \
    ui/print.ui
