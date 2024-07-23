/********************************************************************************
** Form generated from reading UI file 'showallgrade.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLGRADE_H
#define UI_SHOWALLGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllGrade
{
public:
    QGroupBox *groupBox;
    QPushButton *btnSelect;
    QPushButton *btnBack;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *setCourseName;
    QPushButton *pushButton;
    QLabel *label_5;

    void setupUi(QWidget *ShowAllGrade)
    {
        if (ShowAllGrade->objectName().isEmpty())
            ShowAllGrade->setObjectName(QStringLiteral("ShowAllGrade"));
        ShowAllGrade->resize(751, 470);
        ShowAllGrade->setMinimumSize(QSize(750, 469));
        ShowAllGrade->setMaximumSize(QSize(751, 470));
        groupBox = new QGroupBox(ShowAllGrade);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(29, 29, 691, 421));
        btnSelect = new QPushButton(groupBox);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setGeometry(QRect(210, 370, 71, 34));
        btnBack = new QPushButton(groupBox);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(380, 370, 71, 34));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 50, 611, 251));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 10, 171, 31));
        QFont font;
        font.setFamily(QStringLiteral("02UtsukushiMincho"));
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 320, 121, 31));
        setCourseName = new QLineEdit(groupBox);
        setCourseName->setObjectName(QStringLiteral("setCourseName"));
        setCourseName->setGeometry(QRect(250, 320, 161, 25));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 320, 61, 34));
        label_5 = new QLabel(ShowAllGrade);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-370, -180, 1121, 841));
        label_5->raise();
        groupBox->raise();

        retranslateUi(ShowAllGrade);

        QMetaObject::connectSlotsByName(ShowAllGrade);
    } // setupUi

    void retranslateUi(QWidget *ShowAllGrade)
    {
        ShowAllGrade->setWindowTitle(QApplication::translate("ShowAllGrade", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        groupBox->setTitle(QString());
        btnSelect->setText(QApplication::translate("ShowAllGrade", "\346\237\245\350\257\242", 0));
        btnBack->setText(QApplication::translate("ShowAllGrade", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("ShowAllGrade", "\345\205\250\344\275\223\345\220\214\345\255\246\346\210\220\347\273\251\345\261\225\347\244\272", 0));
        label_2->setText(QApplication::translate("ShowAllGrade", "\350\257\267\350\276\223\345\205\245\350\257\276\347\250\213\345\220\215", 0));
        pushButton->setText(QApplication::translate("ShowAllGrade", "\345\257\274\345\207\272", 0));
        label_5->setText(QApplication::translate("ShowAllGrade", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowAllGrade: public Ui_ShowAllGrade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLGRADE_H
