/*Traccia:
 * Far inserire all'utente un valore INT e poi stamparlo a video.
*/
#include <iostream>

using namespace std;

int main() {
    int numero; //Dichiaro una variabile int all'interno della quale istanzierò un numero

    cout << "Inserisci un numero: "; //Stampa a schermo di una stringa
    cin >> numero; //L'utente inserisce un numero che poi viene salvato nella variabile
    cout << "Il numero inserito " << char(130) << ": " << numero; //Stampa del numero inserito

    return 0;
}
