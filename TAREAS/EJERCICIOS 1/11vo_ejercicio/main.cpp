#include <iostream>

using namespace std;

int llenar_matri(int mat[2][2])
{
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout<<"Ingrese el valor de la posicion M["<<i<<"]["<<j<<"] ";
            cin>>mat[i][j];
        }
    }
}

void imprimir_matri(int m[2][2])
{
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout<<m[i][j]<<",";
        }
    }
}

void multi_m(int a[2][2],int b[2][2])
{
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    imprimir_matri(c);

}


int main()
{
    int matriz_a[2][2];
    cout<<"llene su matriz A"<<endl;
    llenar_matri(matriz_a);
    int matriz_b[2][2];
    cout<<"llene su matriz B"<<endl;
    llenar_matri(matriz_b);
    cout<<endl<<"La multipiclacion de la matriz A y B es :"<<endl;
    multi_m(matriz_a,matriz_b);


}
