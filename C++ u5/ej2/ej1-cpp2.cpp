#include <iostream>
using namespace std;

void multiplicacion_2(int &numero){
    numero *= 2;
}

int main(){
    int numero;

    cout<<"ingresar un numero: "<<endl;
    cin>>numero;

    multiplicacion_2(numero);

    cout<<"el numero es :" << numero <<endl;
}