QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    page1_start.cpp \
    page2_login.cpp \
    page3_verificationcode.cpp \
    page4_home.cpp \
    pagr5_username.cpp

HEADERS += \
    page1_start.h \
    page2_login.h \
    page3_verificationcode.h \
    page4_home.h \
    pagr5_username.h

FORMS += \
    page1_start.ui \
    page2_login.ui \
    page3_verificationcode.ui \
    page4_home.ui \
    pagr5_username.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    Page5_user_name.qml \
    Page5_user_nameForm.ui.qml
