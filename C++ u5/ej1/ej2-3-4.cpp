#include <iostream>
using namespace std;

void mostrarMenu(){
    cout << "======= MENÚ ======" << endl;
    cout << "=1.    Suma       =" << endl;
    cout << "=2.    Resta      =" << endl;
    cout << "=3.   División    =" << endl;
    cout << "=4. Multiplicación=" << endl;
    cout << "=5.    Salir      =" << endl;
    cout << "===================" << endl;
    cout << "Seleccione una opción: ";
}

int suma(int n1,int n2){
    return n1 + n2;
}
int resta(int n1,int n2){
    return n1 - n2;
}
int division(int n1,int n2){
    return (n1 / n2);
}
int multiplicacion(int n1,int n2){
    return n1 * n2;
}

int main() {
    int opcion;
    int n1,n2;
    while (opcion != 5) {
        
        mostrarMenu();        
        cin >> opcion;
        cout<<"porfavor ingrese un numero: " << endl;
        cin>>n1;
        cout<<"porfavor ingrese un numero: " << endl;
        cin>>n2;

        switch (opcion) {
            case 1:
                cout << "El resultado de su suma es..." << endl;
                cout<< suma(n1,n2) << endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                break;
            case 2:
                cout << "El resultado de su resta es..." << endl;
                cout<< resta(n1,n2) << endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                break;
            case 3:
                cout << "El resultado de su division es..." << endl;
                cout<< division(n1,n2) << endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                break;
            case 4:
                cout << "El resultado de su multiplicacion es..." << endl;
                cout<< multiplicacion(n1,n2) << endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                cout<< "  "<<endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    }

    cout << "Saliendo del menú.." << endl;


}
