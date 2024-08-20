#include <iostream>
using namespace std;


void nebu(char letra , string &palabra){
    palabra += letra;
}


int main(){
    char letra;
    string palabra;

    cout<<"ingrese una letra: "<<endl;
    cin>>letra;
    cout<<"ingrese una palabra: "<<endl;
    cin>>palabra;

    nebu(letra,palabra);
    cout<<palabra<<endl;
}