#include <iostream>

using namespace std;


//IMPRIMIR N NUMEROS PRIMOS
int main()
{
    int n,cont;
    cout<<"hasta que numero : ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
            cont++;
    }
    if(cont==2)
    {
        cout<<"Es un numero primo"<<endl;
    }
}

/*
int main()
{
    int n,cont,i,j;
    i=j=1;
    cont=0;
    cout<<"hasta que numero : ";
    cin>>n;

    while(i<=n)
    {
        cont=0;
        j=1;
        while(j<=i)
        {
            if(i&j==0)
            {
                cont++;
            }
            j++;
        }

        i++;
        if (cont==2)
        {
            cout<<" "<<i;
        }

    }
}
*/

    /*
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)if (cont==2)
        {
            cout<<" "<<i;
        }
        cont==0;
        {
            if(i%j==0)
            {
                cont++;
            }
        }
        if (cont==2)
        {
            cout<<" "<<i;
        }
        cont==0;
    }

*/

/*
    int n;
    int cont=0;
    int temp=1;
    cout<<"Hasta que rango de primos va a mostar : ";
    cin>>n;
    while (cont<=n)
    {

        while (temp<=cont)
        {
            if(cont%temp==0)
                temp++;
        }
        if(temp==2)
            cout<<" "<<cont;
        cont++;
        temp=1;
    }
    */
/*
for(int i=0;i<=cont;i++)
        {
            if(cont/i==0)
            {
                temp++;
            }

        }
        if (temp==2)
        {
            cout<<" "<<cont;
        }
*/
