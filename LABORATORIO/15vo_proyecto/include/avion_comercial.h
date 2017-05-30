#ifndef AVION_COMERCIAL_H
#define AVION_COMERCIAL_H
#include "Avion.h"
#include <iostream>

using namespace std;

class avion_comercial:public Avion
{
    public:
        string mensaje();
};

#endif // AVION_COMERCIAL_H
