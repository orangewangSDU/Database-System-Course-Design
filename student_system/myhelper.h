#ifndef MYHELPER_H
#define MYHELPER_H

#include <QTextCodec>
#include <QMessageBox>
#include <QInputDialog>
#include <QFile>
#include <QTranslator>
#include "Connection.h"

#include <QObject>

class myHelper : public QObject
{
    Q_OBJECT
public:
    static void SetGBK2312Code();//设置编码为GB2312
    static void SetUTF8Code();//设置编码为UTF8
    static void SetStyle(const QString &StyleName);//设置皮肤样式
    static void SetChinese();//加载中文字符

    static void Sleep(int sec);//延时

    static void SetMessage(const QString &msg,int type);//设置消息框的参数，样式……
    static QString ShowInputBox(QWidget *frm,QString info);//显示标准输入框
    static void ShowMessageBoxInfo(QString info);//显示信息框
    static void ShowMessageBoxError(QString info);//显示错误框
    static int ShowMessageBoxQuesion(QString info);//显示询问框
    static bool FileIsExist(QString strFile);
    static bool CopyFile(QString sourceFile,QString targetFile);//复制文件

    static void SetSystemDateTime(int year,int month,int day,int hour,int min,int sec);//设置系统时间

    //写入数据库中的当前用户表current_user
    static void UserLoginBlog(QString tablename, QString UserId);


public:
    explicit myHelper(QObject *parent = 0);
    // myHelper();

};

#endif // MYHELPER_H
