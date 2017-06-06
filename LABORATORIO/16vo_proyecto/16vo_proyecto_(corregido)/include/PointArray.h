#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    int tamano;
    Point *puntos;
    void redimensionar(int nuevoTamano);
public:
    PointArray();
    PointArray(Point misPuntos[],int miTamano);
    PointArray(PointArray &p);
    ~PointArray();
    int getSize();
    void borrar();
};

#endif // POINTARRAY_H
