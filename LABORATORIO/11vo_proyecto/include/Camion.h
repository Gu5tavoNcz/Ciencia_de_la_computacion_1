#ifndef CAMION_H
#define CAMION_H
#include "Vehiculo.h"

class Camion :public Vehiculo
{
    string tamanio;

public:
    Camion(const string &mi_licencia,const int mi_anio,const string &mi_tamanio) : Vehiculo(mi_licencia,mi_anio),tamanio(mi_tamanio){}
    const string &getTamanio() {return tamanio;}
};

#endif // CAMION_H
