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
    Gerente gerent1("hombre","Gustavo",Cumpleanhos(12,05,1901),"oficina1",12345);
    Gerente gerent2("Mujer","Filomena",Cumpleanhos(15,07,1900),"Seguridad Informatica",300118);
    Conserje conser1("Hombre","Omero",Cumpleanhos (10,06,1999),"Mañana",850);
    Conserje conser2("Hombre","Roberto",Cumpleanhos (11,06,1980),"Tarde",850);
    vector <Persona*> personas;
    personas.push_back(&gerent1);
    personas.push_back(&gerent2);
    personas.push_back(&conser1);
    personas.push_back(&conser2);
    for(int x=0;x<personas.size();x++)
        personas[x]->mostrar();
    //gerent2.mostrar();
}
