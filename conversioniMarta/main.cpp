#include <iostream>

using namespace std;

int main() {
    //Dichiarazione delle variabili
    int numero, conversione[100], i = -1;

    //Inserimento e controllo del numero
    do {
        cout << "Inserisci il tuo numero" << endl;
        cin >> numero;

        if (numero < 0) {
            cout << "Il numero non pu" << char(149) << " essere negativo. Riprova.\n";
        }
    } while (numero < 0);

    while (numero != 0) {
        conversione[i++] = numero % 2;
        numero /= 2;
    }

    for (int j = 0; j < i+1; j++)
        cout << conversione[j];

    return 0;
}