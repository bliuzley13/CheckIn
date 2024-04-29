# TEMPLATE = app
# TARGET = name_of_the_app

# QT = core gui

# greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# SOURCES +=  main.cpp \
#     main.cpp





QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG   += c++11

TARGET = PeopleInfo
TEMPLATE = app

SOURCES += main.cpp \
    family.cpp \
    friend.cpp \
    person.cpp

HEADERS += \
    family.h \
    friend.h \
    person.h \
    display.h \
    sorting.h
