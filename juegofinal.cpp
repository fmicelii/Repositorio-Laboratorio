#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string intento;
    int intentos = 0;
    srand(time(0));
    string jugadores[100] = {"messi", "ronaldo", "neymar", "mbappe", "salah", "lewandowski", "debruyne", "vandijk", "hazard", "modric", "kane", "benzema", "haaland", "degea", "ramos", "fernandes", "lukaku", "suarez", "griezmann", "sterling", "pogba", "muller", "alisson", "son", "kimmich", "kante", "dimaria", "rashford", "courtois", "cavani", "dybala", "thiago", "aguero", "casemiro", "navas", "gomez", "vidal", "firmino", "ziyech", "rodri", "oblak", "eriksen", "wijnaldum", "fabinho", "donnarumma", "immobile", "neuer", "hummels", "alli", "felix", "koulibaly", "gnabry", "ederson", "laporte", "valverde", "cancelo", "varane", "robertson", "sancho", "skriniar", "dejong", "llorente", "partey", "grealish", "hakimi", "moutinho", "henderson", "upamecano", "mount", "mahrez", "bonucci", "fati", "martinez", "dia", "mertens", "maguire", "dias", "depay", "pjanic", "silva"};
    int num_random = rand() % 100;
    string adivino = jugadores[num_random];
    int largo = adivino.size();
    cout<<"Si quieres rendirte escribe ´rendirse´ en el terminal"<<endl;
    cout << "El jugador tiene " << largo << " letras." << endl;


    do {
        cout << "Introduce tu intento: ";
        cin >> intento;
        intentos++;

        if (intento == "rendirse") {
            cout << "Perdiste, el jugador era: " << adivino << endl;
            return 0;
        }

        if (intento == adivino) {
            cout << "!Adivinaste el jugador en " << intentos << " intentos!" << endl;
            return 0;
        }

        
        for(int i = 0; i < intento.size(); i++) {
            char letra = intento[i];
            bool letra_encontrada = false;

            
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

    return 0;
}
