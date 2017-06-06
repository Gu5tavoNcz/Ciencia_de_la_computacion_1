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
    void agregar(Point &p);
    void borrar();
    void insertar(int posicion,Point &p);
    void remover(int posicion,Point &p);
    Point *get(int posicion);
};

#endif // POINTARRAY_H
