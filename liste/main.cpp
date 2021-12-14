/*caricamento e stampa di una lista tramite puntatori*/

#include <iostream>

using namespace std;

int main() {
    int n;

    struct Rubrica{
        int numero;
        string nome;
        struct Rubrica *prossimo;
    };

    typedef struct Rubrica informazioni;

    informazioni *puntatore = new informazioni;

    {
        informazioni *p = puntatore;

        cout << "Inserire un valore: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Inserisci il numero: ";
            cin >> p->numero;
            cout << "Inserisci il nome: ";
            cin >> p->nome;
            p->prossimo = new informazioni;
            p = p->prossimo;
        }

        p->prossimo = NULL;
    }

    informazioni *p = puntatore;

    while (p->prossimo != NULL){
        cout << "Numero: " << p-> numero << "\nNome: " << p->nome << endl;
        p = p->prossimo;
    }

    return 0;
}
