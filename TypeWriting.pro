#-------------------------------------------------
#
# Project created by QtCreator 2021-03-18T10:11:02
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TypeWriting
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        keyboard.cpp \
    listtext.cpp \
    recordkeeping.cpp \
    textitemwidget.cpp \
    textlist.cpp \
    gradewidget.cpp \
    regardtable.cpp \
    warning.cpp

HEADERS += \
        keyboard.h \
    listtext.h \
    recordkeeping.h \
    textitemwidget.h \
    textlist.h \
    gradewidget.h \
    regardtable.h \
    warning.h

FORMS += \
        keyboard.ui \
    listtext.ui \
    textitemwidget.ui \
    textlist.ui \
    gradewidget.ui \
    regardtable.ui \
    warning.ui

RESOURCES += \
    resources.qrc
