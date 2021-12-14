/*Dato un numero intero in input scrivere se è: positivo, negativo o nullo, pari o dispari o se è maggiore di -3*/

#include <iostream>

using namespace std;

int main() {
    int x; //Dichiaro una variabile int

    cout << "Inserire un valore: "; //All'utente viene chiesto di inserire un valore
    cin >> x; //L'utente inserisce un valore

    if (x < 0) { //In questo if si controlla se il valore inserito dall'utente è minore di 0
        if (x > -3) {
            if (x % 2 == 0)  //Nel caso fosse soddisfatta la condizione si controlla se il numero è positivo
                cout << "Il tuo numero " << char(130) << " negativo, pari e maggiore di -3!" << endl; //Se si viene stampato un messaggio
            else  //In questo else si entra solo se la condizione dell'if risulti negativa
                cout << "Il tuo numero " << char(130) << " negativo, dispari e maggiore di -3!" << endl; //Se no viene stampato un messaggio
        } else {
            if (x % 2 == 0)  //Nel caso fosse soddisfatta la condizione si controlla se il numero è positivo
                cout << "Il tuo numero " << char(130) << " negativo, pari e minore di -3!" << endl; //Se si viene stampato un messaggio
            else //In questo else si entra solo se la condizione dell'if risulti negativa
                cout << "Il tuo numero " << char(130) << " negativo, dispari e minore di -3!" << endl; //Se no viene stampato un messaggio
        }
    } else if (x > 0) { //In questo elseif si controlla se il valore inserito dall'utente è maggiore di 0
        if (x % 2 == 0) //Nel caso fosse soddisfatta la condizione si controlla se il numero è positivo
            cout << "Il tuo numero " << char(130) << " positivo e pari!" << endl; //Se si viene stampato un messaggio
        else //In questo else si entra solo se la condizione dell'if risulti negativa
            cout << "Il tuo numero " << char(130) << " positivo e dispari!" << endl; //Se no viene stampato un messaggio
    } else //In questo else si entra solo se nessuna delle altre condizioni dell'if risulti positiva
        cout << "Il tuo numero " << char(130) << " nullo!" << endl; //Viene stampato un messaggio a schermo

    return 0;
}