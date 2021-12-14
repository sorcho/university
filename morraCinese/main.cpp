#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string gesti[3] = {"sasso", "carta", "forbici"}, giocatoreUno, giocatoreDue, scelta;
    char ripeti;
    int gestoRandom;

    do {
        srand(time(NULL));
        gestoRandom = rand() % 2 + 0;

        do {
            cout << "Modalit" << char(133) << " disponibili:\n - Multigiocatore\n - Computer\nEffettua la tua scelta (multigiocatore/computer): ";
            cin >> scelta;

            if (scelta != "multigiocatore" && scelta != "computer")
                cout << "Errore, scelta non valida. Riprovare.\n";
        } while (scelta != "multigiocatore" && scelta != "computer");

        system("cls");

        if (scelta == "multigiocatore") {
            do {
                cout << "Giocatore Uno fai la tua mossa: ";
                cin >> giocatoreUno;

                if (giocatoreUno != "sasso" && giocatoreUno != "carta" && giocatoreUno != "forbici")
                    cout << "Errore, scelta non valida. Riprovare.\n";
            } while (giocatoreUno != "sasso" && giocatoreUno != "carta" && giocatoreUno != "forbici");

            do {
                cout << "Giocatore Due fai la tua mossa: ";
                cin >> giocatoreDue;

                if (giocatoreDue != "sasso" && giocatoreDue != "carta" && giocatoreDue != "forbici")
                    cout << "Errore, scelta non valida. Riprovare.\n";
            } while (giocatoreDue != "sasso" && giocatoreDue != "carta" && giocatoreDue != "forbici");

            if (giocatoreUno == "sasso" && giocatoreDue == "carta")
                cout << "Il Giocatore Uno ha perso!\n";
            else if (giocatoreUno == "sasso" && giocatoreDue == "forbici")
                cout << "Il Giocatore Uno ha vinto!\n";
            else if (giocatoreUno == "carta" && giocatoreDue == "forbici")
                cout << "Il Giocatore Uno ha perso!\n";
            else if (giocatoreUno == "carta" && giocatoreDue == "sasso")
                cout << "Il Giocatore Uno ha vinto!\n";
            else if (giocatoreUno == "forbici" && giocatoreDue == "sasso")
                cout << "Il Giocatore Uno ha perso!\n";
            else if (giocatoreUno == "forbici" && giocatoreDue == "carta")
                cout << "Il Giocatore Uno ha vinto!\n";
            else if (giocatoreUno == giocatoreDue)
                cout << "Pareggio!\n";
        } else {
            do {
                cout << "Fai la tua mossa: ";
                cin >> giocatoreUno;

                if (giocatoreUno != "sasso" && giocatoreUno != "carta" && giocatoreUno != "forbici")
                    cout << "Errore, scelta non valida. Riprovare.\n";
            } while (giocatoreUno != "sasso" && giocatoreUno != "carta" && giocatoreUno != "forbici");

            if (giocatoreUno == "sasso" && gesti[gestoRandom] == "carta")
                cout << "Il Giocatore Uno ha perso!\n";
            else if (giocatoreUno == "sasso" && gesti[gestoRandom] == "forbici")
                cout << "Il Giocatore Uno ha vinto!\n";
            else if (giocatoreUno == "carta" && gesti[gestoRandom] == "forbici")
                cout << "Il Giocatore Uno ha perso!\n";
            else if (giocatoreUno == "carta" && gesti[gestoRandom] == "sasso")
                cout << "Il Giocatore Uno ha vinto!\n";
            else if (giocatoreUno == "forbici" && gesti[gestoRandom] == "sasso")
                cout << "Il Giocatore Uno ha perso!\n";
            else if (giocatoreUno == "forbici" && gesti[gestoRandom] == "carta")
                cout << "Il Giocatore Uno ha vinto!\n";
            else if (giocatoreUno == gesti[gestoRandom])
                cout << "Pareggio!\n";
        }

        do {
            cout << "Vuoi continuare a giocare?\nInserisci la risposta (s/n): ";
            cin >> ripeti;

            if (ripeti != 's' && ripeti != 'n')
                cout << "Errore, scelta non valida. Riprovare.\n";
        } while (ripeti != 's' && ripeti != 'n');
    } while (ripeti == 's');

    return 0;
}
