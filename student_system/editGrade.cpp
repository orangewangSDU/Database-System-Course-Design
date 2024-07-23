#include "editGrade.h"
#include "ui_editGrade.h"
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include "myhelper.h"

editGrade::editGrade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editGrade)
{
    ui->setupUi(this);
}

editGrade::~editGrade()
{
    delete ui;
}

void editGrade::on_yesButton_clicked()
{
    QString studentName  = ui->setStudentName->text();
    QString studentId = ui->setStudentID->text();
    QString courseId  = ui->setCourseId->text();
    QString score = ui->setGrade->text();
    if(studentName.isEmpty() && studentId.isEmpty()&&courseId.isEmpty()&&score.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("所有内容不能为空，请重新输入!"));
    }
    else
    {
        bool flag=true;//用来辅助报错判断
        QSqlQuery query;
        QString sql = "select * from student where student_id='"+studentId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();

        //获取姓名所在列的编号
        int nameID = query.record().indexOf("student_name");
        //获取表中的姓名
        QString Name=query.value(nameID).toString();
        if(Name!=studentName&&flag)
        {
            flag=false;
            myHelper::ShowMessageBoxError(tr("学号或姓名有误，请重新输入！"));
        }
        sql = "select * from student_course where course_id='"+courseId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();

        //获取姓名所在列的编号
        nameID = query.record().indexOf("course_name");
        //获取表中的姓名
        QString courseName=query.value(nameID).toString();
        if(courseName.isEmpty()&&flag)
        {
            flag=false;
            myHelper::ShowMessageBoxError(tr("课程号输入有误，请重新输入！"));
        }

        sql = "select * from student_course where course_id='"+courseId+"' and student_id='"+studentId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();
        //获取姓名所在列的编号
        nameID = query.record().indexOf("course_name");
        //获取表中的姓名
        QString courseName2=query.value(nameID).toString();
        if(courseName2.isEmpty()&&flag)
        {
            flag=false;
            myHelper::ShowMessageBoxInfo(tr("该学生未选修课程，请返回！"));
        }

        if(score.toInt()>100||score.toInt()<0&&flag){
            flag=false;
            myHelper::ShowMessageBoxInfo(tr("成绩输入错误，请重新输入！"));
        }
        if(flag&&!score.isEmpty())
        {
            sql = "update student_course set score = '"+score+"' where student_id='"+studentId+"' and course_id='"+courseId+"';";
            qDebug() <<sql;
            query.exec(sql);

            qDebug() <<"update ok!";

            myHelper::ShowMessageBoxInfo(tr("学生成绩更新成功,请返回!"));
        }
    }
}

void editGrade::on_noButton_clicked()
{
    this->close();
}
