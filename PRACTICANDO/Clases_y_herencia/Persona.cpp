#include<iostream>
#include "Persona.h"
using namespace std;

Persona::Persona(const string miNombre,const int miEdad) {
    nombre=miNombre;
    edad=miEdad;
}

void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

