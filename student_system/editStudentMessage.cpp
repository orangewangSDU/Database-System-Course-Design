#include "editStudentMessage.h"
#include "ui_editStudentMessage.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include "myhelper.h"
#include "myapp.h"

editStudentMessage::editStudentMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editStudentMessage)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_QuitOnClose,false);//关闭主窗口同时也会关闭子窗口
}

editStudentMessage::~editStudentMessage()
{
    delete ui;
}

void editStudentMessage::on_noButton_clicked()
{
    this->close();
}

void editStudentMessage::on_yesButton_clicked()
{
    QString studentName  = ui->setStudentName->text();
    QString studentId    = ui->setStudentID->text();
    QString studentSex   = ui->setSex->currentText();
    QString studentAge   = ui->setAge->text();
    QString studentMajor = ui->setMajor->currentText();
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
        query.next();

        //获取姓名所在列的编号
        int nameID = query.record().indexOf("student_name");
        //获取表中的姓名
        QString Name=query.value(nameID).toString();
        if(ID!=studentId||Name!=studentName)
        {
            myHelper::ShowMessageBoxError(tr("学号或姓名有误，请重新输入！"));
        }
        else
        {
            sql = "update student set student_name = '"+studentName+"' where student_id='"+studentId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update student set sex = '"+studentSex+"' where student_id='"+studentId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update student set age = '"+studentAge+"' where student_id='"+studentId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update student set major = '"+studentMajor+"' where student_id='"+studentId+"';";
            qDebug() <<sql;
            query.exec(sql);

            qDebug() <<"update ok!";

            myHelper::ShowMessageBoxInfo(tr("您的信息更新成功,请返回!"));
        }
    }
}
