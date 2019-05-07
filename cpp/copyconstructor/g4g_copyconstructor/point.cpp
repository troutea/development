#include "point.h"

Point::Point(int x1,int y1) { x= x1, y=y1;}

Point::Point(const Point &p2) {x = p2.x; y = p2.y;}

int Point::getX()
{
    return x;

}

int Point::getY()
{
    return y;
}
Point::~Point()
{
    //dtor
}
