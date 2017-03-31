#include <iostream>

using namespace std;

int main()
{
    /*
    float radio,lado,altura_r,base_r;
    cout << "Para hallar el area del circulo ingrese el RADIO: " << endl;
    cin >> radio;
    cout << "El area de su circulo es: " << (3.1416*radio)*(3.1416*radio) << endl;
    cout << "Para hallar el area del Cuadrado ingrese la longitud de un lado:: " << endl;
    cin >> lado;
    cout << "El Area del cuadrado es:  " << lado*lado << endl;
    cout << "Para hallar el area del Rectangulo ingrese la Altura del Rectangulo: " << endl;
    cin >> altura_r;
    cout << "Para hallar el area del Rectangulo ingrese la Base del Rectangulo: " << endl;
    cin >> base_r;
    cout << "El Area del rectangulo es: " << altura_r*base_r << endl;
    return 0;
    */
    /*
    int x,y,z;
    cout << "Ingrese un valor a X: ";
    cin >> x;
    cout << "Ingrese un valor a Y: ";
    cin >> y;
    cout << "Los valores origibales son: x = "<<x<<" y = "<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout << "Los valores invertidos son x = "<<x<<" y = "<<y<<endl;
    return 0;
    */


    /*

    int x,y;
    cout << "Ingrese un valor a X: ";
    cin >> x;
    cout << "Ingrese un valor a Y: ";
    cin >> y;
    cout << "Los valores origibales son: x = "<<x<<" y = "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout << "Los valores invertidos son x = "<<x<<" y = "<<y<<endl;
    return 0;
    */

    /*

    int x,y;
    cout << "Ingrese un valor a X: ";
    cin >> x;
    cout << "Ingrese un valor a Y: ";
    cin >> y;
    if(x>y)
    {
        cout << "X = "<<x<<" es mayor a Y = "<<y<<endl;
    }
    else
        cout << "Y = "<<y<<" es mayor a X = "<<x<<endl;
    */

    int x,y,z;
    cout << "Ingrese un valor a X: ";
    cin >> x;
    cout << "Ingrese un valor a Y: ";
    cin >> y;
    cout << "Ingrese un valor a Z: ";
    cin >> z;
    if(x>y)
    {
        if(x>z)
        {
            cout << "X = "<<x<<" es el numero mayor"<<endl;
        }
        else if(y>z)
        {
            cout << "Y = "<<y<<" es el numero mayor"<<endl;
        }
        else
            cout << "Z = "<<z<<" es el numero mayor"<<endl;
    }
    else if (z>y)
    {
        if(z>x)
        {
            cout << "Z = "<<z<<" es el numero mayor"<<endl;
        }
        else if(y>z)
        {
            cout << "Y = "<<y<<" es el numero mayor"<<endl;
        }
        else
            cout << "Z = "<<z<<" es el numero mayor"<<endl;
    }
    else
        cout << "Y = "<<y<<" es el numero mayor"<<endl;
}
