/*Calcolare massimo, minimo e media tramite ciclo for*/

#include <iostream>

using namespace std;

int main() {
    float n, voto, media;
    int min = 30, max = 0;

    cout << "Scegliere il numero di voti da inserire: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        do {
            cout << "Inserire il voto: ";
            cin >> voto;

            if (voto <= 0 || voto > 30)
                cout << "Errore: valore non valido.\n";
        } while (voto <= 0 || voto > 30);

        if (voto < min)
            min = voto;
        if (voto > max)
            max = voto;

        media += voto;
    }

    media /= n;

    cout << "Il valore massimo " << char(130) << " : " << max << endl;
    cout << "Il valore minimo " << char(130) << " : " << min << endl;
    cout << "Il valore medio " << char(130) << " : " << media << endl;

    return 0;
}
