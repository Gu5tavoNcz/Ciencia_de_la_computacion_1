#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Cumpleanhos
{
protected:
    int anho,mes,dia;
public:
    Cumpleanhos();
    Cumpleanhos(int miDia,int miMes,int miAnho);
    //void edad();
};

class Persona
{
protected:
    Cumpleanhos cumple;
    string genero,nombre;
public:
    Persona(string miGenero,string miNombre,Cumpleanhos miCumple);
    virtual void mostrarPersona()=0;
    virtual void edad()=0;
};

#endif // PERSONA_H
