#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numero = rand() % 100 + 1;
    int intento, intentos = 0;
    
    cout << "Adivina el número secreto entre 1 y 100" << endl;
    
    do {
        cout << "Introduce tu intento: ";
        cin >> intento;
        intentos++;
        
        if (intento < numero) {
            cout << "El número es mayor." << endl;
        } else if (intento > numero) {
            cout << "El número es menor." << endl;
        } else {
            cout << "¡Has adivinado el número! (" << numero << ") en " << intentos << " intentos!" << endl;
        }
        
    } while (intento != numero);
    
    return 0;
    
}