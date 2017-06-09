#include "Poligono.h"

//int Poligono::n=0;

Poligono::Poligono( const PointArray &pa) : puntos(pa) {
    ++numPoligonos;
}

Poligono::Poligono(const Point puntos[]),const int numPuntos):puntos(puntos,numPuntos){
        ++numPoligonos;
}

int Poligono::getNumSides()
{
    return puntos.getSize();
}
