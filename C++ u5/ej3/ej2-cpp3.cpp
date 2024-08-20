#include <iostream>
using namespace std;


int pepo(string palabra){
    char a='a';
    char e='e';
    char i='i';
    char o='o';
    char u='u';

    int indice=0;
    int largo = palabra.size();
    int cant_vocales = 0;
    
    while (indice <= largo)
    {
        if (palabra[indice] == a || palabra[indice] == e || palabra[indice] == i || palabra[indice] == o || palabra[indice] == u)
        {
            cant_vocales ++;
        }
    indice ++;
    }
    return cant_vocales;
}

int main(){
    string palabra;
    cout<<"ingrese una palabra: ";
    cin>>palabra;
    cout<<pepo(palabra)<<endl;
}