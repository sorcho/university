/**/

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Inserire il numero di struct presenti: ";
    cin >> n;

    struct data{
        string giorno, mese, anno;
        char vettore[2][100];
    } calendario[n];


    for (int j = 0; j < n; ++j) {

        cout << "Inserire il mese, il giorno e l'anno: \n";
        cin >> calendario[j].mese;
        cin >> calendario[j].giorno;
        cin >> calendario[j].anno;

        cout << "Inserire i nomi dei due santi più importanti: ";
        for (int i = 0; i < 2; ++i)
            cin >> calendario[j].vettore[i];

        cout << "Il mese e': " << calendario[j].mese << endl;
        cout << "Il giorno e': " << calendario[j].giorno << endl;
        cout << "L'anno e': " << calendario[j].anno << endl;

        cout << "I santi piu' importanti sono: \n";
        for (int i = 0; i < 2; ++i)
            cout << calendario[j].vettore[i] << endl;
    }

    return 0;
}
