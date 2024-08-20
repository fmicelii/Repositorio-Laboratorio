#include <vector>
#include <iostream>
using namespace std;


int main(){
    int elemento;
    int largo;
    vector <int> numeros(10);
    cout<<"ingresar largo del vector: "<<endl;
    cin>>largo;

    for (int i = 0; i < largo; i++)
    {
        cout<<"ingrese los elementos: "<<endl;
        cin>>elemento;
        numeros.push_back(elemento);
    }

    for (int i = 0; i < largo; i++)
    {
        cout<<numeros[2]<<endl;
    }
    
}
