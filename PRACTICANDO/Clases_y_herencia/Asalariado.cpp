#include "Asalariado.h"
#include<iostream>
using namespace std;

Asalariado::Asalariado(const string miNombre,const int miEdad,const double miSueldo):Persona(miNombre,miEdad),sueldo(miSueldo){}

void Asalariado::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
}