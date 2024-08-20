#include <iostream>
using namespace std;

int main(){
    int tamanio, mayor;

    cout<<"ingrese el tamanio de las listas: "<<endl;
    cin>>tamanio;
    int tamanio_array = tamanio;
    int array[tamanio], valor;

    cout<<"ingresar "<< tamanio << " numeros" <<endl;
    for (int i = 0; i < tamanio; i++)
    {
        cin>>valor;
        array[i] = valor;
    }
    
    mayor = array[0];

    for (int i = 0; i < tamanio; i++) {
        if (array[i] > mayor) {
            mayor = array[i];
        }
    }
    cout<<"El numero mayor de la lista es: "<< mayor<<endl;
}