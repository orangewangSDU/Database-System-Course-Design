#include "logindialog.h"
#include "ui_logindialog.h"
#include "iconhelper.h"
#include "myapp.h"

#include <QSqlQuery>
#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_btnCancel_clicked()
{
    this->close();
}

void LoginDialog::on_btnLogin_clicked()
{
    QString UserId = ui->UerId->text().trimmed();
    QString UserPwd = ui->UerPwd->text().trimmed();
    ui->UerPwd->setFocus();
    //学生登录
    if(ui->rbtnStudent->isChecked()){
        if(!UserPwd.isEmpty()&&!UserId.isEmpty())
        {
            QSqlQuery query;
            QString sql = "select student_password from student where student_id='"+UserId+"';";
            qDebug() <<sql;
            qDebug() <<query.exec(sql);  //执行了上面的sql语句
            if(query.exec(sql))
            {
                qDebug() <<sql;
                qDebug() <<"ok+++++++";
                qDebug() <<sql;
            }
            query.next();
            QString studentPwd = query.value(0).toString();
            if(studentPwd == UserPwd)
            {
                Myapp::LastLoginter = ui->UerId->text();
                Myapp::CurrentUserId = Myapp::LastLoginter;
                Myapp::CurrentUserPwd = ui->UerPwd->text();
                Myapp::CurrentUserType = tr("学生");
                Myapp::WriteConfig();        //写进配置文件

                //写到数据库中的current_user表中，表示当前登录的用户
               // myHelper::UserLoginBlog("current_user", ui->UerId->text());
                WriteCurrentUser( Myapp::CurrentUserId,Myapp::CurrentUserType,Myapp::CurrentUserPwd);

                sw=new studentWidget;
                sw->show();
                this->close();
            }
            else
            {
                myHelper::ShowMessageBoxError(tr("账号或密码错误，请重新输入!"));
                ui->UerId->clear();
                ui->UerPwd->setFocus();
            }
        }
    }
    //教师登录
    else if(ui->rbtnTeacher->isChecked())
    {
        if(!UserPwd.isEmpty()&&!UserId.isEmpty())
        {
            QSqlQuery query;
            QString sql = "select teacher_password from teacher where teacher_id='"+UserId+"';";
            qDebug() <<sql;
            qDebug() <<query.exec(sql);  //执行了上面的sql语句
            if(query.exec(sql))
            {
                qDebug() <<sql;
                qDebug() <<"ok+++++++";
                qDebug() <<sql;
            }
            query.next();
            QString teacherPwd = query.value(0).toString();
            if(teacherPwd == UserPwd)
            {
                Myapp::LastLoginter = ui->UerId->text();
                Myapp::CurrentUserId = Myapp::LastLoginter;
                Myapp::CurrentUserPwd = ui->UerPwd->text();
                Myapp::CurrentUserType = tr("教师");
                Myapp::WriteConfig();           //写进配置文件

                WriteCurrentUser( Myapp::CurrentUserId,Myapp::CurrentUserType,Myapp::CurrentUserPwd);

                tw=new teacherWidget;
                tw->show();
                this->close();
            }
            else
            {
                myHelper::ShowMessageBoxError(tr("账号或密码错误，请重新输入!"));
                ui->UerId->clear();
                ui->UerPwd->setFocus();
            }
        }
    }
}

/*
 *函数功能：保存当前用户名和类型
 *输入参数：数据表名，用户名，用户类型，用户密码
 *说明：在插入时总会先判断，若有数值，进行删除在插入
*/
void LoginDialog::WriteCurrentUser(QString userid, QString usertype, QString userpwd)
{
    if(FindTableIsEmpty("current_user") != 0)
    {
        this->DeleteTableContent("current_user");
        qDebug() <<"delete table ok";
    }
    QSqlQuery query;
    QString sql = "insert into current_user values('"+userid+"','"+usertype+"','"+userpwd+"')"+";";
    qDebug() <<sql;
    query.exec(sql);
    qDebug() <<"insert into table ok";

}

/*
 *函数功能：检查某个表是否空表
 *输入参数：表名称
 *返回值：表中的字段值，根据返回值可以判断是否为空
*/
int LoginDialog::FindTableIsEmpty(QString tablename)
{
    int value = 0;
    QString sql = "select count(*) from "+tablename+";";
    qDebug() <<sql;
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        value = query.value(0).toInt();
        qDebug() <<"in "<<value;
    }
    qDebug()<<"out "<<value;
    return value;
}

/*
 *函数功能：删除表中的内容
 *
*/
void LoginDialog::DeleteTableContent(QString tablename)
{
    QString sql ="delete from "+tablename+";";
    qDebug() <<sql;
    QSqlQuery query;
    query.exec(sql);
}
