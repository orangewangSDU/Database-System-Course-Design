/********************************************************************************
** Form generated from reading UI file 'selectselfgrade.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSELFGRADE_H
#define UI_SELECTSELFGRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectSelfGrade
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QLabel *labTitle;
    QPushButton *btnSelect;
    QPushButton *btnBack;
    QPushButton *out;

    void setupUi(QWidget *SelectSelfGrade)
    {
        if (SelectSelfGrade->objectName().isEmpty())
            SelectSelfGrade->setObjectName(QStringLiteral("SelectSelfGrade"));
        SelectSelfGrade->resize(721, 576);
        SelectSelfGrade->setMinimumSize(QSize(721, 575));
        SelectSelfGrade->setMaximumSize(QSize(722, 576));
        label = new QLabel(SelectSelfGrade);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-30, -50, 1071, 841));
        groupBox = new QGroupBox(SelectSelfGrade);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 681, 461));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 50, 641, 351));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 641, 31));
        labTitle = new QLabel(groupBox_2);
        labTitle->setObjectName(QStringLiteral("labTitle"));
        labTitle->setGeometry(QRect(240, 0, 151, 31));
        QFont font;
        font.setFamily(QStringLiteral("02UtsukushiMincho"));
        font.setPointSize(12);
        labTitle->setFont(font);
        btnSelect = new QPushButton(groupBox);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setGeometry(QRect(300, 410, 81, 34));
        btnBack = new QPushButton(groupBox);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(460, 410, 81, 34));
        out = new QPushButton(groupBox);
        out->setObjectName(QStringLiteral("out"));
        out->setGeometry(QRect(150, 410, 71, 34));

        retranslateUi(SelectSelfGrade);

        QMetaObject::connectSlotsByName(SelectSelfGrade);
    } // setupUi

    void retranslateUi(QWidget *SelectSelfGrade)
    {
        SelectSelfGrade->setWindowTitle(QApplication::translate("SelectSelfGrade", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("SelectSelfGrade", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        labTitle->setText(QApplication::translate("SelectSelfGrade", "\344\270\252\344\272\272\346\210\220\347\273\251\346\237\245\350\257\242", 0));
        btnSelect->setText(QApplication::translate("SelectSelfGrade", "\346\237\245\350\257\242", 0));
        btnBack->setText(QApplication::translate("SelectSelfGrade", "\350\277\224\345\233\236", 0));
        out->setText(QApplication::translate("SelectSelfGrade", "\345\257\274\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectSelfGrade: public Ui_SelectSelfGrade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSELFGRADE_H
