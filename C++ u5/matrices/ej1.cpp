#include <iostream>
using namespace std;

int main(){
    int filas, columnas;
    cout<<"ingrese numero de filas: "<<endl;
    cin>> filas;
    cout<<"ingrese numero de columnas: "<<endl;
    cin>>columnas;

    int matriz[filas][columnas];

    for (int ifilas = 0; ifilas < filas; ifilas++){
        for (int icolumnas = 0; icolumnas < columnas; icolumnas++){
            cout<<"ingresa los elementos en fila : "<< ifilas<<" y columna: "<<icolumnas<<endl;
            cin>>matriz[ifilas][icolumnas];
        }    
    }
    cout<<"mira papucho, aca esta tu putisima matriz."<<endl;
    for (int ifilas = 0; ifilas < filas; ifilas++){
        for (int icolumnas = 0; icolumnas < columnas; icolumnas++){
        cout<<matriz[ifilas][icolumnas]<<"  ";
        }
        cout<<endl;
    }
    }