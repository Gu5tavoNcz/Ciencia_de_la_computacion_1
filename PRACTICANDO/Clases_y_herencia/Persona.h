#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona {
protected:
    int edad;
    string nombre;
public:
    Persona(const string miNombre,const int miEdad);
    void mostrarPersona();
    
};

#endif /* PERSONA_H */

