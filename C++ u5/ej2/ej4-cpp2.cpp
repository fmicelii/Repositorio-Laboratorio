#include <iostream>
#include <math.h>
using namespace std;


int joaquin(int &n1,int n2){
    int resultado = pow(n1,n2);
    return resultado;
}


int main(){
    int n1;
    int n2;

    cout<<"porfavor ingrese un numero: ";
    cin>>n1;
    cout<<"porfavor ingrese otro numero: ";
    cin>>n2;
    
    cout<<"el resultado de la potencia es: " <<joaquin(n1,n2)<<endl;
}