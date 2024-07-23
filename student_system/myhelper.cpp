#include "myhelper.h"
#include <QApplication>
#include "frmmessagebox.h"

#include <QTime>
#include <QProcess>
#include <QSqlQuery>
#include <QDebug>

myHelper::myHelper(QObject *parent) :
    QObject(parent)
{
}
/*设置编码格式为GB2312*/
void myHelper::SetGBK2312Code()
{
    QTextCodec *codec=QTextCodec::codecForName("GB2312");
    QTextCodec::setCodecForLocale(codec);
}

/*设置编码格式为UTF8*/
void myHelper::SetUTF8Code()
{
#if(QT_VERSION <= QT_VERSION_CHECK(5,0,0))
    QTextCodec *codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForTr(codec);
#endif
}

/*设置皮肤样式*/
void myHelper::SetStyle(const QString &StyleName)
{
    QFile file(QString(":/image/%1.css").arg(StyleName));
    file.open(QFile::ReadOnly);
    QString qss = QLatin1String(file.readAll());
    qApp->setStyleSheet(qss);
    qApp->setPalette(QPalette(QColor("#F0F0F0")));
}

/*加载中文字符*/
void myHelper::SetChinese()
{
    QTranslator *translator = new QTranslator(qApp);
    translator->load(":/image/qt_zh_CN.qm");
    qApp->installTranslator(translator);
}
/*显示消息框   仅确认按钮*/
void myHelper::ShowMessageBoxInfo(QString info)
{
    frmMessageBox *msg = new frmMessageBox;
    msg->SetMessage(info,0);
    msg->exec();
}

/*
 *函数功能：显示错误框,仅确定按钮
 *输入参数：显示的消息内容
 *输出参数：无
 *返回值：无
*/
void myHelper::ShowMessageBoxError(QString info)
{
    frmMessageBox *msg = new frmMessageBox;
    msg->SetMessage(info,2);
    msg->exec();
}

//显示询问框,确定和取消按钮
int myHelper::ShowMessageBoxQuesion(QString info)
{
    frmMessageBox *msg = new frmMessageBox;
    msg->SetMessage(info,1);
    return msg->exec();
}

QString myHelper::ShowInputBox(QWidget *frm, QString info)
{
    bool ok;
    return QInputDialog::getText(frm,"提示",info,QLineEdit::Password,"",&ok);
}

/*
 *检验文件是否存在
*/
bool myHelper::FileIsExist(QString strFile)
{
    QFile tempFile(strFile);
    return tempFile.exists();
}

/*
 *复制文件
*/
bool myHelper::CopyFile(QString sourceFile,QString targetFile)
{
    if(FileIsExist(targetFile))
    {
        int ret = QMessageBox::information(0,"提示","文件已经存在,是否替换?",QMessageBox::Yes | QMessageBox::No);
        if(ret != QMessageBox::Yes)
        {
            return false;
        }
    }
    return QFile::copy(sourceFile,targetFile);
}

/*
 *函数功能：延时函数
 *输入参数：所要延时的时间
 *输出参数：无
 *返回值：无
*/
void myHelper::Sleep(int sec)
{
    QTime dieTime = QTime::currentTime().addMSecs(sec);
    while (QTime::currentTime() < dieTime)
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

/*
 *函数功能：设置显示时间
 *输入参数：输入年，月，日，时，分秒
 *输出参数：将系统时间显示在对应控件上
*/
void myHelper::SetSystemDateTime(int year, int month, int day, int hour, int min, int sec)
{
    QProcess p(0);

    p.start("cmd");
    p.waitForStarted();
    p.write(QString("date %1-%2-%3\n").arg(year).arg(month).arg(day).toLatin1());
    p.closeWriteChannel();
    p.waitForFinished(1000);
    p.close();

    p.start("cmd");
    p.waitForStarted();
    p.write(QString("time %1:%2:%3.00\n").arg(hour).arg(min).arg(sec).toLatin1());
    p.closeWriteChannel();
    p.waitForFinished(1000);
    p.close();
}

void myHelper::UserLoginBlog(QString tablename, QString UserId)
{
    QSqlQuery query;
    QString sql = "update "+tablename+" set user_id = '"+UserId+"' where user_type='学生';";
    qDebug() <<sql;
    qDebug() << query.exec(sql);
    qDebug() <<"update ok!";
}
