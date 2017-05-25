#ifndef ASALARIADO_H
#define ASALARIADO_H
#include"Persona.h"
#include<iostream>
using namespace std;

class Asalariado : public Persona {
    protected:
        double sueldo;
    public:
        Asalariado(const string miNombre,const int miEdad,const double miSueldo);
        void mostrar();
};

#endif /* ASALARIADO_H */

