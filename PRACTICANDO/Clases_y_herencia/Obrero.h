#ifndef OBRERO_H
#define OBRERO_H
#include "Asalariado.h"
#include<iostream>
using namespace std;

class Obrero:public Asalariado{
protected:
    string cargo;
public:
    Obrero(const string miNombre,const int miEdad,const double miSueldo,const string miCargo);
    void mostrarObrero();

};

#endif /* OBRERO_H */

