#include <iostream>
#include <cstdlib>
using namespace std;

void cambio(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int x,y;
    cout<<"Intruduzca un valor a x: ";
    cin>>x;
    cout<<"Intruduzca un valor a y: ";
    cin>>y;
    cambio(&x,&y);
    cout<<"Los valores cambiados son: x="<<x<<" y="<<y<<endl;
}
