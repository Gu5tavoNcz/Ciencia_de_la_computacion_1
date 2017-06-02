#include "Conserje.h"

Conserje::Conserje(string miGenero,string miNombre,Cumpleanhos miCumple,string miTurno,double miSueldo)
:Persona(miGenero,miNombre,miCumple),turno(miTurno),sueldo(miSueldo){}

void Conserje::mostrar()
{
    cout<<"Genero: "<<genero<<"\nNombre: "<<nombre<<"\nTurno: "<<turno<<"\nSueldo: "<<sueldo<<endl;
}
/*
Conserje::~Conserje()
{
    //dtor
}
*/
