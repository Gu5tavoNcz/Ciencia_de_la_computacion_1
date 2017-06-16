#ifndef POLYGON_H
#define POLYGON_H
#include <PointArray.h>
#include <Point.h>
#include <cmath>

#endif // POLYGON_H
class Poligono{

    protected:
        PointArray Points;
        static int numPolygons;
    public:
        Poligono(Point[],const int);
        Poligono(PointArray &);
        ~Poligono();
        virtual  double area()const=0;
        static int getNumPolygon();
        int getNumSides();
        PointArray * getPoints(){return &Points;};

};
class Rectangle :public Poligono{
    public:
        Rectangle(Point &, Point &);
        Rectangle(int,int,int,int);
        double area()const;

};
class Triangle:public Poligono{
    public:
        Triangle(Point,Point,Point);
        double area()const;

};
