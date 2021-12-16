using namespace std;

#include <iostream>

typedef struct dati{
    int numero;
    struct dati *prossimo;
} lista;

int main(){
    lista *head = new lista;
    lista *punt = head;

    char ripeti;

    do{
        cout << "Inserisci un numero: ";
        cin >> punt -> numero;

        do{
            cout << "Vuoi inserire un altro elemento?\nInserisci la risposta (s/n): ";
            cin >> ripeti;

            if (ripeti != 's' && ripeti != 'n')
                cout << "Errore, risposta non valida. Riprova\n";
        } while (ripeti != 's' && ripeti != 'n');

        if (ripeti == 's'){
            punt -> prossimo = new lista;
            punt = punt -> prossimo;
        }
    } while (ripeti == 's');

    punt -> prossimo = NULL;
    punt = head;

    while (punt != NULL){
        cout << "Valore stampato: " << punt -> numero << endl;
        punt = punt -> prossimo;
    }
}