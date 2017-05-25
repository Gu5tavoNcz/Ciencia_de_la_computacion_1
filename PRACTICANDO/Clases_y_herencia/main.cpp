#include <iostream>
#include <stdio.h>
#include"Persona.h"
#include"Asalariado.h"

using namespace std;

int main()
{
    Asalariado persona2("Deisy",23,850);
    Persona persona1("Wilda",24);
    persona1.mostrarPersona();
    persona2.mostrar();
}
