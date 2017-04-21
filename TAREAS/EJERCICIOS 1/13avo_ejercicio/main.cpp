#include<iostream>
#include <cstdlib>

using namespace std;

/*
Reescriba el ejercicio 12 utilizando punteros en lugar de arreglos.
 */

int reversa(int cadena[],int n)
{
    int *p1, *p2, *temp;
    p1=cadena;
    p2=p1+(n-1);
    for(int i=0;i<(n/2);i++)
    {
        *temp=*p1;
        *p1=*p2;
        *p2=*temp;
        *p1++;
        *p2--;
    }
}

int main()
{
    int cadena[10]={1,2,3,4,5,6,7,8,9,10};
    reversa(cadena,10);
    for(int i=0;i<10;i++)
    {
        cout<<cadena[i]<<",";
    }
}