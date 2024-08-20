#include <iostream>
using namespace std;

int main(){
    int n;
    int tamanio;
    cout<<"ingrese un numero: "<<endl;
    cin>>n;
    cout<<"ingrese el tamaño de la lista: ";
    cin>>tamanio;
    const int tamanio_array = tamanio;
    int array [tamanio_array], valor;

    cout<<"ingresar los elementos: "<<endl;
    for (int i = 0; i < tamanio_array; i++)
    {
        cin>>valor;
        array[i] = valor; 
    }

    for (int i = 0; i < tamanio_array; i++)
    {
        if (array[i]== n)
        {
            cout<<"el numero se encuentra en la lista";
        }else{
            cout<<"el numero no se encuentra en la lista"<<endl;
        }
    }
}