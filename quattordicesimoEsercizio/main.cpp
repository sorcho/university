/*array di int in input, maggiore la media dei numeri pari o quella dei numeri dispari*/

#include <iostream>

using namespace std;

int main() {
    int n;
    float mediaPari = 0, mediaDispari = 0, indicePari = 0, indiceDispari = 0;

    do {
        cout << "Inserire la dimensione del vettore: ";
        cin >> n;

        if (n < 1)
            cout << "Errore. Valore non valido, riprovare.\n";
    } while (n < 1);

    int vettore[n];

    for (int i = 0; i < n; i++) {

        do {
            cout << "Inserire il " << i + 1 << char(167) << " valore: ";
            cin >> vettore[i];

            if (vettore[1] < 0)
                cout << "Errore. Valore non valido, riprovare.\n";
        } while (vettore[1] < 0);

        if (vettore[i] % 2 == 0) {
            mediaPari += vettore[i];
            indicePari++;
        } else {
            mediaDispari += vettore[i];
            indiceDispari++;
        }
    }

    mediaDispari /= indiceDispari;
    mediaPari /= indicePari;

    cout << "La media dei numeri pari " << char(138) << ": " << mediaPari << endl;
    cout << "La media dei numeri dispari " << char(138) << ": " << mediaDispari << endl;

    if (mediaPari > mediaDispari)
        cout << "La media dei numeri pari " << char(138) << " maggiore rispetto a quella dei numeri dispari.\n";
    else
        cout << "La media dei numeri dispari " << char(138) << " maggiore rispetto a quella dei numeri pari.\n";

    return 0;
}
