#include <iostream>
#include <cstdlib>

using namespace std;

/*
Escriba un programa que retorne el número ingresado en palabras. Por ejemplo si el usuario
ingresa el número 1 el programa debe retornar “uno”, si el usuario ingresa el número 0 el
programa retorna “cero”... el programa solo permite números del 0 al 9, caso contrario debe
imprimir el mensaje “Número no permitido” y debe terminar cuando el usuario ingresa el
número -1.
 */
int main()
{
    int n;
    while(n!=-1)
    {
        cout<<"Ingrese un numero: ";
        cin>>n;
        switch(n)
        {
            case'1':
                cout<<"UNO"<<endl;
                break;
            case'2':
                cout<<"DOS"<<endl;
                break;
            case'3':
                cout<<"TRES"<<endl;
                break;
            case'4':
                cout<<"CUATRO"<<endl;
                break;
            case'5':
                cout<<"CINCO"<<endl;
                break;
            case'6':
                cout<<"SEIS"<<endl;
                break;
            case'7':
                cout<<"SIETE"<<endl;
                break;
            case'8':
                cout<<"OCHO"<<endl;
                break;
            case'9':
                cout<<"NUEVE"<<endl;
                break;
            case'0':
                cout<<"CERO"<<endl;
                break;
            default:
                cout<<"NUMERO NO PERMITIDO"<<endl;
        }
    }
    cout<<"PROGRAMA FINALIZADO"<<endl;
}

