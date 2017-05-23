#include <iostream>
#include <vector>
#include "Alumno.h"
using namespace std;

int main()
{
    Alumno Alumno1("Gustavo","Masculino",89,848651,"CCOMP",05);
    Alumno Alumno2("Israel","Masculino",48,518641,"CCOMP",19);
    vector <Persona*> personas;
    personas.push_back(&Alumno1);
    personas.push_back(&Alumno2);
    for(int x=0;x<personas.size();x++)
        personas[x]->mostrar();
}
