#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT

    //显式声明属性
    Q_PROPERTY(QString name READ getName WRITE setName
               RESET resetName NOTIFY nameChanged);
public:
    explicit MyObject(QObject *parent = nullptr);


    QString getName() const;
    void setName(QString nameValue);
    void resetName();

signals:
    void nameChanged(QString nameValue);

private:
    QString m_name;
};

#endif // MYOBJECT_H
