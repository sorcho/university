/*Inserire l'età di una persona, stampare se può guidare:
 * Motorino (16),
 * Automobile (18),
 * Motocicletta (21),
 * Nessuno;
 * Se età negativa o maggiore di 120 errore.*/

#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Inserire l'et" << char(133) << ": ";
    cin >> age;

    if (age >= 16 && age < 18) {
        cout << "L'utente pu" << char(148) << " guidare il motorino." << endl;
    } else if (age >= 18 && age < 21) {
        cout << "L'utente pu" << char(148) << " guidare l'automobile e il motorino." << endl;
    } else if (age >= 21) {
        cout << "L'utente pu" << char(148) << " guidare tutto." << endl;
    } else if (age < 0 || age > 120) {
        cout << "L'et" << char(133) << "inserita " << char(130) << " sbagliata." << endl;
    } else {
        cout << "Sei troppo piccolo per guidare." << endl;
    }

    return 0;
}
