#ifndef POLIGONO_H
#define POLIGONO_H
#include "PointArray.h"
#include "Point.h"

class Poligono
{
    protected:
        static int numPoligonos;
        PointArray puntos;

    public:
        Poligono(const PointArray &pa);
        Poligono(const Point puntos[],const int numPuntos);
        virtual double area() const = 0;
        static int getNumPoligonos(){return numPoligonos;}
        int getNumSides();
        const PointArray *getPuntos() const {return &puntos;}
        ~Poligono() {--numPoligonos;}
};

#endif // POLIGONO_H
