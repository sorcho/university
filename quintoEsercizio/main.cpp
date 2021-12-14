/*Dato un numero intero in input scrivere se è maggiore di 10*/

#include <iostream>

using namespace std;

int main() {
    int a; //Creo una variabile int

    cout << "Inserire il numero da confrontare: "; //Chiedo all'utente di inserire un numero
    cin >> a; //L'utente inserisce un numero

    if (a > 10){ //Si controlla se il valore della variabile 'a' è maggiore di 10
        cout << "Il numero " << char(130) << " maggiore di 10!" << endl; //Nel caso la condizione si avverasse viene stampato a schermo un messaggio
    } else { //Nel caso la condizione dell'if non fosse vera
        cout << "Il numero non " << char(130) << " maggiore di 10!" << endl; //Nel caso la condizione non si avverasse viene stampato a schermo un messaggio
    }

    return 0;
}
