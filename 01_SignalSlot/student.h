#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QWidget>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    void eat();
};

#endif // STUDENT_H
