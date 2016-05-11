#-------------------------------------------------
#
# Project created by QtCreator 2016-05-02T18:13:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tutorial1
TEMPLATE = app


SOURCES += main.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    player.cpp \
    score.cpp \
    enemy2.cpp \
    mytimer.cpp \
    mainwindow.cpp

HEADERS  += \
    bullet.h \
    enemy.h \
    game.h \
    player.h \
    score.h \
    enemy2.h \
    mytimer.h \
    mainwindow.h

RESOURCES += \
    resource.qrc

FORMS += \
    mainwindow.ui
