#include "widget.h"
#include "myobject.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    MyObject obj;
    obj.setProperty("name", "wangdao");
    //去除引号的两种方式
    qDebug().noquote() << "name : " << obj.property("name").toString();
    qDebug() << "name : " <<
                obj.property("name").toString().toUtf8().constData();

    obj.setProperty("height", 188);
    qDebug() << "height: " << obj.property("height").toInt();

    QObject::connect(&obj, &MyObject::nameChanged, [](QString tmp){
       qDebug() << "name after changed : " << tmp;
    });

    obj.setName("qt");

    obj.setProperty("name","wangdao");

    return a.exec();
}
