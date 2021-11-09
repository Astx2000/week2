#include<iostream>
#include "point.h"

int main()
{
    Point p1,p2,res;
    double x1,x2,y1,y2;
    std::cin>>x1>>y1;
    p1.set_x(x1);
    p1.set_y(y1);
    std::cin>>x2>>y2;
    p2.set_x(x2);
    p2.set_y(y2);
    res=p1+p2;
    //res=p1-p2;
    //res=p1*p2;
    //res=p1/p2;
    std::cout<<res;
}