#include <iostream>
#include <cstdlib>

using namespace std;
/*
Escriba una programa en C++ que muestre una tabla con grados Fahrenheit y su
correspondiente en grados Celsius, el rango de grados Fahrenheit debe ir de 0 a 300
subiendo de 20 en 20.
*/
int main()
{
    int fah=0;
    cout<<"Fahrenheit "<< "Celsius"<<endl;
    while(fah<=300)
    {   
        float cel;
        cel=(fah-32)*5/9;
        cout<<fah<<"   "<<cel<<endl;
        fah+=20;
    }
}
