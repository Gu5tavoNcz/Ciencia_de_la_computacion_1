#include <iostream>

using namespace std;
//SUMA Y DIVISION
int main()
{
    int x;
    float y;
    float z=x+y;
    cout << "SUMA -> Ingrese el valor de x: ";
    cin >>x;
    cout << "SUMA -> Ingrese el valor de y: ";
    cin >>y;
    cout << "la suma de " << x <<" + " <<y<< " es: " << x+y << endl;
    z=x-y;
    cout << "RESTA -> Ingrese el valor de x: ";
    cin >>x;
    cout << "RESTA -> Ingrese el valor de y: ";
    cin >>y;
    cout << "la resta de "<< x <<" - "<< y <<" es: " << x-y << endl;
    z=x+y;
    cout << "MULTIPLICACION -> Ingrese el valor de x: ";
    cin >>x;
    cout << "MULTIPLICACION -> Ingrese el valor de y: ";
    cin >>y;
    cout << "la multiplicacion de "<<x<< " * " << y <<" es: " << x*y << endl;
    cout << "DIVISION - > Ingrese el valor de x: ";
    cin >>x;
    cout << "DIVISION - > Ingrese el valor de y: ";
    cin >>y;
    z=x/y;
    cout << "la divicion de "<<x<< " / " <<y<<" es: " << z << endl;
    return 0;
}
