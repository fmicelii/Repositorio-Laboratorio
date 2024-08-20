#include <iostream>
using namespace std;

int potencia(int b , int e){
    if (e == 1)
    {
        e = 1;
    }
    else
    {
        b = b * potencia(b , e -1);
    }
}


int main(){
    int base;
    int exponente;

    cout<<"ingrese un numero que será la base: ";
    cin>>base;
    cout<<"ingrese otro numero que será el exponente: ";
    cin>>exponente;

    cout<<"el resultado de la potencia es de: "<<potencia(base,exponente)<<endl;
}