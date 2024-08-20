#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int cantidad_numeros;
    cout << "Ingrese la cantidad de numeros enteros: ";
    cin >> cantidad_numeros;
    int numero_maximo = numeric_limits<int>::min(); 
    int numero_minimo = numeric_limits<int>::max(); 
    
    for (int i = 0; i < cantidad_numeros; ++i) {
        int numero;
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;
        if (numero > numero_maximo) {
            numero_maximo = numero;
        }
        if (numero < numero_minimo) {
            numero_minimo = numero;
        }
    }

    
    cout << "El numero mayor es: " << numero_maximo << endl;
    cout << "El numero menor es: " << numero_minimo << endl;

    return 0;
}
