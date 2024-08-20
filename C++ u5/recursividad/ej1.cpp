#include <iostream>
using namespace std;

int suma(int n){
    if (n == 0)
    {
        return n;
    }
    else
    {
        n = n + suma(n - 1);
    }
    return n;
}

int main(){
    int numero;

    cout<<"ingresar un numero: ";
    cin>>numero;

    cout<<"la suma es igual a: " << suma(numero) <<endl;
}