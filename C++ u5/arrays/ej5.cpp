#include <iostream>
using namespace std;

int main(){
    int tamanio;
    cout<<"ingrese el tamano de la lista: ";
    cin>>tamanio;
    int tamanio_array = tamanio;
    int array [tamanio_array], valor;
    cout<<"ingrese los elementos: ";
    for (int i = 0; i < tamanio; i++)
    {
        cin>>valor;
        array[i]=valor;
    }
    
    
    
}