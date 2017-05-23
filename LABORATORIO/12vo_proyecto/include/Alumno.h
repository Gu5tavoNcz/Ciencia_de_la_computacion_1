#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
#include <iostream>
using namespace std;

class Alumno : public Persona
{
    int codigo,nota;
    string carrera;
    public:
        Alumno(const string miNombre,const string miGenero,const int miEdad,const int cod,const string &carr,const int no);
        const int &getCodigo() {return codigo;}
        void mostrar();
};

#endif // ALUMNO_H
