/*ELevazione a potenza, l'utente inserisce base ed esponente, uso del for*/

#include <iostream>

using namespace std;

int main() {
    int base, esponente, risultato = 1;

    cout << "Inserire la base: ";
    cin >> base;

    cout << "Inserire l'esponente: ";
    cin >> esponente;

    for (int i = 0; i < esponente; ++i)
        risultato *= base;

    cout << "Il risultato della potenza " << char(130) << " : " << risultato << endl;

    return 0;
}
