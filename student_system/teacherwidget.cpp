#include "teacherwidget.h"
#include "ui_teacherwidget.h"
#include "logindialog.h"
#include"editGrade.h"
#include "myapp.h"

teacherWidget::teacherWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherWidget)
{
    ui->setupUi(this);
    timer = new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(showCurrentTime()));
        timer->start(1000);

        ui->label_CurrentUser->setText(QString(tr("当前用户:%1【%2】")).arg(Myapp::CurrentUserId).arg("教师"));
        ui->label_SoftTime->setText(QString(tr("已运行:0天0时0分0秒")));
}

teacherWidget::~teacherWidget()
{
    delete ui;
}

void teacherWidget::on_btnbackhome_clicked()
{
    login=new LoginDialog ;
    login->show();
    this->close();
}

void teacherWidget::on_btnEdieMessage_clicked()
{
    etm=new eidtTeacherMessage;
    etm->show();
}

void teacherWidget::on_btnManage_clicked()
{
    ecm=new editCourseMessage;
    ecm->show();
}

void teacherWidget::on_btnSetGrade_clicked()
{
    eg=new editGrade;
    eg->show();
}

void teacherWidget::on_btnShowAllGrade_clicked()
{
    sag=new ShowAllGrade;
    sag->show();
}

int Day = 0;
int Hour = 0;
int Minute = 0;
int Second = 0;
/*
 *函数功能：显示系统时间
 *输入参数：无
 *输出参数：无
 *返回值：无
 *说明：显示时间的槽函数，用来显示当前系统的时间和软件运行的时间
*/
void teacherWidget::showCurrentTime()
{
    Second++;
    if(Second == 60)
    {
        Minute++;
        Second = 0;
    }
    if(Minute == 60)
    {
        Hour++;
        Minute = 0;
    }
    if(Hour == 24)
    {
        Day++;
        Hour = 0;
    }
    ui->label_CurrentTime->setText(QDateTime::currentDateTime().toString(tr("当前时间:yyyy.MM.dd HH:mm:ss")));
    ui->label_SoftTime->setText(QString(tr("已运行:%1天%2时%3分%4秒")).arg(Day).arg(Hour).arg(Minute).arg(Second));
}
