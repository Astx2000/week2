#include <iostream>
#include "point.h"

Point::Point(){}
Point::~Point(){}
void Point::set_x(double x)
{
    m_x=x;
}
void Point::set_y(double y)
{
    m_y=y;
}
double Point::get_x()const
{
    return m_x;
}
double Point::get_y()const
{
    return m_y;
}
Point& Point::operator=(Point rhs)
{
    m_x=rhs.m_x;
    m_y=rhs.m_y;
    return *this;
}
Point Point::operator+(const Point& oth)
{
    Point p;
    p.m_x = m_x + oth.m_x;
    p.m_y = m_y + oth.m_y;
    return p;
}
Point Point::operator-(const Point& oth)
{
    Point p;
    p.m_x = m_x - oth.m_x;
    p.m_y = m_y - oth.m_y;
    return p;
}
Point Point::operator*(const Point& oth)
{
    Point p;
    p.m_x = m_x * oth.m_x;
    p.m_y = m_y * oth.m_y;
    return p;
}
Point Point::operator/(const Point& oth)
{
    Point p;
    p.m_x = m_x / oth.m_x;
    p.m_y = m_y / oth.m_y;
    return p;
}
bool operator<(const Point& p1,const Point& p2)
{
    return p1.m_x<p2.m_x || p1.m_y<p2.m_y;

}
bool operator>(const Point& p1,const Point& p2)
{
    return p1.m_x>p2.m_x || p1.m_y>p2.m_y;

}
std::ostream& operator<<(std::ostream& os,Point& oth)
{
    os<<oth.m_x<<"            "<<oth.m_y;
    return os;
}


