#include<iostream>
#include <cstdlib>

using namespace std;

/*
Escriba una función recursiva para hallar la suma de los elementos de un arreglo.
 */

int sumar(int a[],int n)
{
    if(n==1)
    {
        return a[0];
    }else{
        return a[n-1]+sumar(a,n-1);
    }
}

int main()
{
    int arreglo[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<sumar(arreglo,10);
}

