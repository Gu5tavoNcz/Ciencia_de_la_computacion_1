#include <iostream>

using namespace std;
/*
//INVERTIR UN ARREGLO SIN BUBLES
int main()
{
    int arreglo[4];
    int temp;
    cout << "Introduzca un numero en la posicion 1 del arreglo : ";
    cin >> arreglo[0];
    cout << "Introduzca un numero en la posicion 2 del arreglo : ";
    cin >> arreglo[1];
    cout << "Introduzca un numero en la posicion 3 del arreglo : ";
    cin >> arreglo[2];
    cout << "Introduzca un numero en la posicion 4 del arreglo : ";
    cin >> arreglo[3];
    temp=arreglo[0];
    arreglo[0]=arreglo[3];
    arreglo[3]=temp;
    temp=arreglo[1];
    arreglo[1]=arreglo[2];
    arreglo[2]=temp;
    cout<<"El arreglo invertido es: " << arreglo[0]<<arreglo[1]<<arreglo[2]<<arreglo[3]<<endl;
    return 0;
}
*/

int main ()
{
    int tam;
    cout << "Introduzca el tamaño del arreglo : ";
        cin >> tam;
    int arreglo[tam];
    int cont=0;
    int temp;
    while (cont<tam)
    {
        cout << "Introduzca un numero en la posicion "<<cont+1<<" del arreglo : ";
        cin >> arreglo[cont];
        cont++;
    }
    cout <<endl;

    for (int i;i<tam/2;i++)
    {
        temp=arreglo[i];
        arreglo[i]=arreglo[tam-1-i];
        arreglo[tam-1-i]=temp;
    }
    cout <<endl;
    cont=0;
    while (cont<tam)
    {
        cout << arreglo[cont] << " ";
        cont++;
    }
    cout <<endl;

    cont=0;
    int temp2=0;
    while (cont<tam)
    {
        temp2=temp2+arreglo[cont];
        cont++;
    }
    cout<<"La suma de todos los elementos del arreglo es: "<<temp2<<endl;
    cout <<endl;

    cont=0;
    int temp3=0;
    while (cont<tam)
    {
        if(temp3<arreglo[cont])
            temp3=arreglo[cont];
        cont++;
    }
    cout<<"El numero matoy de la lista es: "<<temp3<<endl;

}
