#-------------------------------------------------
#
# Project created by QtCreator 2018-12-28T10:09:12
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = MagVar
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    coremag.cxx \
    magvar.cxx

HEADERS += \
    coremag.hxx \
    magvar.hxx \
    constants.h \
    sg_inlines.h
