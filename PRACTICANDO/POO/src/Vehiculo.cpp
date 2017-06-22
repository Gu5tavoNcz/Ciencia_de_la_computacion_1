#include "Vehiculo.h"

Vehiculo::Vehiculo(const string mi_licencia,const int mi_anio)
{
    licencia=mi_licencia;
    anio=mi_anio;
}

void Vehiculo::mostrar()
{
    cout<<"Licencia: "<<licencia<<endl;
    cout<<"Anio: "<<anio<<endl;
}

Auto::Auto(string mi_licencia,int mi_anio,string mi_color):Vehiculo(mi_licencia,mi_anio),color(mi_color){}

void Auto::mostrar()
{
    Vehiculo::mostrar();
    cout<<"Color: "<<color<<endl;
}

Camion::Camion(string mi_licencia,int mi_anio,string mi_carga,double mi_peso):Vehiculo(mi_licencia,mi_anio)
{
    carga=mi_carga;
    peso=mi_peso;
}

void Camion::mostrar()
{
    Vehiculo::mostrar();
    cout<<"Tipo de carga: "<<carga<<endl;
    cout<<"Peso de carga: "<<peso<<endl;
}
