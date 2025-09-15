#include "student.h"
#include <QtDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::eat()
{
    qDebug() << "没钱就吃大米饭得了" << endl;
}
