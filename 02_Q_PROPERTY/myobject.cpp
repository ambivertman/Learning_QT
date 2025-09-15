#include "myobject.h"

MyObject::MyObject(QObject *parent) : QObject(parent)
{

}

QString MyObject::getName() const
{
    return m_name;
}

void MyObject::setName(QString nameValue)
{
    if(m_name == nameValue){
        return;
    }
    m_name = nameValue;
    emit nameChanged(m_name);
}

void MyObject::resetName()
{
    m_name = "default" ;
}
