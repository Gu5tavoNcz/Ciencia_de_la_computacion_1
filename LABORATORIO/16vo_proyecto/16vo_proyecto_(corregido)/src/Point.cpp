#include "Point.h"

Point::Point()
{
    x=0;
    y=0;
}

Point::Point(int miX,int miY)
{
    x=miX;
    y=miY;
}
int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

int Point::setX(int miX)
{
    x=miX;
}

int Point::setY(int miY)
{
    y=miY;
}
