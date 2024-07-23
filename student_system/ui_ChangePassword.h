/********************************************************************************
** Form generated from reading UI file 'ChangePassword.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QLabel *label_5;
    QGroupBox *groupBox;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QWidget *widget_2;
    QLineEdit *ID;
    QLineEdit *name;
    QLineEdit *oldpassword;
    QLineEdit *newpassword;
    QPushButton *yesButton;
    QPushButton *noButton;

    void setupUi(QWidget *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(430, 405);
        ChangePassword->setMinimumSize(QSize(429, 404));
        ChangePassword->setMaximumSize(QSize(430, 405));
        ChangePassword->setMouseTracking(true);
        label_5 = new QLabel(ChangePassword);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-40, -50, 1121, 841));
        groupBox = new QGroupBox(ChangePassword);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 100, 351, 271));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 10, 91, 151));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 80, 72, 25));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 40, 72, 25));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 120, 72, 25));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 72, 25));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(200, 10, 121, 151));
        ID = new QLineEdit(widget_2);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setGeometry(QRect(0, 0, 113, 25));
        name = new QLineEdit(widget_2);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(0, 40, 113, 25));
        oldpassword = new QLineEdit(widget_2);
        oldpassword->setObjectName(QStringLiteral("oldpassword"));
        oldpassword->setGeometry(QRect(0, 80, 113, 25));
        newpassword = new QLineEdit(widget_2);
        newpassword->setObjectName(QStringLiteral("newpassword"));
        newpassword->setGeometry(QRect(0, 120, 113, 25));
        yesButton = new QPushButton(groupBox);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(50, 200, 81, 30));
        noButton = new QPushButton(groupBox);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(210, 200, 81, 30));

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QWidget *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_5->setText(QApplication::translate("ChangePassword", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("ChangePassword", "\345\216\237\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("ChangePassword", "\345\247\223\345\220\215", 0));
        label_4->setText(QApplication::translate("ChangePassword", "\346\226\260\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("ChangePassword", "\345\255\246\345\217\267", 0));
        yesButton->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244", 0));
        noButton->setText(QApplication::translate("ChangePassword", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
