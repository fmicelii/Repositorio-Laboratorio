#include <iostream>
using namespace std;

int main(){
    const int tamanio_array=2; 
    string array[tamanio_array], valor; 
    cout<<"ingresar los elementos: "<<endl;
    for (int i = 0; i < tamanio_array; i++)
    {
        cin>>valor;
        array[i] = valor; 
    }

    string array2[tamanio_array], reversa;
    for (int i = tamanio_array; i >= 0; i--)
    {
        cin>>reversa;
        array[i] = reversa;
    }
    cout<<array2<<endl;
}