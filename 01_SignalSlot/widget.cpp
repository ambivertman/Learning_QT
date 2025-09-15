#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    m_pt = new Teacher;
    m_ps = new Student;

    connect(m_pt, &Teacher::treat, m_ps, &Student::eat);

    emit m_pt->treat();
}

Widget::~Widget()
{
    delete m_ps;
    delete m_pt;
}

