/*Caricare valori in una matrice con grandezza inserita dall'utente, swappare i valori delle righe*/

#include <iostream>

using namespace std;

int main() {
    int righe, colonne, swapUno, swapDue;

    do{
        cout << "Inserire il numero di righe: ";
        cin >> righe;

        if (righe < 1)
            cout << "Errore. Valore non valido, reinserire.\n";
    } while (righe < 1);

    do{
        cout << "Inserire il numero di colonne: ";
        cin >> colonne;

        if (colonne < 1)
            cout << "Errore. Valore non valido, reinserire.\n";
    } while (colonne < 1);

    int mat[righe][colonne];

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << "Inserire valore nella matrice [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }

    do {
        cout << "Dimmi le due righe di cui vorresti invertire i valori.\nRiga uno: ";
        cin >> swapUno;

        if (swapUno < 1 || swapUno > righe)
            cout << "Errore. Valore non valido, reinserire.\n";
    } while (swapUno < 1 || swapUno > righe);

    do {
        cout << "Riga due: ";
        cin >> swapDue;

        if (swapDue < 1 || swapDue > righe)
            cout << "Errore. Valore non valido, reinserire.\n";
    } while (swapDue < 1 || swapDue > righe);

    swapUno--;
    swapDue--;

    for (int j = 0; j < colonne; j++)
        swap(mat[swapUno][j], mat[swapDue][j]);

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++)
            cout << mat[i][j] << endl;
        cout << endl;
    }

    return 0;
}
