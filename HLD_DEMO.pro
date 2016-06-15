QT += core
QT -= gui

TARGET = HLD_DEMO
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    T380Demo_DVB_T.cpp \
    UTIL.cpp \
    qtHLD_api.cpp

HEADERS += \
    hld_api.h \
    qtHLD_api.h \
    qtHLD_api_extern.h
