/********************************************************************************
** Form generated from reading UI file 'editCourseMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCOURSEMESSAGE_H
#define UI_EDITCOURSEMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editCourseMessage
{
public:
    QPushButton *noButton;
    QPushButton *yesButton;
    QGroupBox *groupBox;
    QWidget *widget_2;
    QLineEdit *setcourseID;
    QLineEdit *setcourseName;
    QSpinBox *setCredit;
    QComboBox *settime;
    QLineEdit *setteacherName;
    QSpinBox *setcapacity;
    QComboBox *setMajor;
    QComboBox *setCharator;
    QLabel *labCourseID_2;
    QLabel *labCourseName_2;
    QLabel *labScore_2;
    QLabel *labTime_2;
    QLabel *labCharater_2;
    QLabel *labTeacher_2;
    QLabel *labCapacity_2;
    QLabel *labCharater_3;
    QLabel *label_2;

    void setupUi(QWidget *editCourseMessage)
    {
        if (editCourseMessage->objectName().isEmpty())
            editCourseMessage->setObjectName(QStringLiteral("editCourseMessage"));
        editCourseMessage->resize(448, 360);
        editCourseMessage->setMinimumSize(QSize(448, 360));
        editCourseMessage->setMaximumSize(QSize(449, 361));
        noButton = new QPushButton(editCourseMessage);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(250, 310, 93, 28));
        yesButton = new QPushButton(editCourseMessage);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(70, 310, 93, 28));
        yesButton->setMaximumSize(QSize(16777215, 16777215));
        groupBox = new QGroupBox(editCourseMessage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 421, 281));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(210, 10, 161, 251));
        setcourseID = new QLineEdit(widget_2);
        setcourseID->setObjectName(QStringLiteral("setcourseID"));
        setcourseID->setGeometry(QRect(10, 0, 131, 21));
        setcourseName = new QLineEdit(widget_2);
        setcourseName->setObjectName(QStringLiteral("setcourseName"));
        setcourseName->setGeometry(QRect(10, 30, 131, 21));
        setCredit = new QSpinBox(widget_2);
        setCredit->setObjectName(QStringLiteral("setCredit"));
        setCredit->setGeometry(QRect(50, 60, 46, 22));
        setCredit->setProperty("showGroupSeparator", QVariant(false));
        settime = new QComboBox(widget_2);
        settime->setObjectName(QStringLiteral("settime"));
        settime->setGeometry(QRect(10, 90, 121, 22));
        setteacherName = new QLineEdit(widget_2);
        setteacherName->setObjectName(QStringLiteral("setteacherName"));
        setteacherName->setGeometry(QRect(10, 150, 121, 21));
        setcapacity = new QSpinBox(widget_2);
        setcapacity->setObjectName(QStringLiteral("setcapacity"));
        setcapacity->setGeometry(QRect(50, 180, 46, 22));
        setMajor = new QComboBox(widget_2);
        setMajor->setObjectName(QStringLiteral("setMajor"));
        setMajor->setGeometry(QRect(10, 120, 121, 22));
        setCharator = new QComboBox(widget_2);
        setCharator->setObjectName(QStringLiteral("setCharator"));
        setCharator->setGeometry(QRect(20, 210, 111, 22));
        labCourseID_2 = new QLabel(groupBox);
        labCourseID_2->setObjectName(QStringLiteral("labCourseID_2"));
        labCourseID_2->setGeometry(QRect(80, 10, 72, 20));
        labCourseName_2 = new QLabel(groupBox);
        labCourseName_2->setObjectName(QStringLiteral("labCourseName_2"));
        labCourseName_2->setGeometry(QRect(80, 40, 72, 20));
        labScore_2 = new QLabel(groupBox);
        labScore_2->setObjectName(QStringLiteral("labScore_2"));
        labScore_2->setGeometry(QRect(90, 70, 41, 20));
        labTime_2 = new QLabel(groupBox);
        labTime_2->setObjectName(QStringLiteral("labTime_2"));
        labTime_2->setGeometry(QRect(70, 100, 72, 20));
        labCharater_2 = new QLabel(groupBox);
        labCharater_2->setObjectName(QStringLiteral("labCharater_2"));
        labCharater_2->setGeometry(QRect(70, 130, 72, 20));
        labTeacher_2 = new QLabel(groupBox);
        labTeacher_2->setObjectName(QStringLiteral("labTeacher_2"));
        labTeacher_2->setGeometry(QRect(70, 160, 71, 21));
        labCapacity_2 = new QLabel(groupBox);
        labCapacity_2->setObjectName(QStringLiteral("labCapacity_2"));
        labCapacity_2->setGeometry(QRect(80, 190, 72, 20));
        labCharater_3 = new QLabel(groupBox);
        labCharater_3->setObjectName(QStringLiteral("labCharater_3"));
        labCharater_3->setGeometry(QRect(70, 220, 72, 20));
        label_2 = new QLabel(editCourseMessage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-290, -290, 1071, 841));
        label_2->raise();
        noButton->raise();
        yesButton->raise();
        groupBox->raise();

        retranslateUi(editCourseMessage);

        QMetaObject::connectSlotsByName(editCourseMessage);
    } // setupUi

    void retranslateUi(QWidget *editCourseMessage)
    {
        editCourseMessage->setWindowTitle(QApplication::translate("editCourseMessage", "\347\274\226\350\276\221\350\257\276\347\250\213\344\277\241\346\201\257", 0));
        noButton->setText(QApplication::translate("editCourseMessage", "\350\277\224\345\233\236", 0));
        yesButton->setText(QApplication::translate("editCourseMessage", "\347\241\256\350\256\244", 0));
        groupBox->setTitle(QString());
        settime->clear();
        settime->insertItems(0, QStringList()
         << QApplication::translate("editCourseMessage", "2022\345\271\264\346\230\245", 0)
         << QApplication::translate("editCourseMessage", "2022\345\271\264\347\247\213", 0)
         << QApplication::translate("editCourseMessage", "2023\345\271\264\346\230\245", 0)
         << QApplication::translate("editCourseMessage", "2023\345\271\264\347\247\213", 0)
         << QApplication::translate("editCourseMessage", "2024\345\271\264\346\230\245", 0)
         << QApplication::translate("editCourseMessage", "2024\345\271\264\347\247\213", 0)
        );
        setMajor->clear();
        setMajor->insertItems(0, QStringList()
         << QApplication::translate("editCourseMessage", "\347\273\217\346\265\216\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\350\264\242\346\224\277\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\351\207\221\350\236\215\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\347\273\217\346\265\216\344\270\216\350\264\270\346\230\223\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\346\263\225\345\255\246", 0)
         << QApplication::translate("editCourseMessage", "\344\270\255\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\346\225\231\350\202\262\345\255\246", 0)
         << QApplication::translate("editCourseMessage", "\344\270\255\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\345\244\226\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\345\216\206\345\217\262\345\255\246", 0)
         << QApplication::translate("editCourseMessage", "\346\225\260\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\347\211\251\347\220\206\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\345\214\226\345\255\246\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\346\234\272\346\242\260\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\347\224\265\345\255\220\344\277\241\346\201\257\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\350\207\252\345\212\250\345\214\226\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\350\256\241\347\256\227\346\234\272\347\261\273", 0)
         << QApplication::translate("editCourseMessage", "\350\210\252\347\251\272\350\210\252\345\244\251\347\261\273", 0)
        );
        setCharator->clear();
        setCharator->insertItems(0, QStringList()
         << QApplication::translate("editCourseMessage", "\351\200\232\350\257\206\350\257\276", 0)
         << QApplication::translate("editCourseMessage", "\344\270\223\344\270\232\345\277\205\344\277\256\350\257\276", 0)
         << QApplication::translate("editCourseMessage", "\344\270\223\344\270\232\351\231\220\351\200\211\350\257\276", 0)
         << QApplication::translate("editCourseMessage", "\351\200\211\344\277\256\350\257\276", 0)
        );
        labCourseID_2->setText(QApplication::translate("editCourseMessage", "\350\257\276\347\250\213\345\217\267", 0));
        labCourseName_2->setText(QApplication::translate("editCourseMessage", "\350\257\276\347\250\213\345\220\215", 0));
        labScore_2->setText(QApplication::translate("editCourseMessage", "\345\255\246\345\210\206", 0));
        labTime_2->setText(QApplication::translate("editCourseMessage", "\345\274\200\350\256\276\345\255\246\346\234\237", 0));
        labCharater_2->setText(QApplication::translate("editCourseMessage", "\344\270\223\344\270\232\347\261\273\345\210\253", 0));
        labTeacher_2->setText(QApplication::translate("editCourseMessage", "\344\273\273\350\257\276\350\200\201\345\270\210", 0));
        labCapacity_2->setText(QApplication::translate("editCourseMessage", "\350\257\276\345\256\271\351\207\217", 0));
        labCharater_3->setText(QApplication::translate("editCourseMessage", "\350\257\276\347\250\213\345\261\236\346\200\247", 0));
        label_2->setText(QApplication::translate("editCourseMessage", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class editCourseMessage: public Ui_editCourseMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCOURSEMESSAGE_H
