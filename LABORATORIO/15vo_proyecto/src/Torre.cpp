#include "Torre.h"

void Torre::imprimir()
{
    for(size_t i=0;i<A.size();i++)
    cout<<A[i]->mensaje();
}
