/*Ricercare un valore all'interno del vettore*/

#include <iostream>

using namespace std;

int main() {
    int n, valore;
    bool trovato = false;

    cout << "Quanti valori devono essere caricati all'interno del vettore?\nDigitare la risposta: ";
    cin >> n;

    int vettore[n];

    for (int i = 0; i < n; i++) {
        vettore[i] = rand();
    }

    int i = 0;

    cout << "Inserire il valore da ricercare: ";
    cin >> valore;

    while (!trovato && i < n) {
        if (valore == vettore[i])
            trovato = true;

        i++;
    }

    if (trovato)
        cout << "Il valore " << char(130) << " stato trovato!\n";
    else
        cout << "Il valore non " << char(130) << " stato trovato!\n";

    return 0;
}
