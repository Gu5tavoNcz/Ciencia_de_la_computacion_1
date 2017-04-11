#include <iostream>

using namespace std;
/*
int llenar_matriz(int matriz[x][j])
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<"x["<<x+1<<"] y["<<y+1<<"] : ";
            cin>>matriz[x][y];
        }
    }

}
*/



int main()
{
    int x1,y1,x2,y2;
    cout<<"De que tamaño va a ser su matriz 1 : "<<endl;
    cout<<"x : ";
    cin>>x1;
    cout<<"y : ";
    cin>>y1;
    cout<<"De que tamaño va a ser su matriz 2 : "<<endl;
    cout<<"x : ";
    cin>>x2;
    cout<<"y : ";
    cin>>y2;
    int matriz1[x1][y1];
    int matriz2[x2][y2];
    if(y1!=x2)
        cout<<"Las matrices no pueden multiplicarse"<<endl;
    else
    {
        for(int i=0;i<x1;i++)
        {
            for(int j=0;j<y1;j++)
            {
                cout<<"x["<<i+1<<"] y["<<j+1<<"] : ";
                cin>>matriz1[x1][y1];
            }
        }
    }


}
