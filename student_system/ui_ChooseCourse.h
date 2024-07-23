/********************************************************************************
** Form generated from reading UI file 'ChooseCourse.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSECOURSE_H
#define UI_CHOOSECOURSE_H

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

class Ui_ChooseCourse
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *courseId;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QTableView *tableView;
    QPushButton *btnSelect;
    QPushButton *noButton;
    QPushButton *yesButton;
    QLabel *label_2;

    void setupUi(QWidget *ChooseCourse)
    {
        if (ChooseCourse->objectName().isEmpty())
            ChooseCourse->setObjectName(QStringLiteral("ChooseCourse"));
        ChooseCourse->resize(767, 587);
        ChooseCourse->setMinimumSize(QSize(765, 586));
        ChooseCourse->setMaximumSize(QSize(767, 587));
        groupBox = new QGroupBox(ChooseCourse);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 100, 701, 401));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 350, 211, 20));
        courseId = new QLineEdit(groupBox);
        courseId->setObjectName(QStringLiteral("courseId"));
        courseId->setGeometry(QRect(270, 340, 211, 31));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 661, 31));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 0, 131, 31));
        QFont font;
        font.setFamily(QStringLiteral("02UtsukushiMincho"));
        font.setPointSize(10);
        label_3->setFont(font);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 50, 661, 271));
        btnSelect = new QPushButton(groupBox);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setGeometry(QRect(550, 340, 81, 31));
        noButton = new QPushButton(ChooseCourse);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(440, 520, 71, 31));
        yesButton = new QPushButton(ChooseCourse);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(240, 520, 71, 31));
        label_2 = new QLabel(ChooseCourse);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-20, -40, 1071, 841));
        label_2->raise();
        groupBox->raise();
        noButton->raise();
        yesButton->raise();

        retranslateUi(ChooseCourse);

        QMetaObject::connectSlotsByName(ChooseCourse);
    } // setupUi

    void retranslateUi(QWidget *ChooseCourse)
    {
        ChooseCourse->setWindowTitle(QApplication::translate("ChooseCourse", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("ChooseCourse", "\350\257\267\350\276\223\345\205\245\351\200\211\346\213\251\350\257\276\347\250\213\347\232\204\350\257\276\347\250\213\345\217\267", 0));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("ChooseCourse", "\347\216\260\346\234\211\345\217\257\351\200\211\350\257\276\347\250\213", 0));
        btnSelect->setText(QApplication::translate("ChooseCourse", "\346\237\245\350\257\242", 0));
        noButton->setText(QApplication::translate("ChooseCourse", "\350\277\224\345\233\236", 0));
        yesButton->setText(QApplication::translate("ChooseCourse", "\347\241\256\350\256\244", 0));
        label_2->setText(QApplication::translate("ChooseCourse", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ChooseCourse: public Ui_ChooseCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSECOURSE_H
