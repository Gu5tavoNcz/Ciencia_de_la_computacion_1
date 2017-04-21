
#include<stdio.h>
#include <cstdlib>
#include<iostream>

using namespace std;

/*
Implemente en una función el algoritmo de ordenamiento llamado insertion-sort. 
El algoritmo se encuentra en pseudocódigo en el libro “Introduction to algorithms” de CRLS, capítulo 2.
 */

void insertion_sort(int arr[],int tam)
{
    int i,j,temp;
    for(i=1;i<tam;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    
}

int main()
{
    int cadena[5]={3,6,9,1,0};
    insertion_sort(cadena,5);
    for(int i=0;i<5;i++)
    {
        cout<<cadena[i];
    }
}