/* Risolvere un'equazione di secondo grado (ax^2 + bx + c = 0)
 * Delta = b^2 - 4ac*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, delta, x;

    cout << "Inserisci il primo valore: ";
    cin >> a;

    cout << "Inserisci il secondo valore: ";
    cin >> b;

    cout << "Inserisci il terzo valore: ";
    cin >> c;

    delta = b * b - 4 * a * c;

    if (delta == 0) {
        b -= b;

        x = b / (2 * a);

        cout << "Essendo il delta uguale a zero, abbiamo un solo risultato: " << x << endl;
    } else if (delta < 0) {
        cout << "Essendo il delta minore di zero, non abbiamo risultati.";
    } else {
        b *= -1;

        x = (b + sqrt(delta)) / (2 * a);

        cout << "Essendo il delta maggiore di zero, abbiamo due risultati." << endl << "Il primo risultato " << char(130) << ": " << x << endl;

        x = (b - sqrt(delta)) / (2 * a);

        cout <<"Il secondo risultato: " << char(130) << ": " << x << endl;
    }

    return 0;
}
