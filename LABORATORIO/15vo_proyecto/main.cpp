#include <iostream>
#include "Avion.h"
#include "Torre.h"
#include "Avion_privado.h"
#include "avion_comercial.h"

using namespace std;

int main()
{
    Torre control;
    avion_comercial av_c1;
    avion_comercial av_c2;
    avion_comercial av_c3;
    control.A.push_back(&av_c1);
    control.A.push_back(&av_c2);
    control.A.push_back(&av_c3);
    
}
