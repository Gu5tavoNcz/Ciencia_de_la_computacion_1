#include <iostream>
#include <cstdlib>

using namespace std;

/*
Escriba un programa en C++ que verifique si el número ingresado es par o impar. El
programa debe solicitar el número por teclado y solamente debe detenerse cuando el usuario
ingresa -1.
 */

int main()
{
    int n=0;
    while(n!=-1)
    {
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(n%2==0)
            cout<<"El numero es par"<<endl;
        else
            cout<<"Le numero es impar"<<endl;
    }
    cout<<"PROGRAMA FINALIZADO"<<endl;
}

