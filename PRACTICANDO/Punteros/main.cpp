#include <iostream>

using namespace std;


void cuadrado(int *n)
    {
        *n=*n * *n;
    }


int main()
{
    int *p;
    int x;
    x=32;
    cuadrado(&x);
    cout<<x<<"\n"<<endl;
}
