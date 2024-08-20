#include <vector>
#include <iostream>
using namespace std;

int main(){
    int largo;
    int frenar=0;
    int elemento;
    cout<<"ingrese el largo del vector: "<<endl;
    cin>>largo;
    vector <int> numeros(largo);
    while (frenar < largo)
    {
        cout<<"ingrese un elemento: "<<endl;
        cin>>elemento;
        numeros.push_back(elemento);
        frenar ++;
    }
}