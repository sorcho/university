/*Eseguire la media di 5 valori inseriti dall'utente all'interno di un vettore*/

#include <iostream>

using namespace std;

int main() {
    float valori[5], somma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero: ";
        cin >> valori[i];

        somma += valori[i];
    }

    cout << "La media dei valori " << char(130) << " : " << somma / 5 << endl;

    return 0;
}
