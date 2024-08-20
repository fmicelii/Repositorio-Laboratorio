#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string intento;
    int intentos = 0;
    srand(time(0));
    string jugadores[50] = {"Messi", "Ronaldo", "Neymar", "Mbappe", "Salah", "Lewandowski", "De Bruyne", "Van Dijk", "Hazard", "Modric", "Kane", "Benzema", "Haaland", "De Gea", "Ramos", "Fernandes", "Lukaku", "Suarez", "Griezmann", "Sterling", "Pogba", "Müller", "Alisson", "Son", "Kimmich", "Kante", "Di María", "Rashford", "Courtois", "Cavani", "Dybala", "Thiago", "Aguero", "Casemiro", "Navas", "Gomez", "Vidal", "Firmino", "Ziyech", "Rodri", "Oblak", "Eriksen", "Sterling", "Wijnaldum", "Fabinho", "Donnarumma", "Immobile", "Neuer", "Hummels", "Müller"};
    int num_random = rand() % 50;
    string adivino = jugadores[num_random];
    int largo = adivino.size();
    cout << "El jugador tiene " << largo << " letras." << endl;

    do {
        cout << "Introduce tu intento: ";
        cin >> intento;
        intentos++;

        // Verificar cada letra del intento
        for(int i = 0; i < intento.size(); i++) {
            char letra = intento[i];
            bool letra_encontrada = false;

            // Verificar si la letra está en la palabra y en la posición correcta
            for(int j = 0; j < largo; j++) {
                if (letra == adivino[j]) {
                    letra_encontrada = true;
                    if (j == i) {
                        cout << "La letra " << letra << " está en el jugador y en esta posición." << endl;
                    } else {
                        cout << "La letra " << letra << " está en el jugador pero no en esta posición." << endl;
                    }
                    break;
                }
            }
        }

    } while (intento != adivino);

    cout << "¡Adivinaste el jugador en " << intentos << " intentos!" << endl;

    return 0;
}
