TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        command.cpp \
        main.cpp \
        memory.cpp \
        processor.cpp

HEADERS += \
    command.h \
    memory.h \
    processor.h
