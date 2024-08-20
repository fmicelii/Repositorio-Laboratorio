#include <iostream>
using namespace std;

int main(){
    int matriz[2][2];

    for (int ifilas = 0; ifilas < 2; ifilas++){
        for (int icolumnas = 0; icolumnas < 2; icolumnas++){
            cout<<"ingresa los elementos en fila : "<< ifilas<<" y columna: "<<icolumnas<<endl;
            cin>>matriz[ifilas][icolumnas];
        }    
    }

    int nueva_matriz[2][2];

    for (int ifilas = 0; ifilas < 2; ifilas++){
        for (int icolumnas = 0; icolumnas < 2; icolumnas++){
            nueva_matriz[ifilas][icolumnas] = matriz[ifilas][icolumnas];
        }
    }
    cout<<"aca esta la matriz nueva: "<<endl;
    for (int ifilas = 0; ifilas < 2; ifilas++){
        for (int icolumnas = 0; icolumnas < 2; icolumnas++){
            cout<< nueva_matriz[ifilas][icolumnas]<<"  ";
    }
    cout<<endl;
    }
}