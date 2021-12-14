/*Traccia:
 * Far inserire all'utente due valori INT, successivamente invertire il contenuto delle variabili e stampare a video.
*/
using namespace std;

#include <iostream>

int main() {
    int a, b, app; //Dichiaro tre variabili int

    cout << "Inserisci un numero: "; //Stampa a schermo di una stringa
    cin >> a; //L'utente inserisce un numero nella variabile

    cout << "Inserisci un altro numero: "; //Stampa a schermo di una stringa
    cin >> b; //L'utente inserisce un numero nella variabile

    app = a; //Il contenuto della variabile 'a' viene salvato nella variabile 'app'
    a = b; //Il contenuto della variabile 'a' viene sovrascritto dal contenuto della variabile 'b'
    b = app; //Il contenuto della variabile 'b' viene sovrascritto dal contenuto della variabile 'app' contentente il valore della variabile 'a'

    cout << "Il primo numero inserito " << char(130) << " diventato: " << a << endl; //Stampa a schermo della variabile 'a'
    cout << "Il secondo numero inserito " << char(130) << " diventato: " << b; //Stampa a schermo della variabile 'b'

    return 0;
}
