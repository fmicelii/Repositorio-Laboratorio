#include <iostream>
using namespace std;

int main() {
    int numero_decimal;
    cout << "Ingrese un número decimal: ";
    cin >> numero_decimal;

    if (numero_decimal < 0) {
        cout << "Ingrese un número positivo" << std::endl;
        return 1;
    }

    int binario[32]; 
    int ind = 0;
    if (numero_decimal == 0) {
        cout << "El número decimal " << numero_decimal << " en binario es: 0" << std::endl;
        return 0;
    }

    while (numero_decimal > 0){
        binario[ind] = numero_decimal % 2;
        numero_decimal /= 2;
        ind++;
    }

    cout << "El número decimal en binario es: ";
    for (int i = ind - 1; i >= 0; --i) {
        cout << binario[i];
    }
    return 0;
    cout<<endl;
}
