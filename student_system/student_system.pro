#-------------------------------------------------
#
# Project created by QtCreator 2023-12-18T19:58:03
#
#-------------------------------------------------
QT       += sql
QT       += core gui
QT       += core gui sql
CONFIG += qaxcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = student_system
TEMPLATE = app


SOURCES += main.cpp\
    myhelper.cpp \
    frmmessagebox.cpp \
    iconhelper.cpp \
    myapp.cpp \
    mysqlapi.cpp \
    mythread.cpp \
    logindialog.cpp \
    editStudentMessage.cpp \
    eidtTeacherMessage.cpp \
    editCourseMessage.cpp \
    editGrade.cpp \
    studentwidget.cpp \
    teacherwidget.cpp \
    ChangePassword.cpp \
    ChooseCourse.cpp \
    selectselfgrade.cpp \
    showallgrade.cpp

HEADERS  += \
    myhelper.h \
    frmmessagebox.h \
    iconhelper.h \
    myapp.h \
    mysqlapi.h \
    mythread.h \
    logindialog.h \
    connection.h \
    logindialog.h \
    editStudentMessage.h \
    editGrade.h \
    editCourseMessage.h \
    eidtTeacherMessage.h \
    studentwidget.h \
    teacherwidget.h \
    ChangePassword.h \
    ChooseCourse.h \
    selectselfgrade.h \
    showallgrade.h

FORMS    += \
    logindialog.ui \
    frmmessagebox.ui \
    editStudentMessage.ui \
    eidtTeacherMessage.ui \
    studentwidget.ui \
    teacherwidget.ui \
    ChangePassword.ui \
    ChooseCourse.ui \
    selectselfgrade.ui \
    showallgrade.ui \
    editGrade.ui \
    editCourseMessage.ui

DISTFILES += \
    image/OIP-C (1).jpg \
    image/R-C (1).jpg \
    image/R-C (2).jpg \
    image/R-C (3).jpg

RESOURCES += \
    image.qrc
