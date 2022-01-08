using namespace std;
#include <iostream>

typedef struct dati{
    string nome, cognome;
    int peso, eta;
    dati *prossimo;
} lista;

void caricamento(lista *p);
void stampa(lista *p, lista *princ);
int pesoMax(lista *p, lista *princ);
int pesoMin(lista *p, lista *princ);
void ricerca(lista *p, lista *princ);

int main(){
    lista *primaStruct = new lista;
    lista *puntatore = primaStruct;

    caricamento(puntatore);
    stampa(puntatore, primaStruct);
    int max = pesoMax(puntatore, primaStruct);
    int min = pesoMin(puntatore, primaStruct);
    ricerca(puntatore, primaStruct);

    cout << "\nIl peso massimo registrato e: " << max << "kg, mentre quello minimo e: " << min << "kg.\n";

    return 0;
}

void caricamento(lista *p){
    char risposta;

    do{
        cout << "Inserisci il nome: ";
        cin >> p -> nome;

        cout << "Inserisci il cognome: ";
        cin >> p -> cognome;

        cout << "Inserisci l'eta: ";
        cin >> p -> eta;

        cout << "Inserici il peso: ";
        cin >> p -> peso;

        do{
            cout << "Vuoi inserire un altro utente?\nInserisci la risposta: ";
            cin >> risposta;

            if (risposta != 's' && risposta != 'n')
                cout << "Errore, scelta non valida. Reinserire\n";
        }while (risposta != 's' && risposta != 'n');

        if (risposta == 's'){
            p -> prossimo = new lista;
            p = p -> prossimo;
        }
    } while (risposta == 's');

    p -> prossimo = NULL;
}

void stampa(lista *p, lista *princ){
    p = princ;

    cout << "Stampa della lista: ";

    while (p != NULL){
        cout << "\nNome: " << p -> nome;
        cout << "\nCognome: " << p -> cognome;
        cout << "\nEta: " << p -> eta;
        cout << "\nPeso: " << p -> peso << "kg";

        p = p -> prossimo;
    }
}

int pesoMax(lista *p, lista *princ){
    p = princ -> prossimo;

    int max = princ -> peso;

    while (p != NULL){
        if (p -> peso > max)
            max = p -> peso;

        p = p -> prossimo;
    }

    return max;
}

int pesoMin(lista *p, lista *princ){
    p = princ -> prossimo;

    int min = princ -> peso;

    while (p != NULL){
        if (p -> peso < min)
            min = p -> peso;

        p = p -> prossimo;
    }

    return min;
}

void ricerca(lista *p, lista *princ){
    p = princ;

    string cerca;

    cout << "\nInserisci un cognome da ricercare: ";
    cin >> cerca;

    while (p != NULL){
        if (cerca == p -> cognome){
            cout << "Trovato il seguente utente: " << p -> cognome << " " << p -> nome << endl;
            cout << "Peso: " << p -> peso << endl;
            cout << "Eta: " << p -> eta;
        }

        p = p -> prossimo;
    }
}