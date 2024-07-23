/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *btnLogin;
    QPushButton *btnCancel;
    QRadioButton *rbtnTeacher;
    QRadioButton *rbtnStudent;
    QLabel *labAccount;
    QLabel *labPwd;
    QLabel *labTip;
    QLineEdit *UerId;
    QLineEdit *UerPwd;
    QGroupBox *groupBox_2;
    QLabel *labSystemName;
    QLabel *label_5;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(1063, 692);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDialog->sizePolicy().hasHeightForWidth());
        LoginDialog->setSizePolicy(sizePolicy);
        LoginDialog->setMinimumSize(QSize(1062, 690));
        LoginDialog->setMaximumSize(QSize(1063, 692));
        LoginDialog->setAcceptDrops(false);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(260, 250, 561, 321));
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(390, 50, 112, 34));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(390, 110, 112, 34));
        rbtnTeacher = new QRadioButton(groupBox);
        rbtnTeacher->setObjectName(QStringLiteral("rbtnTeacher"));
        rbtnTeacher->setGeometry(QRect(300, 180, 111, 31));
        rbtnStudent = new QRadioButton(groupBox);
        rbtnStudent->setObjectName(QStringLiteral("rbtnStudent"));
        rbtnStudent->setGeometry(QRect(150, 180, 101, 31));
        labAccount = new QLabel(groupBox);
        labAccount->setObjectName(QStringLiteral("labAccount"));
        labAccount->setGeometry(QRect(80, 50, 41, 30));
        labPwd = new QLabel(groupBox);
        labPwd->setObjectName(QStringLiteral("labPwd"));
        labPwd->setEnabled(true);
        labPwd->setGeometry(QRect(80, 110, 41, 31));
        labTip = new QLabel(groupBox);
        labTip->setObjectName(QStringLiteral("labTip"));
        labTip->setGeometry(QRect(110, 240, 371, 51));
        UerId = new QLineEdit(groupBox);
        UerId->setObjectName(QStringLiteral("UerId"));
        UerId->setEnabled(true);
        UerId->setGeometry(QRect(169, 50, 175, 30));
        UerPwd = new QLineEdit(groupBox);
        UerPwd->setObjectName(QStringLiteral("UerPwd"));
        UerPwd->setGeometry(QRect(170, 110, 175, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        UerPwd->setFont(font);
        UerPwd->setMouseTracking(true);
        UerPwd->setAutoFillBackground(false);
        groupBox_2 = new QGroupBox(LoginDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 200, 561, 51));
        labSystemName = new QLabel(groupBox_2);
        labSystemName->setObjectName(QStringLiteral("labSystemName"));
        labSystemName->setEnabled(true);
        labSystemName->setGeometry(QRect(180, 0, 181, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labSystemName->sizePolicy().hasHeightForWidth());
        labSystemName->setSizePolicy(sizePolicy1);
        label_5 = new QLabel(LoginDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 1121, 841));
        label_5->setStyleSheet(QStringLiteral(""));
        label_5->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        groupBox->setTitle(QString());
        btnLogin->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        btnCancel->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0));
        rbtnTeacher->setText(QApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230", 0));
        rbtnStudent->setText(QApplication::translate("LoginDialog", "\345\255\246\347\224\237", 0));
        labAccount->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267", 0));
        labPwd->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", 0));
        labTip->setText(QApplication::translate("LoginDialog", "\345\255\246\347\224\237\347\231\273\345\275\225\350\257\267\344\275\277\347\224\250\345\255\246\345\217\267\357\274\214\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\350\257\267\344\275\277\347\224\250\345\267\245\345\217\267", 0));
        UerId->setText(QString());
#ifndef QT_NO_TOOLTIP
        UerPwd->setToolTip(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
#endif // QT_NO_TOOLTIP
        UerPwd->setText(QString());
        groupBox_2->setTitle(QString());
        labSystemName->setText(QApplication::translate("LoginDialog", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_5->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
