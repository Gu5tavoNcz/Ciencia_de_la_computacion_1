#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(const string &nom,const string &gen,const int ed): nombre(nom),genero(gen),edad(ed){}

void Persona::mostrar()
{
    cout<<"Nombre : "<<nombre<<endl;
    cout<<"Genero : "<<genero<<endl;
    cout<<"Edad : "<<edad<<endl;
}
