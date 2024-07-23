#include "ChooseCourse.h"
#include "ui_ChooseCourse.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include "myhelper.h"
#include "myapp.h"

ChooseCourse::ChooseCourse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseCourse)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_QuitOnClose,false);//关闭主窗口同时也会关闭子窗口
}

ChooseCourse::~ChooseCourse()
{
    delete ui;
}

void ChooseCourse::on_noButton_clicked()
{
    this->close();
}

void ChooseCourse::on_yesButton_clicked()
{
    QString studentId = Myapp::CurrentUserId;
    QString courseId  = ui->courseId->text();
    if(courseId.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("课程号不能为空，请输入!"));
    }
    else
    {
        bool flag = true;
        QSqlQuery query;
        QString sql;
        sql = "select * from student where student_id='"+studentId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();
        int sID = query.record().indexOf("student_name");
        QString studentName=query.value(sID).toString();

        sql = "select * from course where course_id='"+courseId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();
        int nameID = query.record().indexOf("course_name");
        QString courseName=query.value(nameID).toString();
        if(courseName.isEmpty())
        {
            flag=false;
            myHelper::ShowMessageBoxError(tr("课程号有误，请重新输入！"));
        }

        sql = "select * from student_course where course_id='"+courseId+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();
        int scoreID = query.record().indexOf("score");
        QString score=query.value(scoreID).toString();
        int nameID1 = query.record().indexOf("course_name");
        QString courseName1=query.value(nameID1).toString();
        if(!courseName1.isEmpty()&&score.isEmpty()&&flag){
            flag=false;
            myHelper::ShowMessageBoxError(tr("该课程你已选修，请重新输入！"));
        }

        if(score.toInt()>=60&&flag){
            flag=false;
            myHelper::ShowMessageBoxError(tr("该课程你已修完，请重新输入！"));
        }

        if(flag)
        {
            sql = "insert into student_course values('"+studentId+"','"+studentName+"','"+courseId+"','"+courseName+"',0)"+";";
            qDebug() <<sql;
            query.exec(sql);

            qDebug() <<"update ok!";

            myHelper::ShowMessageBoxInfo(tr("您的课程选择成功，请返回!"));
        }
    }
}

void ChooseCourse::on_btnSelect_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from course");
    model->setHeaderData(0, Qt::Horizontal, tr("课程号"));
    model->setHeaderData(1, Qt::Horizontal, tr("课程名"));
    model->setHeaderData(2, Qt::Horizontal, tr("开课学期"));
    model->setHeaderData(3, Qt::Horizontal, tr("学分"));
    model->setHeaderData(4, Qt::Horizontal, tr("专业类别"));
    model->setHeaderData(5, Qt::Horizontal, tr("授课教师"));
    model->setHeaderData(6, Qt::Horizontal, tr("课容量"));
    model->setHeaderData(7, Qt::Horizontal, tr("课程属性"));
    ui->tableView->setModel(model);
    ui->tableView->show();
}
