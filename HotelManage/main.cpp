
#include <QApplication>
#include "app/myhelper.h"
#include "logindialog.h"
#include "app/Connection.h"
#include "app/myapp.h"

#include <iostream>

#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //myHelper::SetGBK2312Code();
    //QTextCodec *codec = QTextCodec::codecForName("System");
    //QTextCodec::setCodecForLocale(codec);
    //QTextCodec::setCodecForCStrings(codec);
    //QTextCodec::setCodecForTr(codec);

    //myHelper::SetStyle("blue");//蓝色风格

    //QTranslator translator;             //加载中文字符
    //translator.load(":/image/qt_zh_CN.qm");
    //a.installTranslator(&translator);






    if(!createConnection())
    {
        myHelper::ShowMessageBoxError(QObject::tr("数据库打开失败，程序将自动关闭"));
        return 1;
    }

    LoginDialog login;
    login.show();

    //closeConnection();
    return a.exec();
}
