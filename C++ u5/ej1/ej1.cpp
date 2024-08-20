#include <iostream>
using namespace std;

int hora_salida(int hora){
    return (hora - 12) * (-1);
}

int minuto_saluda(int minutos){
    return (5 - minutos) * (-1);
}

int main(){
    int Hora;
    int Minutos;

    cout<<"Ingrese su hora: ";
    cin>>Hora;

    cout<<"ingrese los minutos de su hora: "<<endl;
    cin>>Minutos;

    cout<<"Faltan " << hora_salida(Hora) << " h y " << minuto_saluda(Minutos) << " minutos para irte."<<endl;
}