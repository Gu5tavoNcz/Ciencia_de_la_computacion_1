#include "Gerente.h"
#include <iostream>

using namespace std;

Gerente::Gerente(string miGenero, string miNombre,Cumpleanhos miCumple, string miOficina, int miSueldo):Persona(miGenero,miNombre,miCumple),oficina(miOficina),sueldo(miSueldo){}

/*
Gerente::~Gerente()
{
    //dtor
}
*/

void Gerente::mostrar()
{
    cout<<"Genero: "<<genero<<"\nNombre :"<<nombre<<"\nCumpleaños :"<<endl;
}
