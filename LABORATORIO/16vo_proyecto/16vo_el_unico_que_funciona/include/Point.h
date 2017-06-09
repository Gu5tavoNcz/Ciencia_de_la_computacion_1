#ifndef POINT_H
#define POINT_H


class Point
{
protected:
    int x,y;
public:
    Point();
    Point(int miX,int miY);
    int setX(int miX);
    int setY(int miY);
    int getX();
    int getY();
};

#endif // POINT_H
