#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"    
#define BLUE    "\033[34m"     

int main(){
    srand(time(0));
    int num_random = rand() % 81;
    string intento;
    int intentos = 0;
    string jugadores[81] = {"messi", "ronaldo", "neymar", "mbappe", "salah", "lewandowski", "hazard", "modric", "kane", "benzema", "haaland", "ramos", "fernandes", "lukaku", "suarez", "griezmann", "sterling", "pogba", "muller", "alisson", "son", "kimmich", "kante", "rashford", "courtois", "cavani", "dybala", "thiago", "aguero", "casemiro", "navas", "gomez", "vidal", "firmino", "ziyech", "rodri", "oblak", "eriksen", "wijnaldum", "fabinho", "donnarumma", "immobile", "neuer", "hummels", "alli", "felix", "koulibaly", "gnabry", "ederson", "laporte", "valverde", "cancelo", "varane", "robertson", "sancho", "llorente", "partey", "grealish", "hakimi", "coutinho", "henderson", "upamecano", "mount", "mahrez", "bonucci", "martinez", "mertens", "maguire", "dias", "depay", "silva"};
    string adivino = jugadores[num_random];
    int largo = adivino.size();
    cout<<"Si quieres rendirte escribe ´rendirse´ en el terminal"<<endl;
    cout << "El jugador tiene " << largo << " letras." << endl;

    while(intentos <= 5){
        cout << "Introduce tu intento: ";
        cin >> intento;
        intentos++;
        
        if (intentos == 6)
        {
            cout << ""  << endl;
            cout << RED<<"██████╗ ███████╗██████╗ ██████╗ ██╗███████╗████████╗███████╗██╗" << endl;
            cout << RED<<"██╔══██╗██╔════╝██╔══██╗██╔══██╗██║██╔════╝╚══██╔══╝██╔════╝██║" << endl;
            cout << RED<<"██████╔╝█████╗  ██████╔╝██║  ██║██║███████╗   ██║   █████╗  ██║" << endl;
            cout << RED<<"██╔═══╝ ██╔══╝  ██╔══██╗██║  ██║██║╚════██║   ██║   ██╔══╝  ╚═╝" << endl;
            cout << RED<<"██║     ███████╗██║  ██║██████╔╝██║███████║   ██║   ███████╗██╗" << endl;
            cout << RED<<"╚═╝     ╚══════╝╚═╝  ╚═╝╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝" <<  endl;
            cout << RED<<"                                                               " << RESET << endl;
            cout<< BLUE <<"El jugador era "<< adivino <<RESET<< endl;
        }
        

        if (intento == "rendirse") {
            cout << ""  << endl;
            cout << RED<<"██████╗ ███████╗██████╗ ██████╗ ██╗███████╗████████╗███████╗██╗" << endl;
            cout << RED<<"██╔══██╗██╔════╝██╔══██╗██╔══██╗██║██╔════╝╚══██╔══╝██╔════╝██║" << endl;
            cout << RED<<"██████╔╝█████╗  ██████╔╝██║  ██║██║███████╗   ██║   █████╗  ██║" << endl;
            cout << RED<<"██╔═══╝ ██╔══╝  ██╔══██╗██║  ██║██║╚════██║   ██║   ██╔══╝  ╚═╝" << endl;
            cout << RED<<"██║     ███████╗██║  ██║██████╔╝██║███████║   ██║   ███████╗██╗" << endl;
            cout << RED<<"╚═╝     ╚══════╝╚═╝  ╚═╝╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝" <<  endl;
            cout << RED<<"                                                               " << RESET << endl;
            cout<< BLUE <<"El jugador era "<< adivino <<RESET<< endl;

            return 0;
        }

        if (intento == adivino) {
            cout << GREEN<< ""<< RESET << endl;
            cout << GREEN<< " ██████╗  █████╗ ███╗   ██╗ █████╗ ███████╗████████╗███████╗██╗"<< RESET << endl;
            cout << GREEN<< "██╔════╝ ██╔══██╗████╗  ██║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██║"<< RESET << endl;
            cout << GREEN<< "██║  ███╗███████║██╔██╗ ██║███████║███████╗   ██║   █████╗  ██║"<< RESET << endl;
            cout << GREEN<< "██║   ██║██╔══██║██║╚██╗██║██╔══██║╚════██║   ██║   ██╔══╝  ╚═╝"<< RESET << endl;
            cout << GREEN<< "╚██████╔╝██║  ██║██║ ╚████║██║  ██║███████║   ██║   ███████╗██╗"<< RESET << endl;
            cout << GREEN<< " ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝"<< RESET << endl;
            cout << GREEN<< "                                                               "<< RESET << endl;
            return 0;
        }

bool esta_en_palabra = false;
bool esta_en_posicion_correcta = false;

for (int i = 0; i < largo; i++) {
    if (intento[i] == adivino[i]) {
        cout << GREEN << "|" << intento[i]<< "|" << RESET << " "; 
        esta_en_posicion_correcta = true;
    } else {
        esta_en_palabra = false;
        for (int ii = 0; ii < largo; ii++) {
            if (intento[i] == adivino[ii]) {
                cout << YELLOW << "|" << intento[i] << "|" << RESET << " ";
                esta_en_palabra = true;
                break;
            }
        }
        if (!esta_en_palabra) {
            cout << RED << "|" << intento[i] << "|" << RESET << " "; 
        }
    }

}
cout << endl;


if (esta_en_posicion_correcta) {
    cout << "";
//        bool esta = true;
//        for (int i = 0; i < largo; i++){
//            if (intento[i] == adivino[i]){
//                cout<< GREEN << intento[i] << RESET << " ";
//            }
//            else{
//                for (int ii = 0; ii < intento.size() ; ii++){
//                    if (adivino[i] == intento[ii] ){
//                        cout << YELLOW << intento[i] << RESET << " ";
//                        esta = false;
//                    }
//                }
//                if (esta)
//                {
//                    cout << RED << intento[i] << RESET << " ";
//                }
//            }
//        }
//        cout<<endl;
                
        //for(int i = 0; i < intento.size(); i++) {
        //    char letra = intento[i];
        //    bool letra_encontrada = false;
//
        //    
        //    for(int j = 0; j < largo; j++) {
        //        if (letra == adivino[j]) {
        //            letra_encontrada = true;
        //            if (intento[i] == adivino[j]){
        //                //cout << "La letra " << letra << " está en el jugador y en esta posición." << endl;
        //                cout<< GREEN << adivino[j] << RESET;
        //            } else {
        //                //cout << "La letra " << letra << " está en el jugador pero no en esta posición." << endl;
        //            }
        //            break;
        //        }
        //    }
        //}
        

    

}
}
}