#include <iostream>

using namespace std;

int main() {
    int n, nPositivi = 0;

    do {
        cout << "Inserire il numero di tamponi da voler registrare: ";
        cin >> n;

        if (n < 1)
            cout << "Errore, inserimento non valido. Riprovare.\n";
    } while (n < 1);

    struct pazienti {
        string nome, cognome, esito;

        struct calendario {
            int giorno, mese, anno;
        } dataDiNascita;
    } tampone[n];

    for (int i = 0; i < n; ++i) {
        cout << "Inserisci il nome del paziente: ";
        cin >> tampone[i].nome;
        cout << "Inserisci il cognome del paziente: ";
        cin >> tampone[i].cognome;
        cout << "Inserisci la data di nascita del paziente (gg/mm/aaaa): \n";
        cin >> tampone[i].dataDiNascita.giorno;
        cin >> tampone[i].dataDiNascita.mese;
        cin >> tampone[i].dataDiNascita.anno;
        do {
            cout << "Esito del tampone (positivo/negativo): ";
            cin >> tampone[i].esito;

            if (tampone[i].esito != "positivo" && tampone[i].esito != "negativo")
                cout << "Errore, esito non valido. Reinserire.\n";
        } while (tampone[i].esito != "positivo" && tampone[i].esito != "negativo");

        if (tampone[i].esito == "positivo")
            nPositivi++;
    }

    for (int i = 0; i < n; ++i) {
        cout << "Nome del paziente " << i + 1 << ": " << tampone[i].nome << endl
             << "Cognome del paziente " << i + 1 << ": " << tampone[i].cognome << endl
             << "Data di nascita del paziente " << i + 1 << ": " << tampone[i].dataDiNascita.giorno << "/" << tampone[i].dataDiNascita.mese << "/" << tampone[i].dataDiNascita.anno << endl
             << "Esito del tampone del paziente " << i + 1 << ": " << tampone[i].esito << endl;
    }

    cout << "Il numero dei positivi equivale a: " << nPositivi;

    return 0;
}
