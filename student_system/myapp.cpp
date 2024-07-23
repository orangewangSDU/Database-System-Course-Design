#include <QSettings>
#include "myapp.h"

QString Myapp::AppPath = "";

//存储当前登录用户信息,方便用户密码修改和用户退出操作
QString Myapp::CurrentUserName = "";
QString Myapp::CurrentUserPwd = "";
QString Myapp::CurrentUserType = "";
QString Myapp::CurrentUserId ="";

QString Myapp::LastLoginter = "";

Myapp::Myapp()
{
}

/*
 *函数功能：读取配置文件内容
 *输入参数：无
 *输出参数：无
 *返回值:  无
*/
void Myapp::ReadConfig()
{
    QString fileName = Myapp::AppPath+"config.txt";
    //如果配置文件不存在,则以初始值继续运行
  QSettings *set = new QSettings(fileName,QSettings::IniFormat);
    set->beginGroup("AppConfig");

    set->endGroup();

}

void Myapp::WriteConfig()
{
    QString fileName = Myapp::AppPath+"config.txt";
    QSettings *set = new QSettings(fileName,QSettings::IniFormat);

    set->beginGroup("AppConfig");

    set->setValue("LastLoginer",Myapp::LastLoginter);
    set->setValue("CurrentUserPwd",Myapp::CurrentUserPwd);
    set->setValue("CurrentUserType",Myapp::CurrentUserType);
    set->value("currentUserId",Myapp::CurrentUserId);


    set->endGroup();
}
