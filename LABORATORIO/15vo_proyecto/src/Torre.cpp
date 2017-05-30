#include "Torre.h"
#include <iostream>

using namespace std;

void Torre::imprimir()
{
    for(size_t i=0;i<A.size();i++)
    cout<<A[i]->mensaje();
}
