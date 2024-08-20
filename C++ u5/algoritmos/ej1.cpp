#include <iostream>
using namespace std;

void relleno_array(int array[],int tamanio){
    cout<<"ingresar los elementos: "<<endl;
    for (int i = 0; i < tamanio; i++){
        cin>>array[i]; 
    }
}

void orden_bubble(int array[], int tamanio){
    for (int i = 0; i < tamanio-1; i++){
        for (int y = 0; y < tamanio - 1; y++){
            if (array[y] > array[y+1]){
                int pepo = array[y];
                array[y] = array[y+1];
                array[y+1] = pepo;
            }
        }
    }
}

int main(){
    int tamanio;
    cout<<"ingrese el tamanio de las listas: "<<endl;
    cin>>tamanio;
    int tamanio_array = tamanio * 2;
    int array[tamanio], array2[tamanio], lista_nueva[tamanio_array];
    
    relleno_array(array,tamanio);
    relleno_array(array2,tamanio);

    for (int i = 0; i < tamanio_array; i++)
    {
        lista_nueva[i] = array2[i]; 
    }
    for (int i = 0; i < tamanio_array; i++)
    {
        lista_nueva[tamanio + i] = array[i];
    }
    orden_bubble(lista_nueva, tamanio_array);

    for (int i = 0; i < tamanio_array; i++)
    {
        cout<<lista_nueva[i]<<" ";
    }
}