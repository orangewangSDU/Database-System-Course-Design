/********************************************************************************
** Form generated from reading UI file 'editStudentMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTUDENTMESSAGE_H
#define UI_EDITSTUDENTMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editStudentMessage
{
public:
    QPushButton *yesButton;
    QPushButton *noButton;
    QLabel *label_5;
    QWidget *widget;
    QLineEdit *setStudentName;
    QLabel *labTeacherName;
    QLabel *labTeacherID;
    QLineEdit *setStudentID;
    QLabel *labSex;
    QLabel *labAge;
    QLabel *labMajor;
    QComboBox *setSex;
    QSpinBox *setAge;
    QComboBox *setMajor;

    void setupUi(QWidget *editStudentMessage)
    {
        if (editStudentMessage->objectName().isEmpty())
            editStudentMessage->setObjectName(QStringLiteral("editStudentMessage"));
        editStudentMessage->resize(408, 374);
        editStudentMessage->setMinimumSize(QSize(407, 374));
        editStudentMessage->setMaximumSize(QSize(408, 375));
        yesButton = new QPushButton(editStudentMessage);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(70, 310, 93, 28));
        noButton = new QPushButton(editStudentMessage);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(240, 310, 93, 28));
        label_5 = new QLabel(editStudentMessage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-130, -210, 1121, 841));
        widget = new QWidget(editStudentMessage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 391, 271));
        setStudentName = new QLineEdit(widget);
        setStudentName->setObjectName(QStringLiteral("setStudentName"));
        setStudentName->setGeometry(QRect(150, 40, 141, 21));
        labTeacherName = new QLabel(widget);
        labTeacherName->setObjectName(QStringLiteral("labTeacherName"));
        labTeacherName->setGeometry(QRect(70, 40, 41, 21));
        QFont font;
        font.setFamily(QStringLiteral("02UtsukushiMincho"));
        font.setPointSize(9);
        labTeacherName->setFont(font);
        labTeacherID = new QLabel(widget);
        labTeacherID->setObjectName(QStringLiteral("labTeacherID"));
        labTeacherID->setGeometry(QRect(70, 90, 41, 21));
        setStudentID = new QLineEdit(widget);
        setStudentID->setObjectName(QStringLiteral("setStudentID"));
        setStudentID->setGeometry(QRect(150, 90, 141, 21));
        labSex = new QLabel(widget);
        labSex->setObjectName(QStringLiteral("labSex"));
        labSex->setGeometry(QRect(70, 140, 41, 20));
        labAge = new QLabel(widget);
        labAge->setObjectName(QStringLiteral("labAge"));
        labAge->setGeometry(QRect(70, 180, 41, 20));
        labMajor = new QLabel(widget);
        labMajor->setObjectName(QStringLiteral("labMajor"));
        labMajor->setGeometry(QRect(70, 220, 81, 21));
        setSex = new QComboBox(widget);
        setSex->setObjectName(QStringLiteral("setSex"));
        setSex->setGeometry(QRect(170, 140, 87, 22));
        setAge = new QSpinBox(widget);
        setAge->setObjectName(QStringLiteral("setAge"));
        setAge->setGeometry(QRect(190, 180, 46, 22));
        setMajor = new QComboBox(widget);
        setMajor->setObjectName(QStringLiteral("setMajor"));
        setMajor->setGeometry(QRect(150, 220, 141, 22));
        label_5->raise();
        yesButton->raise();
        noButton->raise();
        widget->raise();

        retranslateUi(editStudentMessage);

        QMetaObject::connectSlotsByName(editStudentMessage);
    } // setupUi

    void retranslateUi(QWidget *editStudentMessage)
    {
        editStudentMessage->setWindowTitle(QApplication::translate("editStudentMessage", "\347\274\226\350\276\221\345\255\246\347\224\237\344\277\241\346\201\257", 0));
        yesButton->setText(QApplication::translate("editStudentMessage", "\347\241\256\350\256\244", 0));
        noButton->setText(QApplication::translate("editStudentMessage", "\350\277\224\345\233\236", 0));
        label_5->setText(QApplication::translate("editStudentMessage", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
        labTeacherName->setText(QApplication::translate("editStudentMessage", "\345\247\223\345\220\215", 0));
        labTeacherID->setText(QApplication::translate("editStudentMessage", "\345\255\246\345\217\267", 0));
        labSex->setText(QApplication::translate("editStudentMessage", "\346\200\247\345\210\253", 0));
        labAge->setText(QApplication::translate("editStudentMessage", "\345\271\264\351\276\204", 0));
        labMajor->setText(QApplication::translate("editStudentMessage", "\344\270\223\344\270\232", 0));
        setSex->clear();
        setSex->insertItems(0, QStringList()
         << QApplication::translate("editStudentMessage", "\347\224\267", 0)
         << QApplication::translate("editStudentMessage", "\345\245\263", 0)
        );
        setMajor->clear();
        setMajor->insertItems(0, QStringList()
         << QApplication::translate("editStudentMessage", "\347\273\217\346\265\216\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\350\264\242\346\224\277\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\351\207\221\350\236\215\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\347\273\217\346\265\216\344\270\216\350\264\270\346\230\223\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\346\263\225\345\255\246", 0)
         << QApplication::translate("editStudentMessage", "\344\270\255\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\346\225\231\350\202\262\345\255\246", 0)
         << QApplication::translate("editStudentMessage", "\344\270\255\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\345\244\226\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\345\216\206\345\217\262\345\255\246", 0)
         << QApplication::translate("editStudentMessage", "\346\225\260\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\347\211\251\347\220\206\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\345\214\226\345\255\246\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\346\234\272\346\242\260\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\347\224\265\345\255\220\344\277\241\346\201\257\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\350\207\252\345\212\250\345\214\226\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\350\256\241\347\256\227\346\234\272\347\261\273", 0)
         << QApplication::translate("editStudentMessage", "\350\210\252\347\251\272\350\210\252\345\244\251\347\261\273", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class editStudentMessage: public Ui_editStudentMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTUDENTMESSAGE_H
