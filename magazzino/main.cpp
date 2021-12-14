#include <iostream>

using namespace std;

int main() {
    float totale = 0;
    bool apple = false;

    struct deposito {
        string nome[2], produttore[2];
        float prezzo[2];
        int giacenza[2];
    } magazzino;

    for (int i = 0; i < 2; ++i) {
        cout << "Inserire il nome del " << i+1 << char(167) << " prodotto: ";
        cin >> magazzino.nome[i];
        cout << "Inserire il produttore del " << i+1 << char(167) << " prodotto: ";
        cin >> magazzino.produttore[i];
        cout << "Inserire il prezzo del " << i+1 << char(167) << " prodotto: ";
        cin >> magazzino.prezzo[i];
        cout << "Inserire la giacenza del " << i+1 << char(167) << " prodotto: ";
        cin >> magazzino.giacenza[i];

        totale += magazzino.prezzo[i] * (float)magazzino.giacenza[i];

        if (magazzino.produttore[i] == "apple")
            apple = true;
    }

    for (int i = 0; i < 2; ++i) {
        cout << "Il nome del " << i+1 << char(167) << " prodotto " << char(138) << ": " << magazzino.nome[i] << endl;
        cout << "Il produttore del " << i+1 << char(167) << " prodotto " << char(138) << ": " << magazzino.produttore[i] << endl;
        cout << "Il prezzo del " << i+1 << char(167) << " prodotto " << char(138) << ": " << magazzino.prezzo[i] << "€." << endl;
        cout << "La giacenza del " << i+1 << char(167) << " prodotto " << char(138) << ": " << magazzino.giacenza[i] << endl;
    }

    cout << "Il costo totale del magazzino " << char(138) << ": " << totale << "€." <<endl;

    if (apple)
        cout << "Esiste un prodotto della Apple nel magazzino.\n";
    else
        cout << "Non esiste un prodotto della Apple nel magazzino.\n";

    return 0;
}
