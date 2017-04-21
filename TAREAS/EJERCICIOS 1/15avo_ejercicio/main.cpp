#include<iostream>
#include <cstdlib>

using namespace std;

/*
Escriba una función que evalue una cadena de caracteres y retorne true 
si la cadena representa un palindrome y false en caso contrario.
 */

bool palindromo(char palabra[],int ini,int fin)
{
    if(ini>=fin)
        return true;
    if(palabra[ini]==palabra[fin])
        palindromo(palabra,ini+1,fin-1);
    else
        return false;
}

int main()
{
    char cad[50];
    cout<<"Ingrese una palabra: ";
    cin.getline(cad,50);
    bool resultado;
    resultado=palindromo(cad,0,9);
    if(resultado==true)
        cout<<"Si es palindroma";
    else
        cout<<"No es palindroma";
}