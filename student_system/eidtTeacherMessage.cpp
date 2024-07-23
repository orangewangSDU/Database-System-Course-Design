#include "eidtTeacherMessage.h"
#include "ui_eidtTeacherMessage.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>
#include "myhelper.h"
#include "myapp.h"

eidtTeacherMessage::eidtTeacherMessage(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::eidtTeacherMessage)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_QuitOnClose,false);//关闭主窗口同时也会关闭子窗口
}

eidtTeacherMessage::~eidtTeacherMessage()
{
    delete ui;
}

void eidtTeacherMessage::on_noButton_clicked()
{
    this->close();
}

void eidtTeacherMessage::on_yesButton_clicked()
{
    QString teacherName  = ui->setTeacherName->text();
    QString teacherId    = ui->setTeacherID->text();
    QString teacherSex   = ui->setSex->currentText();
    QString teacherAge   = ui->setAge->text();
    QString teacherMajor = ui->setMajor->currentText();
    QString ID = Myapp::CurrentUserId;
    if(teacherName.isEmpty() || teacherId.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("姓名与工号不能为空，请输入!"));
    }
    else
    {
        QSqlQuery query;
        QString sql = "select * from teacher where teacher_id='"+ID+"';";
        qDebug() <<sql;
        query.exec(sql);
        query.next();

        //获取姓名所在列的编号
        int nameID = query.record().indexOf("teacher_name");
        //获取表中的姓名
        QString Name=query.value(nameID).toString();
        if(ID!=teacherId||Name!=teacherName)
        {
            myHelper::ShowMessageBoxError(tr("工号或姓名有误，请重新输入！"));
        }
        else
        {
            sql = "update teacher set teacher_name = '"+teacherName+"' where teaher_id='"+teacherId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update teacher set sex = '"+teacherSex+"' where teacher_id='"+teacherId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update teacher set age = '"+teacherAge+"' where teacher_id='"+teacherId+"';";
            qDebug() <<sql;
            query.exec(sql);
            sql = "update teacher set major = '"+teacherMajor+"' where teacher_id='"+teacherId+"';";
            qDebug() <<sql;
            query.exec(sql);

            qDebug() <<"update ok!";

            myHelper::ShowMessageBoxInfo(tr("您的信息更新成功,请返回!"));
        }
    }
}
