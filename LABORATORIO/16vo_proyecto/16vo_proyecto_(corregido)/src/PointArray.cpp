#include "PointArray.h"

void PointArray::redimensionar(int nuevoTamano)
{
    Point *pts = new Point [ nuevoTamano ];
    int minSize = ( nuevoTamano > tamano ? tamano : nuevoTamano );
    for (int i = 0; i < minSize ; i++)
        pts[i] = puntos [i];
    delete [] puntos ;
    tamano = nuevoTamano ;
    puntos = pts ;
}


PointArray::PointArray()
{
    tamano=0;
    puntos=new Point[0];
}

PointArray::PointArray(Point misPuntos[],int miTamano)
{
    tamano=miTamano;
    puntos=new Point[miTamano];
    for(int i=0;i<miTamano;i++)
    {
        puntos[i]=misPuntos[i];
    }
}

PointArray::PointArray(PointArray &p)
{
    tamano=p.tamano;
    puntos=new Point[tamano];
    for(int i=0;i<tamano;i++)
    {
        puntos[i]=p.puntos[i];
    }
}

PointArray::~PointArray()
{
    delete[] puntos;
}

int PointArray::getSize()
{
    return tamano;
}

void PointArray::borrar()
{
    redimensionar(0);
}
