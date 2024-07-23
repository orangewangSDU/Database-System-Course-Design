#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QWidget>
#include <QEvent>
#include <QKeyEvent>

#include "myhelper.h"
#include"studentwidget.h"
#include"teacherwidget.h"
#include "mysqlapi.h"
#include"frmmessagebox.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

    //保存当前的用户和密码
    void WriteCurrentUser(QString username,QString usertype,QString userpwd );

    //检查表是有内容
    int FindTableIsEmpty(QString tablename);

    //删除表中内容
    void DeleteTableContent(QString tablename);

private slots:
    void on_btnCancel_clicked();

    void on_btnLogin_clicked();


    //void on_label_linkActivated(const QString &link);

private:
    Ui::LoginDialog *ui;
    studentWidget* sw;
    teacherWidget* tw;
    frmMessageBox* mbox;
};

#endif // LOGINDIALOG_H
