#include <iostream>
#include <stdio.h>
#include"Persona.h"
#include"Asalariado.h"
#include "Obrero.h"

using namespace std;

int main()
{
    Persona persona1("Wilda",24);
    Asalariado persona2("Deisy",23,850);
    Obrero persona3("Jeison",25,1000,"Guardia");
    persona1.mostrarPersona();
    persona2.mostrarAsalariado();
    persona3.mostrarObrero();
}
