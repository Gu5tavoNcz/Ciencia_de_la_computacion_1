#include <iostream>
#include "Complejo.h"

using namespace std;

int main()
{
    Complejo num1(5,6);
    Complejo num2(8,4);
    Complejo num3(2,7);

    Complejo num4=num1.suma(num2);
    num4.imprimir();

    Complejo num5=num1.resta(num2);
    num5.imprimir();

    num3.escalar(10);
    num3.imprimir();

    Complejo num6=num1.multiplicaion(num2);
    num6.imprimir();

}
