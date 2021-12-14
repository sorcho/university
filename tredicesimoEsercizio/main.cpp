/*stringa in input, array per vocali e uno per consonanti*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    string variabile;

    do {
        cout << "Inserire la grandezza del vettore: ";
        cin >> n;

        if (n < 1 || n > 10)
            cout << "Errore. Valore sbagliato.\n";
    } while (n < 1 || n > 10);

    char vocali[n], consonanti[n], parola[n];

    do {
        cout << "Inserire la parola: ";
        cin >> parola;

        if (strlen(parola) > n)
            cout << "Errore. Parola troppo lunga.\n";
    } while (strlen(parola) > n);

    for (int i = 0; i < n; i++) {
        if (parola[i] == 'a' || parola[i] == 'e' || parola[i] == 'i' || parola[i] == 'o' || parola[i] == 'u')
            vocali[i] = parola[i];
        else
            vocali[i] = ' ';

        if (parola[i] != 'a' && parola[i] != 'e' && parola[i] != 'i' && parola[i] != 'o' && parola[i] != 'u')
            consonanti[i] = parola[i];
        else
            consonanti[i] = ' ';
    }

    cout << "Le vocali sono: " << vocali;
    cout << "\nLe consonanti sono: " << consonanti;

    return 0;
}