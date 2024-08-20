#include <iostream>
using namespace std;

void mismas_c_f(int columnas, int filas){
    if (columnas == filas){
        cout<<"el numero de filas y columnas es el mismo."<<endl;
    }
    else{
        cout<<"el numero de filas y columnas no es el mismo."<<endl;
    }
}

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
    mismas_c_f(columnas,filas);
}