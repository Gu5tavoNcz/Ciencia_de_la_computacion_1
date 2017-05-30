#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
#include <iostream>

using namespace std;

class Gerente: public Persona
{
protected:
    int sueldo;
    string oficina;
public:
    Gerente(string miGenero, string miNombre,Cumpleanhos miCumple, string miOficina, int miSueldo);
    void mostrar();
};

#endif // GERENTE_H
