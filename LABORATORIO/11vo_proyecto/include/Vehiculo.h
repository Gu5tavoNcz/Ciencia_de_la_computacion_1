#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;

class Vehiculo
{
protected:
    //string color;
    string licencia;
    int anio;

public:
    Vehiculo(const string &mi_licencia,const int mi_anio) : licencia(mi_licencia),anio(mi_anio){}
    const string &getLicencia() const {return licencia;}
    const int getAnio() const {return anio;}

};

#endif // VEHICULO_H
