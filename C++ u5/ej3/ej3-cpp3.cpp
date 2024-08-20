#include <iostream>
using namespace std;
    

void cadena_revez(string cadena){
    
    int largo = cadena.size();
    int indice = largo - 1;

    while (indice >= 0)
    {
        cout << cadena[indice];
        indice --;
    }
}

int main(){
    string cadena;

    cout << "escribi una palabra y te la doy vuelta, la palabra: ";
    cin >> cadena;
    cadena_revez(cadena);
}