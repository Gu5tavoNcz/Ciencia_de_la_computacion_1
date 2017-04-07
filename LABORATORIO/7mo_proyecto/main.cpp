#include <iostream>

using namespace std;

int suma(const int arreglo[],const int tamanho){
        int sum=0;
        for(int i=0;i<tamanho;i++)
            sum+=arreglo[i];
        return sum;
    }

float promedio(const int arreglo[],const int tamanho)
{
    return (float) suma(arreglo,tamanho)/tamanho;
}

int invertir(int arreglo[],const int tamanho)
{
    int arreglo2[tamanho];
    for (int i=0;i<tamanho;i++)
    {
        arreglo2[i]=arreglo[(tamanho-1)-i];
    }
    for (int j=0;j<tamanho;j++)
    {
        arreglo[j]=arreglo2[j];
    }
}

int imprimir (int arreglo[], const int tamanho)
{
    //cout<<"Tu arreglo es: ";
    for (int i=0;i<tamanho;i++)
    {
        cout<<arreglo[i]<<",";
    }
    cout<<endl;
}

int ordenar(int arreglo[],const int tamanho)
{
    int temp[tamanho];

}

int main()
{
    int n;
    cout<<"De que tamaño va a ser su arreglo : ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Introduzca el valor de la pisicion "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Suma :"<<suma(arr,n)<<endl;
    cout<<endl;
    cout<<"Promedio :"<<promedio(arr,n)<<endl;
    invertir(arr,n);
    cout<<endl;
    cout<<"Arreglo invertido: ";
    imprimir(arr,n);
    cout<<endl;






}
