#include <iostream>

using namespace std;

int somma(int dimensione, int vettore[]){
    int somma = 0;

    for (int i = 0; i < dimensione; ++i)
        somma += vettore[i];

    return somma;
}

int massimo(int dimensione, int vettore[]){
    int max = vettore[0];

    for (int i = 1; i < dimensione; ++i) {
        if (vettore[i] > max)
            max = vettore[i];
    }

    return max;
}

int main() {
    int n;

    cout << "Inserire la dimensione del vettore: ";
    cin >> n;

    int vettore[n];

    for (int i = 0; i < n; ++i) {
        cout << "Inserisci valore " << i+1 << ": ";
        cin >> vettore[i];
    }

    cout << "La somma di tutti i valori equivale a: " << somma(n, vettore) << endl << "Il massimo tra i valori inseriti equiavale a: " << massimo(n, vettore) << endl;

    return 0;
}