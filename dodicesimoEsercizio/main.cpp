/*media e minimo di 5 valori inseriti in un array, la cui dimensione è fornita dall'utente*/

#include <iostream>

using namespace std;

int main() {
    int n, media;
    int minimo, massimo;

    do {
        cout << "Inserire quanti valori si vogliono inserire nel vettore: ";
        cin >> n;
    } while (n < 1 || n > 10);

    float numeri[n];

    for (int i = 0; i < n; i++) {
        cout << "Inserire il " << i + 1 << "° valore: ";
        cin >> numeri[i];

        if (i == 0) {
            minimo = numeri[i];
            massimo = numeri[i];
        } else {
            if (numeri[i] < minimo)
                minimo = numeri[i];
            if (numeri[i] > massimo)
                massimo = numeri[i];
        }

        media += numeri[i];
    }

    cout << "La media equivale a: " << media / (float) n << endl;
    cout << "Il minimo equivale a: " << minimo << endl;
    cout << "Il massimo equivale a: " << massimo << endl;

    return 0;
}
