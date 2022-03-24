# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

#TARGET = zork

QT = core gui widgets

HEADERS = \
   $$PWD/Character.h \
   $$PWD/Command.h \
   $$PWD/CommandWords.h \
   $$PWD/item.h \
   $$PWD/Parser.h \
   $$PWD/Room.h \
   $$PWD/ZorkUL.h \
   MainWindow.h

SOURCES = \
   $$PWD/Character.cpp \
   $$PWD/Command.cpp \
   $$PWD/CommandWords.cpp \
   $$PWD/item.cpp \
   $$PWD/Parser.cpp \
   $$PWD/Room.cpp \
   $$PWD/ZorkUL.cpp \
   MainWindow.cpp

INCLUDEPATH = \
    $$PWD/.

#DEFINES = 

FORMS += \
    MainWindow.ui

