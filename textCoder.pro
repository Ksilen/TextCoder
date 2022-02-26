#-------------------------------------------------
#
# Project created by QtCreator 2022-02-24T09:10:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = textCoder
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    alfabet.cpp \
    logic.cpp

HEADERS  += widget.h \
    logic.h

FORMS    += widget.ui

RESOURCES += \
    res.qrc

CONFIG   += c++11

win32: RC_ICONS = coderText2.ico
