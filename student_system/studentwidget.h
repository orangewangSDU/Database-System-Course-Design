#ifndef STUDENTWIDGET_H
#define STUDENTWIDGET_H
#include"editStudentMessage.h"
#include"ChooseCourse.h"
#include"selectselfgrade.h"
#include"ChangePassword.h"
#include <QWidget>
#include <Qtimer>
#include "frmmessagebox.h"
#include <QMouseEvent>
#include <QDesktopWidget>
#include <QDateTime>

class LoginDialog;

namespace Ui {
class studentWidget;
}

class studentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit studentWidget(QWidget *parent = 0);
    ~studentWidget();

private slots:
    void on_btnbackhome_clicked();

    void on_btnEidtMessage_clicked();

    void on_btnManage_clicked();

    void on_btnSelectGrage_clicked();

    void on_btnSetPassword_clicked();

public slots:

    void showCurrentTime();

private:
    Ui::studentWidget *ui;
    LoginDialog *login;
    editStudentMessage* esm;
    ChooseCourse* cc;
    SelectSelfGrade* ssg;
    ChangePassword*  cp;

    QTimer *timer;

};

#endif // STUDENTWIDGET_H
