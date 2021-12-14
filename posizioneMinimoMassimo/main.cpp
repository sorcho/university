/*Indicare la posizione di minimo e massimo*/

#include <iostream>

using namespace std;

int main() {
    int posMax, posMin, n, max, min;

    do {
        cout << "Inserire la dimensione del vettore: ";
        cin >> n;

        if (n < 1 || n > 10)
            cout << "Errore. Valore non valido.\n";
    } while (n < 1 || n > 10);

    int num[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserire il valore: ";
        cin >> num[i];

        if (i == 0) {
            max = num[i];
            min = num[i];
        }

        if (num[i] > max) {
            max = num[i];
            posMax = i;
        }

        if (num[i] < min) {
            min = num[i];
            posMin = i;
        }
    }

    cout << "La posizione del minimo: " << posMin;
    cout << "\nLa posizione del massimo: " << posMax;
    return 0;
}
