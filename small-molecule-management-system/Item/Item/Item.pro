#-------------------------------------------------
#
# Project created by QtCreator 2023-05-08T09:44:13
#
#-------------------------------------------------

QT       += core gui sql serialport
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Item
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
        widget.cpp \
    mainwindow.cpp \
    special.cpp \
    normal.cpp \
    serve.cpp \
    login.cpp \
    forgetpwd.cpp \
    logoutuser.cpp \
    lcms_mainwindow.cpp \
    search_windwo.cpp

HEADERS += \
        widget.h \
    mainwindow.h \
    special.h \
    normal.h \
    serve.h \
    login.h \
    forgetpwd.h \
    logoutuser.h \
    lcms_mainwindow.h \
    search_windwo.h

FORMS += \
        widget.ui \
    mainwindow.ui \
    special.ui \
    normal.ui \
    serve.ui \
    login.ui \
    forgetpwd.ui \
    logoutuser.ui \
    lcms_mainwindow.ui \
    search_windwo.ui

RESOURCES += \
    picture.qrc

RC_FILE = pro.rc
