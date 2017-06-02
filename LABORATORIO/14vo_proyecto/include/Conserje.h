#ifndef CONSERJE_H
#define CONSERJE_H
#include "Persona.h"
#include <iostream>

using namespace std;


class Conserje:public Persona
{
protected:
    string turno;
    double sueldo;
public:
    Conserje(string miGenero,string miNombre,Cumpleanhos miCumple,string miTurno,double miSueldo);
    void mostrar();
};

#endif // CONSERJE_H
