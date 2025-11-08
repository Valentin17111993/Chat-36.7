QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Acc.cpp \
    Chat.cpp \
    CommandLineInterface.cpp \
    Database.cpp \
    Logger.cpp \
    Message.cpp \
    NewUser.cpp \
    Parsing.cpp \
    Server.cpp \
    Socket.cpp \
    User.cpp \
    UserRepository.cpp \
    db.cpp \
    loginform.cpp \
    main.cpp \
    mainwindow.cpp \
    registrationform.cpp \
    sha1.cpp \
    startscreen.cpp \
    userlist.cpp

HEADERS += \
    Acc.h \
    Chat.h \
    CommandLineInterface.h \
    Database.h \
    Logger.h \
    Message.h \
    NewUser.h \
    Parsing.h \
    Server.h \
    Socket.h \
    User.h \
    UserRepository.h \
    db.h \
    loginform.h \
    mainwindow.h \
    registrationform.h \
    resource.h \
    sha1.h \
    startscreen.h \
    userlist.h

FORMS += \
    loginform.ui \
    mainwindow.ui \
    registrationform.ui \
    startscreen.ui \
    userlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
