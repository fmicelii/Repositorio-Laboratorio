#include <iostream>
using namespace std;

int secuencia(int n){
    if (n == 1){
        return 0;
    }

    else if (n == 2){
        return 1;
    }

    else{
        return secuencia(n-1) + secuencia(n-2);
    }
}


int main (){
    int numero;

    cout<<"ingrese un numero: ";
    cin>>numero;

    cout<<"el numero de la posicion de la secuencia es: "<<secuencia(numero)<<endl;
}