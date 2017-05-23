#include "Alumno.h"
#include <iostream>
using namespace std;

Alumno::Alumno(const string miNombre,const string miGenero,const int miEdad,const int cod,const string &carr,const int no): Persona( miNombre,miGenero,miEdad), codigo(cod),carrera(carr),nota(no){}

void Alumno::mostrar()
{
    cout<<"Nombre : "<<nombre<<endl;
    cout<<"Genero : "<<genero<<endl;
    cout<<"Edad : "<<edad<<endl;
    cout<<"Codigo : "<<codigo<<endl;
    cout<<"Carrera : "<<carrera<<endl;
    cout<<"Nota : "<<nota<<endl;
    cout<<"\n\n"<<endl;
}



