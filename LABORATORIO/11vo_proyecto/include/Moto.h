#ifndef MOTO_H
#define MOTO_H
#include "Vehiculo.h"


class Moto: public Vehiculo
{
    string color;
public:
    Moto(const string mi_licencia,const int mi_anio,const string mi_color):Vehiculo(mi_licencia,mi_anio),color(mi_color){}
    const string getColor() {return color;}
};

#endif // MOTO_H
