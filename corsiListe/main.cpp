using namespace std;
#include <iostream>

typedef struct dati{
    string nomeCorso, nomeDocente, giorno[3];
    int nGiorni;
    dati *prossimo;
} lista;

void caricamento(lista *p);
void stampa(lista *p, lista *head);
void ricerca(lista *p, lista *head);

int main(){
    lista *primaStruct = new lista;
    lista *puntatore = primaStruct;

    caricamento(puntatore);
    stampa(puntatore, primaStruct);
    ricerca(puntatore, primaStruct);

    return 0;
}

void caricamento(lista *p){
    char risposta;
    int nGg;

    do{
        nGg = 0;

        do{
            cout << "Inserisci nome del corso: ";
            cin >> p -> nomeCorso;
            if(p->nomeCorso.length() > 20 || p->nomeCorso.length() < 1)
                cout << "Nome del corso non valido. Reinserire.\n";
        } while (p->nomeCorso.length() > 20 || p->nomeCorso.length() < 1);

        do{
            cout << "Inserisci nome del docente: ";
            cin >> p -> nomeDocente;
            if(p->nomeDocente.length() > 20 || p->nomeDocente.length() < 1)
                cout << "Nome del corso non valido. Reinserire.\n";
        } while (p->nomeDocente.length() > 20 || p->nomeDocente.length() < 1);

        do{
            do{
                cout << "Inserisci il " << nGg + 1 << "° giorno del corso: ";
                cin >> p -> giorno[nGg];

                if (p -> giorno[nGg].length() < 1 || p -> giorno[nGg].length() > 3)
                    cout << "Giorno inserito non valido. Reinserire.\n";
            } while (p -> giorno[nGg].length() < 1 || p -> giorno[nGg].length() > 3);

            nGg++;

            do{
                cout << "Vuoi inserire un altro giorno?\nInserisci la risposta: ";
                cin >> risposta;

                if (risposta != 's' && risposta != 'n')
                    cout << "Scelta non valida. Reinserire.\n";
            } while (risposta != 's' && risposta != 'n');
        } while (risposta == 's' && nGg < 3);

        p -> nGiorni = nGg;

        do{
            cout << "Vuoi inserire un altro corso?\nInserisci la risposta: ";
            cin >> risposta;

            if (risposta != 's' && risposta != 'n')
                cout << "Scelta non valida. Reinserire.\n";
        } while (risposta != 's' && risposta != 'n');

        if (risposta == 's'){
            p -> prossimo = new lista;
            p = p -> prossimo;
        }
    } while (risposta == 's');

    p -> prossimo = NULL;
}

void stampa(lista *p, lista *head){
    p = head;

    cout << "Stampa dei corsi: ";

    while (p != NULL){
        cout << "\nNome del corso: " << p -> nomeCorso; 
        cout << "\nNome del docente: " << p -> nomeDocente << endl;

        for (int i = 0; i < p -> nGiorni; i++)
            cout << i + 1 << "° giorno del corso: " << p -> giorno[i];
        
        p = p -> prossimo;
    }
}

void ricerca(lista *p, lista *head){
    p = head;

    string giornoRicerca;

    do{
        cout << "\nInserisci il giorno da cercare: ";
        cin >> giornoRicerca;

        if (giornoRicerca.length() < 1 || giornoRicerca.length() > 3)
            cout << "Giorno inserito non valido. Reinserire.\n";
    } while (giornoRicerca.length() < 1 || giornoRicerca.length() > 3);

    while (p != NULL){
        for (int i = 0; i < p -> nGiorni; i++)
            if (giornoRicerca == p -> giorno[i]){
                cout << "\nTrovato il seguente corso: " << p -> nomeCorso;
                cout << "\nNome del docente: " << p -> nomeDocente;
            }

        p = p -> prossimo;
    }
}