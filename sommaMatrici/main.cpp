/*Effettuare la somma di tutti i valori inseriti per ogni riga*/

#include <iostream>

using namespace std;

int main() {
    int mat[4][3], somma, max;

    for (int i = 0; i < 4; i++) {
        somma = 0;

        for (int j = 0; j < 3; j++) {
            cout << "Inserire valore nella riga " << i+1 << ", colonna " << j+1 << ": ";
            cin >> mat[i][j];

            if (j == 0)
                max = mat[i][j];

            if (mat[i][j] > max)
                max = mat[i][j];

            somma += mat[i][j];
        }

        cout << "La somma della riga " << i+1 << " " << char(138) << ": " << somma << endl;
        cout << "Il valore massimo della riga " << i+1 << " " << char(138) << ": " << max << endl;
    }

    return 0;
}
