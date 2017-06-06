#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    int tamano;
    Point *puntos;
    void redimensionar(int tamano);
public:
    PointArray();
    PointArray(Point misPuntos[],int tamano);
    PointArray(PointArray &p);
};

#endif // POINTARRAY_H
