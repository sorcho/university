/*Scrivere un programma che calcoli minimo, media e massimo, il programma chiede se tutti i valori
  sono stati inseriti*/

#include <iostream>

using namespace std;

int main() {
    int voto, min = 30, max = 0, n = 0;
    float media = 0;
    char scelta;

    do {
        do {
            cout << "Inserire un voto: ";
            cin >> voto;

            n++;

            if (voto > 30)
                cout << "Errore: voto non valido, reinserire\n";
        } while (voto > 30);

        if (voto > max)
            max = voto;

        if (voto < min)
            min = voto;

        media += voto;

        do {
            cout << "Hai inserito tutti i voti? (s/n)\nInserire la risposta: ";
            cin >> scelta;

            if (scelta != 's' && scelta != 'n')
                cout << "Errore: scelta non valida, reinserire.\n";
        } while (scelta != 's' && scelta != 'n');
    } while (scelta == 'n');

    media /= n;

    cout << "Il valore minimo " << char(130) << ": " << min << endl;
    cout << "Il valore massimo " << char(130) << ": " << max << endl;
    cout << "Il valore medio " << char(130) << ": " << media << endl;

    return 0;
}
