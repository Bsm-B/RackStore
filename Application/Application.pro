#-------------------------------------------------
#
# Project created by QtCreator 2018-12-24T09:32:58
# Rackoons Team
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Application
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

LIBS += $$top_builddir/components/$(OBJECTS_DIR)/libcomponents.a
INCLUDEPATH += $$top_srcdir/components/
TARGET = Application
PRE_TARGETDEPS += $$top_builddir/components/$(OBJECTS_DIR)/libcomponents.a

SOURCES += \
    main.cpp \
    login.cpp \
    mainwindow.cpp \
    drawerwidget.cpp \
    ray.cpp

HEADERS += \
    login.h \
    mainwindow.h \
    drawerwidget.h \
    ray.h

FORMS += \
    login.ui \
    mainwindow.ui \
    drawerwidget.ui \
    ray.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources1.qrc \
    ../components/resources.qrc \
    ../ray_resources.qrc
