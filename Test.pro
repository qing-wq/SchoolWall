QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    biaobai.cpp \
    boybiaobai.cpp \
    boydianying.cpp \
    boydianzi.cpp \
    boyshiwu.cpp \
    boywall.cpp \
    boyyundong.cpp \
    girlwall.cpp \
    global.cpp \
    haowu.cpp \
    main.cpp \
    mainwindow.cpp \
    meishi.cpp \
    meizhuangwall.cpp \
    mycomment.cpp \
    shiwu.cpp \
    xuanzeduihuakuang.cpp

HEADERS += \
    biaobai.h \
    boybiaobai.h \
    boydianying.h \
    boydianzi.h \
    boyshiwu.h \
    boywall.h \
    boyyundong.h \
    girlwall.h \
    global.h \
    haowu.h \
    mainwindow.h \
    meishi.h \
    meizhuangwall.h \
    mycomment.h \
    shiwu.h \
    xuanzeduihuakuang.h

FORMS += \
    biaobai.ui \
    boybiaobai.ui \
    boydianying.ui \
    boydianzi.ui \
    boyshiwu.ui \
    boywall.ui \
    boyyundong.ui \
    girlwall.ui \
    haowu.ui \
    mainwindow.ui \
    meishi.ui \
    meizhuangwall.ui \
    mycomment.ui \
    shiwu.ui \
    xuanzeduihuakuang.ui


CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    bg.qrc
