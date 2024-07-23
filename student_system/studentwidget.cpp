#include "studentwidget.h"
#include "ui_studentwidget.h"
#include "logindialog.h"

#include "myapp.h"

studentWidget::studentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentWidget)
{
    ui->setupUi(this);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(showCurrentTime()));
    timer->start(1000);

    ui->label_CurrentUser->setText(QString(tr("当前用户:%1【%2】")).arg(Myapp::CurrentUserId).arg("学生"));
    ui->label_SoftTime->setText(QString(tr("已运行:0天0时0分0秒")));
}

studentWidget::~studentWidget()
{
    delete ui;
    delete esm;
    delete cc;
    delete ssg;
    delete cp;
}

void studentWidget::on_btnbackhome_clicked()
{
    login=new LoginDialog ;
    login->show();
    this->close();
}

void studentWidget::on_btnEidtMessage_clicked()
{
    esm=new editStudentMessage;
    esm->show();
}

void studentWidget::on_btnManage_clicked()
{
    cc=new ChooseCourse;
    cc->show();
}

void studentWidget::on_btnSelectGrage_clicked()
{
    ssg=new SelectSelfGrade;
    ssg->show();

}

void studentWidget::on_btnSetPassword_clicked()
{
    cp=new ChangePassword();
    cp->show();
}

int day = 0;
int hour = 0;
int minute = 0;
int second = 0;
/*
 *函数功能：显示系统时间
 *输入参数：无
 *输出参数：无
 *返回值：无
 *说明：显示时间的槽函数，用来显示当前系统的时间和软件运行的时间
*/
void studentWidget::showCurrentTime()
{
    second++;
    if(second == 60)
    {
        minute++;
        second = 0;
    }
    if(minute == 60)
    {
        hour++;
        minute = 0;
    }
    if(hour == 24)
    {
        day++;
        hour = 0;
    }
    ui->label_CurrentTime->setText(QDateTime::currentDateTime().toString(tr("当前时间:yyyy.MM.dd HH:mm:ss")));
    ui->label_SoftTime->setText(QString(tr("已运行:%1天%2时%3分%4秒")).arg(day).arg(hour).arg(minute).arg(second));
}
