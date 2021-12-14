/**/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;

    cout << "Inserisci la grandezza del vettore: ";
    cin >> n;

    char vettore[n];

    cout << "Inserisci la frase: ";
    cin >> vettore;

    cout << "La frase " << char(138) << " composta da " << strlen(vettore) << " lettere.\n";
    return 0;
}
