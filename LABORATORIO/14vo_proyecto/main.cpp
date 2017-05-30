#include <iostream>
#include "Persona.h"
#include "Gerente.h"
#include "Conserje.h"
#include<vector>

using namespace std;

int main()
{
    //vector <Persona*> personas;
    //Gerente gerente1("Masculino","Bob",Cumpleanhos(12,2,1202),"OFICINA1",2345);
    Gerente gerent1("hombre","Gustavo",Cumpleanhos(12,34,4555),"oficina1",12345);
    gerent1.mostrarPersona();
}
