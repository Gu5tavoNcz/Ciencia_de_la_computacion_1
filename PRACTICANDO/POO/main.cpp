#include <iostream>
#include"Vehiculo.h"

using namespace std;

int main()
{
    Vehiculo car1("H2J-8492",1998);
    Auto auto1("H7L-9865",2012,"Blanco");
    Camion cam1("H9G-98236",1970,"Platanos",4759.32);
    car1.mostrar();
    cout<<"\n";
    auto1.mostrar();
    cout<<"\n";
    cam1.mostrar();
    cout<<"\n";
    Vehiculo *lista[3];
    lista[0]=new Auto("hdjh3",1977,"Plomo");
    lista[1]=new Camion("ndgd726",1982,"Electrodomesticos",3947.45);
    lista[0]->mostrar();
    lista[1]->mostrar();
}
