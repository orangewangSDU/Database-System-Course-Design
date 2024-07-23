/********************************************************************************
** Form generated from reading UI file 'eidtTeacherMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EIDTTEACHERMESSAGE_H
#define UI_EIDTTEACHERMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eidtTeacherMessage
{
public:
    QWidget *dockWidgetContents;
    QWidget *widget;
    QLineEdit *setTeacherName;
    QLabel *labTeacherName;
    QLabel *labTeacherID;
    QLineEdit *setTeacherID;
    QLabel *labSex;
    QLabel *labAge;
    QLabel *labMajor;
    QComboBox *setSex;
    QSpinBox *setAge;
    QComboBox *setMajor;
    QPushButton *yesButton;
    QPushButton *noButton;
    QLabel *label_5;

    void setupUi(QDockWidget *eidtTeacherMessage)
    {
        if (eidtTeacherMessage->objectName().isEmpty())
            eidtTeacherMessage->setObjectName(QStringLiteral("eidtTeacherMessage"));
        eidtTeacherMessage->setEnabled(true);
        eidtTeacherMessage->resize(414, 370);
        eidtTeacherMessage->setMinimumSize(QSize(413, 369));
        eidtTeacherMessage->setMaximumSize(QSize(414, 370));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 391, 271));
        setTeacherName = new QLineEdit(widget);
        setTeacherName->setObjectName(QStringLiteral("setTeacherName"));
        setTeacherName->setGeometry(QRect(150, 40, 141, 21));
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
        setTeacherID = new QLineEdit(widget);
        setTeacherID->setObjectName(QStringLiteral("setTeacherID"));
        setTeacherID->setGeometry(QRect(150, 90, 141, 21));
        labSex = new QLabel(widget);
        labSex->setObjectName(QStringLiteral("labSex"));
        labSex->setGeometry(QRect(70, 140, 41, 16));
        labAge = new QLabel(widget);
        labAge->setObjectName(QStringLiteral("labAge"));
        labAge->setGeometry(QRect(70, 180, 41, 20));
        labMajor = new QLabel(widget);
        labMajor->setObjectName(QStringLiteral("labMajor"));
        labMajor->setGeometry(QRect(50, 220, 81, 21));
        setSex = new QComboBox(widget);
        setSex->setObjectName(QStringLiteral("setSex"));
        setSex->setGeometry(QRect(170, 140, 87, 22));
        setAge = new QSpinBox(widget);
        setAge->setObjectName(QStringLiteral("setAge"));
        setAge->setGeometry(QRect(190, 180, 46, 22));
        setMajor = new QComboBox(widget);
        setMajor->setObjectName(QStringLiteral("setMajor"));
        setMajor->setGeometry(QRect(150, 220, 141, 22));
        yesButton = new QPushButton(dockWidgetContents);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(70, 290, 93, 28));
        noButton = new QPushButton(dockWidgetContents);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(230, 290, 93, 28));
        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-100, -240, 1121, 841));
        eidtTeacherMessage->setWidget(dockWidgetContents);
        label_5->raise();
        widget->raise();
        yesButton->raise();
        noButton->raise();

        retranslateUi(eidtTeacherMessage);

        QMetaObject::connectSlotsByName(eidtTeacherMessage);
    } // setupUi

    void retranslateUi(QDockWidget *eidtTeacherMessage)
    {
        eidtTeacherMessage->setWindowTitle(QApplication::translate("eidtTeacherMessage", "\347\274\226\350\276\221\346\225\231\345\270\210\344\277\241\346\201\257", 0));
        labTeacherName->setText(QApplication::translate("eidtTeacherMessage", "\345\247\223\345\220\215", 0));
        labTeacherID->setText(QApplication::translate("eidtTeacherMessage", "\345\267\245\345\217\267", 0));
        labSex->setText(QApplication::translate("eidtTeacherMessage", "\346\200\247\345\210\253", 0));
        labAge->setText(QApplication::translate("eidtTeacherMessage", "\345\271\264\351\276\204", 0));
        labMajor->setText(QApplication::translate("eidtTeacherMessage", "\346\216\210\350\257\276\344\270\223\344\270\232", 0));
        setSex->clear();
        setSex->insertItems(0, QStringList()
         << QApplication::translate("eidtTeacherMessage", "\347\224\267", 0)
         << QApplication::translate("eidtTeacherMessage", "\345\245\263", 0)
        );
        setMajor->clear();
        setMajor->insertItems(0, QStringList()
         << QApplication::translate("eidtTeacherMessage", "\347\273\217\346\265\216\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\350\264\242\346\224\277\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\351\207\221\350\236\215\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\347\273\217\346\265\216\344\270\216\350\264\270\346\230\223\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\346\263\225\345\255\246", 0)
         << QApplication::translate("eidtTeacherMessage", "\344\270\255\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\346\225\231\350\202\262\345\255\246", 0)
         << QApplication::translate("eidtTeacherMessage", "\344\270\255\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\345\244\226\345\233\275\350\257\255\350\250\200\346\226\207\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\345\216\206\345\217\262\345\255\246", 0)
         << QApplication::translate("eidtTeacherMessage", "\346\225\260\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\347\211\251\347\220\206\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\345\214\226\345\255\246\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\346\234\272\346\242\260\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\347\224\265\345\255\220\344\277\241\346\201\257\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\350\207\252\345\212\250\345\214\226\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\350\256\241\347\256\227\346\234\272\347\261\273", 0)
         << QApplication::translate("eidtTeacherMessage", "\350\210\252\347\251\272\350\210\252\345\244\251\347\261\273", 0)
        );
        yesButton->setText(QApplication::translate("eidtTeacherMessage", "\347\241\256\350\256\244", 0));
        noButton->setText(QApplication::translate("eidtTeacherMessage", "\350\277\224\345\233\236", 0));
        label_5->setText(QApplication::translate("eidtTeacherMessage", "<html><head/><body><p><img src=\":/image/R-C.jpg\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class eidtTeacherMessage: public Ui_eidtTeacherMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EIDTTEACHERMESSAGE_H
