#include <iostream>

using namespace std;

int intercambio(int &a, int &b)
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
    cout<<"valor original x="<<x<<" y="<<y<<endl;
    intercambio(x,y);
    cout<<"interbambio x="<<x<<" y="<<y<<endl;
}
