#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
    public:
    Point();
    ~Point();
    void set_x(double);
    void set_y(double);
    double get_x()const;
    double get_y()const;
    Point& operator=(Point);
    Point operator-(const Point&);
    Point operator+(const Point&);
    Point operator/(const Point&);
    friend bool operator>(const Point&,const Point&);
    friend bool operator<(const Point&,const Point&);
    Point operator*(const Point&);
    friend std::ostream& operator<<(std::ostream&,Point&);
    //friend std::iostream& operator>>(std::istream& , Point&);

    private:
    double m_x;
    double m_y;

};
#endif //POINT_H