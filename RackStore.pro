greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RackStore
TEMPLATE = subdirs
SUBDIRS = components Application

CONFIG += ordered

DEFINES += QT_DEPRECATED_WARNINGS
