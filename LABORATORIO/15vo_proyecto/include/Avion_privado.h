#ifndef AVION_PRIVADO_H
#define AVION_PRIVADO_H
#include "Avion.h"
#include <iostream>

using namespace std;

class Avion_privado:public Avion
{
    public:
        string mensaje();
};

#endif // AVION_PRIVADO_H
