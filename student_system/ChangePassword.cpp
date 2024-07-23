#include "ChangePassword.h"
#include "ui_ChangePassword.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include "myhelper.h"
#include "myapp.h"

ChangePassword::ChangePassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_QuitOnClose,false);//关闭主窗口同时也会关闭子窗口
}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_yesButton_clicked()
{
    QString studentName  = ui->name->text();
    QString studentId    = ui->ID->text();
    QString oldPwd   = ui->oldpassword->text();
    QString newPwd   = ui->newpassword->text();
    QString ID = Myapp::CurrentUserId;
    if(studentName.isEmpty() && studentId.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("姓名与学号不能为空，请输入!"));
    }
    else
    {
        QSqlQuery query;
        QString sql = "select * from student where student_id='"+ID+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();//这一步是为了让query指向第一条记录

        //获取姓名所在列的编号
        int nameID = query.record().indexOf("student_name");
        //获取表中的姓名
        QString name=query.value(nameID).toString();
        //获取表中的原密码
        int PwdID = query.record().indexOf("student_password");
        QString Pwd=query.value(PwdID).toString();

        qDebug() << "name is : " <<query.value(nameID).toString();
        if(name!=studentName||ID!=studentId)
        {
            myHelper::ShowMessageBoxError(tr("姓名或学号有误，请重新输入！"));
        }
        else if(Pwd!=oldPwd&&!Pwd.isEmpty())
        {
            myHelper::ShowMessageBoxError(tr("原密码输入错误，请重新输入！"));
        }
        else if(!newPwd.isEmpty())
        {
            sql = "update student set student_password = '"+newPwd+"' where student_id='"+studentId+"';";
            qDebug() <<sql;
            query.exec(sql);

            qDebug() <<"update ok!";

            myHelper::ShowMessageBoxInfo(tr("您的密码修改成功，请返回！"));
        }

    }
}

void ChangePassword::on_noButton_clicked()
{
    this->close();
}
