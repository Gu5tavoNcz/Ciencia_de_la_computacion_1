#include <iostream>

using namespace std;

int intercambio(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x,y;
    x=7;
    y=10;
    cout<<"Cambio x="<<x<<" y="<<y<<" -> "<<intercambio(x,y)<<endl;
}
