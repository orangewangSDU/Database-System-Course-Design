#include "editCourseMessage.h"
#include "ui_editCourseMessage.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include "myhelper.h"

editCourseMessage::editCourseMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editCourseMessage)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_QuitOnClose,false);//关闭主窗口同时也会关闭子窗口
}

editCourseMessage::~editCourseMessage()
{
    delete ui;
}

void editCourseMessage::on_noButton_clicked()
{
    this->close();
}

void editCourseMessage::on_yesButton_clicked()
{
    QString courseName  = ui->setcourseName->text();
    QString courseId    = ui->setcourseID->text();
    QString teacherName  = ui->setteacherName->text();
    QString credit   = ui->setCredit->text();
    QString semester   = ui->settime->currentText();
    QString major = ui->setMajor->currentText();
    QString property = ui->setCharator->currentText();
    QString capacity = ui->setcapacity->text();
    if(courseName.isEmpty() || courseId.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("课程号课程名不能为空，请输入!"));
    }
    else
    {
        QSqlQuery query;
        QString sql = "select * from course where course_id='"+courseId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();

        //获取姓名所在列的编号
        int nameID = query.record().indexOf("course_name");
        //获取表中的姓名
        QString Name=query.value(nameID).toString();
        if(Name.isEmpty())
        {
            sql = "insert into course values('"+courseId+"','"+courseName+"','"+semester+"','"+credit+"','"+major+"','"+teacherName+"','"+capacity+"','"+property+"')"+";";
            qDebug() <<sql;
            query.exec(sql);

            qDebug() <<"update ok!";
            myHelper::ShowMessageBoxInfo(tr("您的课程更新成功，请返回!"));
        }
        else
        {
            sql = "update course set course_name = '"+courseName+"' where course_id='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update course set semester = '"+semester+"' where course_id=='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update course set credit = '"+credit+"' where course_id=='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update course set major = '"+major+"' where course_id=='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update course set capacity = '"+capacity+"' where course_id=='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update course set property = '"+property+"' where course_id=='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);
            qDebug() <<"update ok!";

            myHelper::ShowMessageBoxInfo(tr("课程信息更新成功,请返回!"));
        }
    }
}
