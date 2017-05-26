#include "Persona.h"

Persona::Persona(string miGenero,string miNombre,Cumpleanhos miCumple)
:genero(miGenero),nombre(miNombre),cumple(miCumple){}

/*
Persona::~Persona()
{
    //dtor
}
*/
Cumpleanhos::Cumpleanhos(){}

Cumpleanhos::Cumpleanhos(int miDia,int miMes,int miAnho):dia(miDia),mes(miMes),anho(miAnho){}
/*
Cumpleanhos::edad()
{
    cout<<"Su edad es: "<<2017-anho<<" años"<<endl;
}
*/
