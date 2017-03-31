 #include <iostream>

 using namespace std;
 /*
 int main()
 {
     int a=0;
     int b=0;
     while(a<10)
     {
         cout << "a++ : " << a++ << endl;
     }

     while (b<10)
     {
         cout << "++b : "<< ++b <<endl;
     }
     cout << "Hello world!" << endl;
     return 0;
 }
 */
 /*
 int main()
 {
     int c=5;
     int x=++c;
     cout << c << " & " << x <<endl;
 }
 */
 /*
 int main()
 {
     int i,j;
     i=j=0;
     i=i+2;
     j+=2;
     cout << i << " & " << j <<endl;
 }
 */
 /*
 int main()
 {
     int z;
     if (a>b)
         z=a;
     else
         z=b;

      z=(a>b)?a:b;
  }
  */

 /*
  int main ()
  {
      int a,b;
     cout << "Ingrese un numero A : ";
     cin >>a;
     cout << "Ingrese un numero B : ";
      cin >> b;
      cout << "El numero mayor es : "<< ((a>b)?a:b) << endl;
  }
 */
 /*
 +int main ()
 {
    int arreglo[5];
    int i=0;
    while(i<5)
    {
        cout<<"Ingrese el valor de la posicion "<<i+1<<": ";
        cin>>arreglo[i];
        i++;
    }
    i=0;
    while(i<5)
    {
        cout << "El arreglo de la posicion "<< "arreglo["<<i+1<<"] es: "<< arreglo[i] <<endl;
        i++;
    }
}
*/

int main ()
{
    int score[6];
    int c=5;
    score[0]=c++;
    score[1]=c++;
    score[2]=c++;
    score[3]=c++;
    score[4]=c++;
    score[5]=c++;

    c=5;
    cout << score[c--] << endl;
    cout << score[c--] << endl;
    cout << score[c--] << endl;
    cout << score[c--] << endl;
    cout << score[c--] << endl;
    cout << score[c--] << endl;


}
