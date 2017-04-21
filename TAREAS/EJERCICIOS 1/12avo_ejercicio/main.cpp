#include<iostream>
#include <cstdlib>

using namespace std;

/*
Escriba una función reversa que tome como argumentos un arreglo de enteros y su longitud, 
dicha función debe revertir todo el contenido del arreglo original. La función no retorna ningún valor.
 */

int reversa(int arr[],int n)
{
    int temp;
    for(int i=0;i<(n/2);i++)
    {
        temp=arr[(n-1)-i];
        arr[(n-1)-i]=arr[i];
        arr[i]=temp;
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