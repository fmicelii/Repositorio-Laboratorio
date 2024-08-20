#include <iostream>
using namespace std;

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
    int array[5];
    int array_nueva[5];


    cout<<"ingresar los elementos: "<<endl;
    for (int i = 0; i < 5; i++){
        cin>>array[i]; 
    }

    for (int i = 0; i < 5; i++)
    {
        array_nueva[i] = array[i] * 2;
    }
    orden_bubble(array_nueva,5);
    for (int i = 0; i < 5; i++)
    {
    cout<<array_nueva[i]<<" ";
    }
}