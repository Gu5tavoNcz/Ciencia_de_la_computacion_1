#ifndef AUTO_H
#define AUTO_H
#include "Vehiculo.h"


class Auto:public Vehiculo
{
    string estilo;

public:
    Auto(const string &mi_licencia,const int mi_anio,const string &mi_estilo) : Vehiculo(mi_licencia,mi_anio),estilo(mi_estilo){}
    const string &getEstilo() {return estilo;}
};

#endif // AUTO_H
