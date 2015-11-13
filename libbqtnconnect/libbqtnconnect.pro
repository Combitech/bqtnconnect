#-------------------------------------------------
#
# Project created by QtCreator 2015-11-13T15:24:42
#
#-------------------------------------------------

QT       -= gui

TARGET = libbqtnconnect
TEMPLATE = lib

DEFINES += LIBBQTNCONNECT_LIBRARY

SOURCES += libbqtnconnect.cpp

HEADERS += libbqtnconnect.h\
        libbqtnconnect_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
