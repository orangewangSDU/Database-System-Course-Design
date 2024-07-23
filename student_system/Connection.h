#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>

/*
 *函数功能：创建数据库并链接
 *说明：此函数可以进行链接数据库，若链接不上，给出最后的错误提示
*/
static bool createConnection() //此函数在main.cpp里面运行
{

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QMYSQL"); //创建一个数据库

    db.setHostName("127.0.0.1");                            //本地地址（若要远程链接，输入相应的地址）
    db.setPort(3306);                                       //设置端口号
    db.setDatabaseName("student_system");                   //设置数据库的名字
    db.setUserName("root");                                 //设置用户名字
    db.setPassword("780602");                               //设置密码
    if(!db.open())
    {
        qCritical("Can't open database: %s(%s)",
                  db.lastError().text().toLocal8Bit().data(),
                  qt_error_string().toLocal8Bit().data());

        return false;
    }
    return true;
}

static bool closeConnection()
{
    QSqlDatabase::database().close();
    return 1;
}

#endif // CONNECTION_H
