#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];

    for (int ifilas = 0; ifilas < 3; ifilas++){
        for (int icolumnas = 0; icolumnas < 3; icolumnas++){
            cout<<"ingresa los elementos en fila : "<< ifilas<<" y columna: "<<icolumnas<<endl;
            cin>>matriz[ifilas][icolumnas];
        }    
    }

    int matriz_transpuesta[3][3];

    for (int ifilas = 0; ifilas < 3; ifilas++){
        for (int icolumnas = 0; icolumnas < 3; icolumnas++){
            matriz_transpuesta[icolumnas][ifilas] = matriz[ifilas][icolumnas];
        }
    }
    cout<<"aca esta la matriz transpuesta: "<<endl;
    for (int ifilas = 0; ifilas < 3; ifilas++){
        for (int icolumnas = 0; icolumnas < 3; icolumnas++){
            cout<< matriz_transpuesta[ifilas][icolumnas]<<"  ";
    }
    cout<<endl;
    }
}