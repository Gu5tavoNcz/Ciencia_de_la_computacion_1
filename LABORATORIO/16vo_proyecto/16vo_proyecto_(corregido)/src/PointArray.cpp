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

void PointArray::agregar(Point &p)
{
    redimensionar(tamano+1);
    puntos[tamano-1]=p;
}

void PointArray::borrar()
{
    redimensionar(0);
}

void PointArray::insertar(int posicion,Point &p)
{
    redimensionar(tamano+1);
    for(int i=tamano-1;i>posicion;i--)
    {
            puntos[i]=puntos[i-1];
    }
}

void PointArray::remover(int posicion,Point &p)
{
    if(posicion>=0 && posicion<tamano)
    {
        for(int i=posicion;i<tamano-2;i++)
        {
            puntos[i]=puntos[i+1];
        }
        redimensionar(tamano-1);
    }
}
