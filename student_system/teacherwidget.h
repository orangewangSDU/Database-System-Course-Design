#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"editCourseMessage.h"
#include"eidtTeacherMessage.h"
#include"showallgrade.h"
#include"editGrade.h"
#include "frmmessagebox.h"

#include <QWidget>
#include <Qtimer>
#include <QMouseEvent>
#include <QDesktopWidget>
#include <QDateTime>

class LoginDialog;

namespace Ui {
class teacherWidget;
}

class teacherWidget : public QWidget
{
    Q_OBJECT

public:
    explicit teacherWidget(QWidget *parent = 0);
    ~teacherWidget();

private slots:
    void on_btnbackhome_clicked();

    void on_btnEdieMessage_clicked();

    void on_btnManage_clicked();

    void on_btnSetGrade_clicked();

    void on_btnShowAllGrade_clicked();

public slots:

    void showCurrentTime();

private:
    Ui::teacherWidget *ui;
    LoginDialog *login;
    editCourseMessage* ecm;
    eidtTeacherMessage* etm;
    editGrade* eg;
    ShowAllGrade* sag;

    QTimer *timer;
};

#endif // WIDGET_H
