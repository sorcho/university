using namespace std;

#include <iostream>
#include <cstring>

typedef struct dati{
    string nome, cognome, classe;
    char posto[4];
    struct dati *prossimo;
}lista;

void caricamento(lista *testa, lista *p);
void stampa(lista *testa, lista *p);
void cerca(lista *testa, lista *p);

int main(){
    lista *head = new lista;
    lista *puntatore = head;

    caricamento(head, puntatore);
    stampa(head, puntatore);
    cerca(head, puntatore);

    return 0;
}

void caricamento(lista *testa, lista *p){
    int i = 1;
    char risposta;

    do{
        cout << "Inserisci il nome del passeggero " << i << ": ";
        cin >> p -> nome;

        cout << "Inserisci il cognome del passeggero " << i << ": ";
        cin >> p -> cognome;

        do{
            cout << "Inserisci il posto del passeggero " << i << ": ";
            cin >> p -> posto;

            if (strlen(p -> posto) != 3)
                cout << "Errore, posto non valido. Reinserire\n";
        } while (strlen(p -> posto) != 3);


        do{
            cout << "Inserisci la classe del passeggero " << i << " (b/e): ";
            cin >> p -> classe;

            if (p -> classe != "e" && p -> classe != "b")
                cout << "Errore, inserimento non valido. Reinserire.\n";
        } while ((p -> classe != "e" && p -> classe != "b"));

        if (p -> classe == "b")
            p -> classe = "Business";
        else
            p -> classe = "Economy";

        do{
            cout << "Vuoi inserire un altro passeggero?\nInserisci la risposta (s/n): ";
            cin >> risposta;

            if (risposta != 's' && risposta != 'n')
                cout << "Errore, scelta non valida. Reinserire.\n";
        } while (risposta != 's' && risposta != 'n');

        if (risposta == 's'){
            p -> prossimo = new lista;
            p = p -> prossimo;
        }

        i++;
    } while (risposta == 's' && i < 300);

    p -> prossimo = NULL;
}

void stampa(lista *testa, lista *p){
    p = testa;

    int i = 1;

    cout << "Stampa dell'elenco passeggeri: ";
    while (p != NULL){
        cout << "\nNome del passeggero " << i << ": " << p -> nome << endl;
        cout << "Cognome del passeggero " << i << ": " << p -> cognome << endl;
        cout << "Posto del passeggero " << i << ": " << p -> posto << endl;
        cout << "Classe del passeggero " << i << ": " << p -> classe << endl;

        p = p -> prossimo;
    }
}

void cerca(lista *testa, lista *p){
    string cerca;
    char scelta;
    bool trovato;

    do{
        p = testa;
        trovato = false;

        cout << "Inserisci il cognome del passeggero da cercare: ";
        cin >> cerca;

        while (p != NULL){
            if (cerca == p -> cognome){
                cout << "Passeggero trovato.\n";
                cout << "Nome del passeggero: " << p -> nome << endl;
                cout << "Cognome del passeggero: " << p -> cognome << endl;
                cout << "Posto del passeggero: " << p -> posto << endl;
                cout << "Classe del passeggero: " << p -> classe << endl;

                trovato = true;
            }

            p = p -> prossimo;
        }

        if (!trovato)
            cout << "Passeggero non trovato!\n";

        do{
            cout << "Vuoi cercare un altro passeggero?\nInserisci la risposta (s/n): ";
            cin >> scelta;

            if (scelta != 's' && scelta != 'n')
                cout << "Scelta non valida. Reinserire.\n";
        } while (scelta != 's' && scelta != 'n');
    } while (scelta == 's');
}