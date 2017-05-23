#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
    protected:
        string nombre,genero;
        int edad;
    public:
        Persona(const string &nom,const string &gen,const int ed);
        virtual void mostrar();

};

#endif // PERSONA_H
