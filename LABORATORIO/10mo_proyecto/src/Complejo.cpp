#include <iostream>
#include "Complejo.h"

using namespace std;

Complejo::Complejo(double a,double b)
{
    r=a;
    i=b;
}

Complejo Complejo::suma(Complejo n)
{
    Complejo respuesta(r+n.r,i+n.i);
    return respuesta;
}

Complejo Complejo::resta(Complejo n)
{
    Complejo respuesta(r-n.r,i-n.i);
    return respuesta;
}

Complejo Complejo::multiplicacion(Complejo n)
{
    Complejo n1(r*n.r,r*r.i);
    Complejo n2(i*n.i,i*n.r);
    Complejo respuesta(n1.r-n2.r,n1.i+n2.i);
    return respuesta;
}

Complejo Complejo::escalar(double n)
{
    r=r*n;
    i=i*n;
}

void Complejo::imprimir()
{
    cout<<r<<","<<i<<endl;
}
