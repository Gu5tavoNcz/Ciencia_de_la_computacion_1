#include "PointArray.h"

PointArray::redimensionar(int miTamano)
{

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
