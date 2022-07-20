QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bank.cpp \
    main.cpp \
    mainwindow.cpp \
    plot.cpp \
    stack.c \
    parser.c \
    table.cpp \
    validation.c \
    calculating.c \
    qcustomplot.cpp

HEADERS += \
    bank.h \
    mainwindow.h \
    plot.h \
    stack.h \
    parser.h \
    table.h \
    validation.h \
    calculating.h \
    qcustomplot.h

FORMS += \
    bank.ui \
    mainwindow.ui \
    plot.ui \
    table.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target