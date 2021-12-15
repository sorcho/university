using namespace std;

#include <iostream>

int main(){
    char risposta;

    struct elemento{
        int numero;
        struct elemento *prossimo;
    };

    typedef struct elemento Lista;

    Lista *punt = new Lista;
    Lista *app = punt;

    do{
        cout << "Inserisci il valore: ";
        cin >> punt -> numero;
        punt -> prossimo = new Lista;
        punt = punt -> prossimo;

        do{
            cout << "Vuoi inserire un altro valore?\nInserisci la risposta (s/n): ";
            cin >> risposta;

            if (risposta != 's' && risposta != 'n')
                cout << "Errore, inserimento non valido. Reinserisci.\n";
        } while (risposta != 's' && risposta != 'n');
    } while (risposta == 's');

    punt -> prossimo = NULL;

    while (app -> prossimo != NULL){
        cout << "Elemento stampato: " << app -> numero << endl;
        app = app -> prossimo;
    }

    return 0;
}