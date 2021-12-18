using namespace std;

#include <iostream>
#include <fstream>

typedef struct dati{
    int numero;
    struct dati *prossimo;
}lista;

int main(){
    lista *head = new lista;
    lista *punt = head;

    int numero, i = 0;
    char ripeti;

    fstream file;

    file.open("file.txt", fstream::out);

    do{
        cout << "Scrivi un numero: ";
        cin >> numero;
        file << numero;

        punt -> numero = numero;

        i++;

        do{
            cout << "Vuoi inserire un altro numero?\nInserisci risposta (s/n): ";
            cin >> ripeti;

            if (ripeti != 's' && ripeti != 'n')
                cout << "Errore, reinserire.\n";
        } while (ripeti != 's' && ripeti != 'n');

        if (ripeti == 's'){
            file << endl;

            punt -> prossimo = new lista;
            punt = punt -> prossimo;
        }
    } while (ripeti == 's');

    punt -> prossimo = NULL;
    punt = head;

    while (punt != NULL){
        cout << "Valore inserito al quale " << char(138) << " stato sommato 1: " << (punt -> numero) + 1 << endl;
        punt = punt -> prossimo;
    }

    file.close();

    return 0;
}