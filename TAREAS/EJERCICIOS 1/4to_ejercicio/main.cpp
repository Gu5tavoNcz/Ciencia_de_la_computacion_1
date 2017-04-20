#include<iostream>
#include <cstdlib>

using namespace std;
/*
Escriba una función para calcular la potencia de dos números, dicha función debe recibir dos
argumentos, la base y el exponente y debe retornar el resultado.
 */
int exponente(int base,int exp)
{
    int resultado=1;
    for(int i=0;i<exp;i++)
    {
        resultado*=base;
    }
    return resultado;
}

int main()
{
    int num,exp;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"Ingrese su exponente: ";
    cin>>exp;
    cout<<"El numero "<<num<<" evelado a "<<exp<<" es : "<<exponente(num,exp)<<endl;
}
