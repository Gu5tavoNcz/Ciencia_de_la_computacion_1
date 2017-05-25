#include "Obrero.h"
#include<iostream>
using namespace std;

Obrero::Obrero(const string miNombre,const int miEdad,const double miSueldo,const string miCargo) : Asalariado(miNombre,miEdad,miSueldo),cargo(miCargo){}

void Obrero::mostrarObrero()
{
    cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad<<"\nSueldo: "<<sueldo<<"\nCargo: "<<cargo<<"\n\n"<<endl;
}
