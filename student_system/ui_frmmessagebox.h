/********************************************************************************
** Form generated from reading UI file 'frmmessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMESSAGEBOX_H
#define UI_FRMMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMessageBox
{
public:
    QGroupBox *groupBox;
    QLabel *labInfo;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnBack;
    QGroupBox *groupBox_2;
    QLabel *lab_Title;
    QLabel *lab_Ico;

    void setupUi(QWidget *frmMessageBox)
    {
        if (frmMessageBox->objectName().isEmpty())
            frmMessageBox->setObjectName(QStringLiteral("frmMessageBox"));
        frmMessageBox->resize(470, 293);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frmMessageBox->sizePolicy().hasHeightForWidth());
        frmMessageBox->setSizePolicy(sizePolicy);
        frmMessageBox->setMinimumSize(QSize(326, 270));
        frmMessageBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox = new QGroupBox(frmMessageBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 60, 471, 241));
        labInfo = new QLabel(groupBox);
        labInfo->setObjectName(QStringLiteral("labInfo"));
        labInfo->setGeometry(QRect(50, 30, 381, 101));
        sizePolicy.setHeightForWidth(labInfo->sizePolicy().hasHeightForWidth());
        labInfo->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("02UtsukushiMincho"));
        font.setPointSize(14);
        labInfo->setFont(font);
        btnOk = new QPushButton(groupBox);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(70, 150, 71, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("02UtsukushiMincho"));
        font1.setPointSize(10);
        btnOk->setFont(font1);
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(310, 150, 71, 41));
        btnCancel->setFont(font1);
        btnBack = new QPushButton(groupBox);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(190, 150, 71, 41));
        groupBox_2 = new QGroupBox(frmMessageBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 471, 51));
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        lab_Title = new QLabel(groupBox_2);
        lab_Title->setObjectName(QStringLiteral("lab_Title"));
        lab_Title->setGeometry(QRect(200, 0, 51, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("02UtsukushiMincho"));
        font2.setPointSize(12);
        lab_Title->setFont(font2);
        lab_Title->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        lab_Ico = new QLabel(frmMessageBox);
        lab_Ico->setObjectName(QStringLiteral("lab_Ico"));
        lab_Ico->setGeometry(QRect(0, 10, 31, 41));

        retranslateUi(frmMessageBox);

        QMetaObject::connectSlotsByName(frmMessageBox);
    } // setupUi

    void retranslateUi(QWidget *frmMessageBox)
    {
        frmMessageBox->setWindowTitle(QApplication::translate("frmMessageBox", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        groupBox->setTitle(QString());
        labInfo->setText(QApplication::translate("frmMessageBox", "\350\257\267\351\227\256\346\202\250\346\230\257\345\220\246\347\241\256\345\256\232\350\246\201\345\210\240\351\231\244\350\257\245\346\225\260\346\215\256\357\274\237", 0));
        btnOk->setText(QApplication::translate("frmMessageBox", "\347\241\256\350\256\244", 0));
        btnCancel->setText(QApplication::translate("frmMessageBox", "\345\217\226\346\266\210", 0));
        btnBack->setText(QApplication::translate("frmMessageBox", "\350\277\224\345\233\236", 0));
        groupBox_2->setTitle(QString());
        lab_Title->setText(QApplication::translate("frmMessageBox", "\346\217\220\347\244\272", 0));
        lab_Ico->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmMessageBox: public Ui_frmMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMESSAGEBOX_H
