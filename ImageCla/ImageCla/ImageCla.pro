QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    B_c.cpp \
    B_c1.cpp \
    B_d.cpp \
    Dense.cpp \
    Flatten.cpp \
    W_c.cpp \
    W_c1.cpp \
    W_d.cpp \
    conv_forward.cpp \
    conv_single_step.cpp \
    imageencode.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    parameter.cpp \
    pool_forward_Max.cpp \
    sonwindow1.cpp \
    sonwindow2.cpp \
    sonwindow3.cpp \
    sonwindow4.cpp

HEADERS += \
    B_c.h \
    B_c1.h \
    B_d.h \
    Dense.h \
    Flatten.h \
    W_c.h \
    W_c1.h \
    W_d.h \
    conv_forward.h \
    conv_single_step.h \
    imageencode.h \
    mainwindow.h \
    mainwindow1.h \
    parameter.h \
    pool_forward_Max.h \
    sonwindow1.h \
    sonwindow2.h \
    sonwindow3.h \
    sonwindow4.h

FORMS += \
    mainwindow.ui \
    mainwindow1.ui \
    sonwindow1.ui \
    sonwindow2.ui \
    sonwindow3.ui \
    sonwindow4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
