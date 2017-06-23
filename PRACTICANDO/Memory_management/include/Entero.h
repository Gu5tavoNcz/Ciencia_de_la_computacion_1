#ifndef ENTERO_H
#define ENTERO_H
#include <iostream>
using namespace std;

class Entero
{
private:
    int val;
public:
    Entero();
    //virtual void mostrar();
};

class EnteroCapsula
{
private:
    Entero valor;
public:
    EnteroCapsula();
};
#endif // ENTERO_H
