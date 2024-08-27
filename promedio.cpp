#include <iostream>
using namespace std;
//Realizar un programa que le muestre al usuario un menú con 2
//opciones (El usuario deberá elegir una de ellas y al finalizar el
//algoritmo se deberá mostrar por pantalla el resultado calculado):
//- Sumar 3 números.
//- Calcular el promedio de 3 números.

void mostrar_menu(){
    cout<<"==================================="<<endl;
    cout<<"===    .1 sumar tres numeros    ==="<<endl;
    cout<<"===    .2 promedio 3 numeros    ==="<<endl;
    cout<<"==================================="<<endl;
}

int suma_funcion(int n1,int n2,int n3){
    int suma = n1 + n2 + n3;
    return suma;
}

float promedio_funcion(int n1,int n2,int n3){
    float promedio = (suma_funcion(n1,n2,n3)) / 3.0;
    return promedio;
}

int main(){
    int numero1,numero2,numero3,opcion;
    
    cout<<"ingresar un numero porfavor: "<<endl;
    cin>>numero1;
    cout<<"ingresar otro numero porfavor: "<<endl;
    cin>>numero2;
    cout<<"ingresar el ultimo numero porfavor: "<<endl;
    cin>>numero3;
    
    mostrar_menu();

    cout<<"que queres hacer?"<<endl;
    cin>>opcion;

    if (opcion == 1)
    {
        cout<<"el resultado de la suma es: "<<suma_funcion(numero1,numero2,numero3)<<endl;
    }
    else if(opcion == 2){
        cout<<"el resultado del promedio es: "<<promedio_funcion(numero1,numero2,numero3)<<endl;
    }
    else{
        cout<<"replanteate lo q pusiste pq esta mal pa."<<endl;
    }
}
