#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;


class Vehiculo
{
private:
    string licencia;
    int anio;
public:
    Vehiculo(const string mi_licencia,const int mi_anio);
    virtual void mostrar();
};

class Auto: public Vehiculo
{
private:
    string color;
public:
    Auto(string,int,string);
    void mostrar();
};

class Camion:public Vehiculo
{
private:
    string carga;
    double peso;
public:
    Camion(string,int,string,double);
    void mostrar();
};

#endif // VEHICULO_H
