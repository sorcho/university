/*Caricare una matrice*/

#include <iostream>

using namespace std;

int main() {
    int dimUno, dimDue;

    cout << "Inserire la prima dimensione: ";
    cin >> dimUno;

    cout << "Inserire la seconda dimensione: ";
    cin >> dimDue;

    int mat[dimUno][dimDue];

    for (int i = 0; i < dimUno; i++) {
        for (int j = 0; j < dimDue; j++) {
            cout << "Inserire valore nella riga " << i+1 << ", colonna " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < dimUno; i++) {
        for (int j = 0; j < dimDue; j++) {
            cout << "Stampa della riga " << i+1 << ", colonna " << j+1 << ": ";
            cout << mat[i][j] << endl;
        }
    }
    return 0;
}
