/*minimo, media e massimo tramite lista*/

#include <iostream>

using namespace std;

int main() {
    char risposta;
    double media = 0, minimo = 0, massimo = 0, contatore = 0;

    struct lista {
        double numero;
        lista *successivo;
    };

    typedef struct lista Lista;

    Lista *l = new Lista;

    {
        Lista *p = l;
        do {
            cout << "Inserisci un valore: ";
            cin >> p->numero;
            media += p->numero;

            if (contatore == 0) {
                minimo = p->numero;
                massimo = p->numero;
            }

            if (p->numero > massimo)
                massimo = p->numero;

            if (p->numero < minimo)
                minimo = p->numero;

            contatore++;

            p->successivo = new Lista;
            p = p->successivo;

            do {
                cout << "Vuoi inserire un nuovo valore?\nInserisci la risposta: ";
                cin >> risposta;

                if (risposta != 's' && risposta != 'n')
                    cout << "Errore, risposta non valida. Reinserire.\n";
            } while (risposta != 's' && risposta != 'n');
        } while (risposta == 's');

        p->successivo = NULL;
    }

    Lista *p = l;
    while (p->successivo != NULL) {
        cout << "Il valore equivale a: " << p->numero << endl;
        p = p->successivo;
    }

    cout << "La media equivale a: " << media/contatore << "\nIl massimo equivale a: " << massimo << "\nIl minimo equivale a: " << minimo << endl;

    return 0;
}
