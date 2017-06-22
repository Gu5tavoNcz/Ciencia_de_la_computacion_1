#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include "Point.h"

using namespace std;


class Vector
{
public:
    double xStar,xEnd,yStar,yEnd;
    double star(double mi_x,double mi_y)
    {
        xStar=mi_x;
        yStar=mi_y;
    }
    double fin(double mi_x,double mi_y)
    {
        xEnd=mi_x;
        yEnd=mi_y;
    }
    void mostarPuntos()
    {
        cout<<"Puntos de inicio: "<<xStar<<","<<yStar<<endl;
        cout<<"Puntos de final: "<<xEnd<<","<<yEnd<<"\n"<<endl;
    }
};

class VectorPunto
{
public:
    Point inicio,fin;

};



#endif // VECTOR_H
