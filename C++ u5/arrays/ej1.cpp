#include <iostream>
using namespace std;

int main(){
    float n1;
    float n2;
    float n3;
    float n4;
    float n5;
    cout<< "ingrese un numero: ";
    cin>>n1;
    cout<<"ingrese otro numero: ";
    cin>>n2;
    cout<<"ingrese otro numero: ";
    cin>>n3;
    cout<<"ingrese otro numero: ";
    cin>>n4;
    cout<<"ingrese otro numero: ";
    cin>>n5;
    
    int i=0;
    float resultado=0;
    
    const int espacio_arreglo = 5;
    float arreglo[espacio_arreglo] = {n1, n2, n3, n4,n5};

    while(i <= espacio_arreglo)
    {
        resultado = resultado + arreglo[i];
        i++;
    }
    cout<<"la suma de los numeros es: "<<resultado<<endl;
}
