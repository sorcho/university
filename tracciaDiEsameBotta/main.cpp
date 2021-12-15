#include <iostream>

using namespace std;

typedef struct dati{
        string nome, cognome, dataContatto;
        struct dati *prossimo;
} Lista;

void inserimento(Lista *e);
void stampa(Lista *e);
void ricerca(Lista *e);

int main(){
    char scelta;
    
    Lista *puntatoreIns = new Lista;
    Lista *puntatoreStampa = puntatoreIns;
    Lista *puntatoreRic = puntatoreIns;
    
    inserimento(puntatoreIns);

    stampa(puntatoreStampa);

    ricerca(puntatoreRic);
    
    return 0;
}

void inserimento(Lista *e){
    char scelta;
    
    do{
        do{
            cout << "\nInserire i dati richiesti.\nNome: ";
            cin >> e -> nome;
            
            if ((e -> nome).length() > 20)
                cout << "Errore, nome troppo lungo. Reinserire.\n";
        } while ((e -> nome).length() > 20);
        
        do{
            cout << "Cognome: ";
            cin >> e -> cognome;
            
            if ((e -> cognome).length() > 20)
                cout << "Errore, cognome troppo lungo. Reinserire.\n";
        } while ((e -> cognome).length() > 20);

        do{
            cout << "Inserire la data del contatto (gg/mm/aaaa): ";
            cin >> e -> dataContatto;
            
            if ((e -> dataContatto).length() > 8)
                cout << "Errore, data troppo lunga. Reinserire.\n";
        } while ((e -> dataContatto).length() > 8);
        
        e -> prossimo = new Lista;
        e = e -> prossimo;
        
        do{
            cout << "Vuoi inserire un altro utente?\nInserire la risposta (s/n): ";
            cin >> scelta;
            
            if (scelta != 's' && scelta != 'n')
                cout << "Errore, scelta non valida. Reinserire.\n";
        } while (scelta != 's' && scelta != 'n');
    } while (scelta == 's');

    e -> prossimo = NULL;
}

void stampa(Lista *e){
    cout << "Stampa dei dati: \n";
    
    while (e -> prossimo != NULL){
        cout << "\nNome: " << e -> nome;
        cout << "\nCognome: " << e -> cognome;
        cout << "\nData del contatto: " << e -> dataContatto;
        
        e = e -> prossimo;
    }
}

void ricerca(Lista *e){
    string dataRicerca;

    do{
        cout << "\nInserire la data in cui si vogliono ricercare i contatti: ";
        cin >> dataRicerca;

        if (dataRicerca.length() > 8)
            cout << "Errore, data non valida. Reinserire.\n";
    } while (dataRicerca.length() > 8);

    while (e -> prossimo != NULL){
        if (dataRicerca == (e -> dataContatto))
            cout << "Contatto avuto con: " << e -> nome << " " << e -> cognome << endl;
        
        e = e -> prossimo;
    }
}