/*Calcolare e stampare la lunghezza della circonferenza (2 * pi * r), l'utente deve inserire il raggio, il Pi Greco è una costante*/

#include <iostream>

using namespace std;

int main() {
    float r, l;
    const float pi = 3.14;

    cout << "Inserire il raggio della circonferenza: ";
    cin >> r;

    while (r <= 0) {
        cout << "Errore: il raggio deve avere valore positivo\n";

        cout << "Inserire il raggio della circonferenza: ";
        cin >> r;
    }

    l = 2 * pi * r;

    cout << "La lunghezza della circonferenza " << char(130) << ": " << l << endl;
    return 0;
}
