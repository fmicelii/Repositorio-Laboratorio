#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string intento;
    int intentos = 0;
    srand(time(0));
    string jugadores[50] = {"Messi", "Ronaldo", "Neymar", "Mbappé", "Salah", "Lewandowski", "De Bruyne", "Van Dijk", "Hazard", "Modric", "Kane", "Benzema", "Haaland", "De Gea", "Ramos", "Fernandes", "Lukaku", "Suárez", "Griezmann", "Sterling", "Pogba", "Müller", "Alisson", "Son", "Kimmich", "Kante", "Di María", "Rashford", "Courtois", "Cavani", "Dybala", "Thiago", "Aguero", "Casemiro", "Navas", "Gómez", "Vidal", "Firmino", "Ziyech", "Rodri", "Oblak", "Eriksen", "Sterling", "Wijnaldum", "Fabinho", "Donnarumma", "Immobile", "Neuer", "Hummels", "Müller"};
    int num_random = rand() % 50;
    string adivino = jugadores[num_random];
    int largo = adivino.size();
    cout << "El jugador tiene " << largo << " letras." << endl;

    do {
        cout << "Introduce tu intento: ";
        cin >> intento;
        intentos++;

        // Verificar si la letra está en su posición correcta
        for(int i = 0; i < largo; i++) {
            if (intento[i] == adivino[i]) {
                cout << "La letra " << intento[i] << " está en la posición " << i+1 << endl;
            } else {
                cout << "La letra " << intento[i] << " no está en su posición correcta." << endl;
            }
        }
    } while (intento != adivino);

    cout << "¡Adivinaste el jugador en " << intentos << " intentos!" << endl;

    return 0;
}
