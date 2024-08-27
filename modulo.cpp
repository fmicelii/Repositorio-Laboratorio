#include <iostream>
using namespace std;

int modulo_funcion(int n){
    if (n < 0)
    {
        n *= (-1);
    }
    return n;
}

int main(){
    int numero;

    cout<<"ingresar numero: ";
    cin>>numero;

    cout<<"el modulo de su numero es: "<<modulo_funcion(numero)<<endl;
}