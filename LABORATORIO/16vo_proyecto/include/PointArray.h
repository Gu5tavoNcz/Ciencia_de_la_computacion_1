#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    int tamano;
    Point *puntos;
    void redimensionar(int miTamano);
public:
    PointArray();
    PointArray(Point misPuntos[],int miTamano);
    PointArray(PointArray &p);
    ~PointArray();
};

#endif // POINTARRAY_H
