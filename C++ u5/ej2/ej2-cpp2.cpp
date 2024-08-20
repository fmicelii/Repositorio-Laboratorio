#include <iostream>
using namespace std;

void cambio(int &n1,int &n2){
    int valorn2 = n2;
    n2 = n1;
    n1 = valorn2;
    
}


int main(){
    int n1;
    int n2;

    cout<<"ingresar un numero: ";
    cin>>n1;
    cout<<"ingresar otro numero: ";
    cin>>n2;
    
    cout<<"los numeros antes de ser cambiados serian: "<<n1<< " " <<n2<< endl;
    cambio(n1,n2);
    cout<<"los numeros cambiados serian: "<<n1<< " " <<n2<< endl;
}