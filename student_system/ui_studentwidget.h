/********************************************************************************
** Form generated from reading UI file 'studentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWIDGET_H
#define UI_STUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Title;
    QLabel *lab_Ico;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnEidtMessage;
    QPushButton *btnManage;
    QPushButton *btnSelectGrage;
    QWidget *widgetShowData;
    QLabel *label;
    QPushButton *btnSetPassword;
    QPushButton *btnbackhome;
    QWidget *widget_3;
    QLabel *label_2;
    QGroupBox *groupBox_Down;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_CurrentUser;
    QLabel *label_SoftTime;
    QLabel *label_CurrentTime;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *studentWidget)
    {
        if (studentWidget->objectName().isEmpty())
            studentWidget->setObjectName(QStringLiteral("studentWidget"));
        studentWidget->resize(1020, 707);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(studentWidget->sizePolicy().hasHeightForWidth());
        studentWidget->setSizePolicy(sizePolicy);
        studentWidget->setMinimumSize(QSize(1019, 706));
        studentWidget->setMaximumSize(QSize(1020, 707));
        studentWidget->setAcceptDrops(false);
        studentWidget->setAutoFillBackground(true);
        layoutWidget = new QWidget(studentWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 997, 684));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(layoutWidget);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy1);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QStringLiteral("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lab_Title->setFont(font);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QStringLiteral("lab_Ico"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy3);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QStringLiteral("widget_menu"));
        sizePolicy3.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu = new QPushButton(widget_menu);
        btnMenu->setObjectName(QStringLiteral("btnMenu"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy4);
        btnMenu->setMinimumSize(QSize(31, 0));
        btnMenu->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu->setFocusPolicy(Qt::NoFocus);
        btnMenu->setFlat(true);

        horizontalLayout->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QStringLiteral("btnMenu_Min"));
        sizePolicy4.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy4);
        btnMenu_Min->setMinimumSize(QSize(31, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QStringLiteral("btnMenu_Max"));
        sizePolicy4.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy4);
        btnMenu_Max->setMinimumSize(QSize(31, 0));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QStringLiteral("btnMenu_Close"));
        sizePolicy4.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy4);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout_3->addWidget(widget_title);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, -1, -1, -1);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 131, 571));
        verticalLayoutWidget = new QWidget(widget_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 121, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEidtMessage = new QPushButton(verticalLayoutWidget);
        btnEidtMessage->setObjectName(QStringLiteral("btnEidtMessage"));

        verticalLayout_2->addWidget(btnEidtMessage);

        btnManage = new QPushButton(verticalLayoutWidget);
        btnManage->setObjectName(QStringLiteral("btnManage"));

        verticalLayout_2->addWidget(btnManage);

        btnSelectGrage = new QPushButton(verticalLayoutWidget);
        btnSelectGrage->setObjectName(QStringLiteral("btnSelectGrage"));

        verticalLayout_2->addWidget(btnSelectGrage);

        widgetShowData = new QWidget(verticalLayoutWidget);
        widgetShowData->setObjectName(QStringLiteral("widgetShowData"));
        label = new QLabel(widgetShowData);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 0, 811, 531));
        btnSetPassword = new QPushButton(widgetShowData);
        btnSetPassword->setObjectName(QStringLiteral("btnSetPassword"));
        btnSetPassword->setGeometry(QRect(0, 0, 119, 34));
        btnbackhome = new QPushButton(widgetShowData);
        btnbackhome->setObjectName(QStringLiteral("btnbackhome"));
        btnbackhome->setGeometry(QRect(0, 40, 119, 34));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnbackhome->sizePolicy().hasHeightForWidth());
        btnbackhome->setSizePolicy(sizePolicy5);
        btnbackhome->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_2->addWidget(widgetShowData);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(149, 9, 831, 581));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 10, 841, 571));

        horizontalLayout_4->addWidget(widget);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_Down = new QGroupBox(layoutWidget);
        groupBox_Down->setObjectName(QStringLiteral("groupBox_Down"));
        sizePolicy1.setHeightForWidth(groupBox_Down->sizePolicy().hasHeightForWidth());
        groupBox_Down->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(groupBox_Down);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 11, 0, 0);
        label_CurrentUser = new QLabel(groupBox_Down);
        label_CurrentUser->setObjectName(QStringLiteral("label_CurrentUser"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_CurrentUser->setFont(font1);

        horizontalLayout_3->addWidget(label_CurrentUser);

        label_SoftTime = new QLabel(groupBox_Down);
        label_SoftTime->setObjectName(QStringLiteral("label_SoftTime"));
        QFont font2;
        font2.setFamily(QStringLiteral("SimSun-ExtB"));
        font2.setPointSize(12);
        label_SoftTime->setFont(font2);

        horizontalLayout_3->addWidget(label_SoftTime);

        label_CurrentTime = new QLabel(groupBox_Down);
        label_CurrentTime->setObjectName(QStringLiteral("label_CurrentTime"));
        QFont font3;
        font3.setFamily(QStringLiteral("SimSun-ExtB"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_CurrentTime->setFont(font3);

        horizontalLayout_3->addWidget(label_CurrentTime);


        verticalLayout_3->addWidget(groupBox_Down);

        verticalWidget = new QWidget(studentWidget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(110, 70, 16, 16));
        verticalWidget->setMouseTracking(true);
        verticalWidget->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        retranslateUi(studentWidget);

        QMetaObject::connectSlotsByName(studentWidget);
    } // setupUi

    void retranslateUi(QWidget *studentWidget)
    {
        studentWidget->setWindowTitle(QApplication::translate("studentWidget", "\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        lab_Title->setText(QApplication::translate("studentWidget", "\345\261\261\344\270\234\345\244\247\345\255\246\345\255\246\347\224\237\351\200\211\350\257\276\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\342\200\224\342\200\224\345\255\246\347\224\237\347\253\257", 0));
        lab_Ico->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("studentWidget", "\350\217\234\345\215\225", 0));
#endif // QT_NO_TOOLTIP
        btnMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("studentWidget", "\346\234\200\345\260\217\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Max->setToolTip(QApplication::translate("studentWidget", "\346\234\200\345\244\247\345\214\226", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Max->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("studentWidget", "\345\205\263\351\227\255", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        btnEidtMessage->setText(QApplication::translate("studentWidget", "\344\277\241\346\201\257\347\273\264\346\212\244", 0));
        btnManage->setText(QApplication::translate("studentWidget", "\351\200\211\350\257\276\347\256\241\347\220\206", 0));
        btnSelectGrage->setText(QApplication::translate("studentWidget", "\346\210\220\347\273\251\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("studentWidget", "<html><head/><body><p><img src=\":/image/OIP-C.jpg\"/></p></body></html>", 0));
        btnSetPassword->setText(QApplication::translate("studentWidget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
#ifndef QT_NO_TOOLTIP
        btnbackhome->setToolTip(QApplication::translate("studentWidget", "\350\277\224\345\233\236\344\270\273\351\241\265", 0));
#endif // QT_NO_TOOLTIP
        btnbackhome->setText(QApplication::translate("studentWidget", "\350\277\224\345\233\236\344\270\273\351\241\265", 0));
        label_2->setText(QApplication::translate("studentWidget", "<html><head/><body><p><img src=\":/image/42fbb8fc-fba8-4583-ad90-78814560637f.jpg\"/></p></body></html>", 0));
        groupBox_Down->setTitle(QString());
        label_CurrentUser->setText(QApplication::translate("studentWidget", "\345\275\223\345\211\215\347\224\250\346\210\267", 0));
        label_SoftTime->setText(QApplication::translate("studentWidget", "\347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        label_CurrentTime->setText(QApplication::translate("studentWidget", "\345\275\223\345\211\215\346\227\266\351\227\264", 0));
    } // retranslateUi

};

namespace Ui {
    class studentWidget: public Ui_studentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWIDGET_H
