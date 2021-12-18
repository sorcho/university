using namespace std;

#include <iostream>

typedef struct dati{
    int numero;
    struct dati *prossimo;
}lista;

void inserimento(lista *e, lista *f);
void stampa(lista *e, lista *f);

int main(){
    char scelta;

    do{
        cout << "Vuoi caricare la lista?\nInserisci la risposta: ";
        cin >> scelta;

        if (scelta != 's' && scelta != 'n')
            cout << "Errore.\n";
    } while (scelta != 's' && scelta != 'n');

    if (scelta == 's'){
        lista *head = new lista;
        lista *puntatore = head;

        inserimento(puntatore, head);
        stampa(puntatore, head);
    } else
        cout << "Arrivederci!\n";

    return 0;
}

void inserimento(lista *e, lista *f){
        char scelta;

        do{
            cout << "Inserisci valore: ";
            cin >> e -> numero;

            do{
                cout << "Vuoi inserire un altro valore?\nInserisci risposta: ";
                cin >> scelta;

                if (scelta != 's' && scelta != 'n')
                    cout << "Errore.\n";
            } while (scelta != 's' && scelta != 'n');

            if (scelta == 's'){
                e -> prossimo = new lista;
                e = e -> prossimo;
            }
        } while (scelta == 's');

        e -> prossimo = NULL;
}

void stampa(lista *e, lista *f){
    e = f;

    while (e != NULL){
        cout << "Valore: " << e -> numero << endl;
        e = e -> prossimo;
    }
}