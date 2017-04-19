#include<iostream>
#include <cstdlib>

using namespace std;

/*
Escriba un programa que tome una operación seguida de dos operandos y retorne el
resultado de dicha operación:
+ 50 3.6
* 4 5
La primera linea debe dar como resultado 53.6 y la segunda 20.
*/

int main()
{
    char cadena[20];
    char op1[10],op2[2];
   
    for (int i=0;i<20;i++)
    {
        cin>>cadena[i];
    }
    
    if (cadena[0]='+')
    {
        for (int i=1;i<11;i++)
        {
            op1[i-1]=cadena[i];
        }
    }
    
    for (int i=0;i<20;i++)
    {
        cout<<cadena[i];
    }
    cout<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<op1[i];
    }
}

