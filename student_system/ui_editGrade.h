/********************************************************************************
** Form generated from reading UI file 'editGrade.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITGRADE_H
#define UI_EDITGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editGrade
{
public:
    QWidget *widget;
    QLineEdit *setStudentName;
    QLabel *labStudentName;
    QLabel *labStudentID;
    QLineEdit *setStudentID;
    QLabel *labCourse;
    QLabel *labGrade;
    QLineEdit *setCourseId;
    QLineEdit *setGrade;
    QPushButton *yesButton;
    QPushButton *noButton;
    QLabel *label_2;

    void setupUi(QWidget *editGrade)
    {
        if (editGrade->objectName().isEmpty())
            editGrade->setObjectName(QStringLiteral("editGrade"));
        editGrade->resize(400, 300);
        editGrade->setMinimumSize(QSize(399, 299));
        editGrade->setMaximumSize(QSize(400, 300));
        widget = new QWidget(editGrade);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 381, 281));
        widget->setMaximumSize(QSize(405, 324));
        setStudentName = new QLineEdit(widget);
        setStudentName->setObjectName(QStringLiteral("setStudentName"));
        setStudentName->setGeometry(QRect(160, 20, 131, 21));
        labStudentName = new QLabel(widget);
        labStudentName->setObjectName(QStringLiteral("labStudentName"));
        labStudentName->setGeometry(QRect(60, 20, 41, 16));
        labStudentID = new QLabel(widget);
        labStudentID->setObjectName(QStringLiteral("labStudentID"));
        labStudentID->setGeometry(QRect(60, 70, 41, 20));
        setStudentID = new QLineEdit(widget);
        setStudentID->setObjectName(QStringLiteral("setStudentID"));
        setStudentID->setGeometry(QRect(160, 70, 131, 21));
        labCourse = new QLabel(widget);
        labCourse->setObjectName(QStringLiteral("labCourse"));
        labCourse->setGeometry(QRect(60, 120, 61, 16));
        labGrade = new QLabel(widget);
        labGrade->setObjectName(QStringLiteral("labGrade"));
        labGrade->setGeometry(QRect(60, 170, 41, 16));
        setCourseId = new QLineEdit(widget);
        setCourseId->setObjectName(QStringLiteral("setCourseId"));
        setCourseId->setGeometry(QRect(160, 120, 131, 21));
        setGrade = new QLineEdit(widget);
        setGrade->setObjectName(QStringLiteral("setGrade"));
        setGrade->setGeometry(QRect(160, 170, 131, 21));
        yesButton = new QPushButton(widget);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(50, 220, 93, 28));
        noButton = new QPushButton(widget);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(190, 220, 93, 28));
        label_2 = new QLabel(editGrade);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-260, -370, 1071, 841));
        label_2->raise();
        widget->raise();

        retranslateUi(editGrade);

        QMetaObject::connectSlotsByName(editGrade);
    } // setupUi

    void retranslateUi(QWidget *editGrade)
    {
        editGrade->setWindowTitle(QApplication::translate("editGrade", "\347\274\226\350\276\221\345\255\246\347\224\237\346\210\220\347\273\251", 0));
        labStudentName->setText(QApplication::translate("editGrade", "\345\247\223\345\220\215", 0));
        labStudentID->setText(QApplication::translate("editGrade", "\345\255\246\345\217\267", 0));
        labCourse->setText(QApplication::translate("editGrade", "\350\257\276\347\250\213\345\217\267", 0));
        labGrade->setText(QApplication::translate("editGrade", "\346\210\220\347\273\251", 0));
        yesButton->setText(QApplication::translate("editGrade", "\347\241\256\350\256\244", 0));
        noButton->setText(QApplication::translate("editGrade", "\350\277\224\345\233\236", 0));
        label_2->setText(QApplication::translate("editGrade", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class editGrade: public Ui_editGrade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITGRADE_H
