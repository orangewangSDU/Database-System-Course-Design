#include "teacherwidget.h"
#include <QApplication>
#include <QApplication>
#include "myhelper.h"
#include "logindialog.h"
#include "connection.h"
#include "myapp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("System");
    QTextCodec::setCodecForLocale(codec);

    myHelper::SetStyle("blue");//蓝色风格   myHelper.h里的函数

    QTranslator translator;             //加载中文字符
    translator.load(":/image/qt_zh_CN.qm");//Qt4用QTranslator加载qt_zh_CN.qm之后，QMessageBox显示的对话框按钮，如："Yes"应该翻译为"是"，
    a.installTranslator(&translator);


    LoginDialog login;


    if(!createConnection())  //connection.h里的函数，用来连接mysql数据库
    {
        myHelper::ShowMessageBoxError(QObject::tr("数据库打开失败，无法登录"));
        return 1;
    }

    login.show();

    //closeConnection();
    return a.exec();
}
