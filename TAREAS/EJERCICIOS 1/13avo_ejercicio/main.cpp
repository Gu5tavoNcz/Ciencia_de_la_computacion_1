#include<iostream>
#include <cstdlib>

using namespace std;

/*
Reescriba el ejercicio 12 utilizando punteros en lugar de arreglos.
 */

void reversa(int *punt,int *n)
{
    int temp;
    for(int i=0;i<(*n/2);i++)
    {
        temp=*punt[(n-1)-i];
        *punt[(n-1)-i]=*punt[i];
        *punt[i]=temp;
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