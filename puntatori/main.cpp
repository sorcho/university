/*creare due variabili per poi scambiarne il valore utilizzando i puntatori*/

#include <iostream>

using namespace std;

int main() {
    int varUno, varDue;

    cout << "Inserire il primo valore: ";
    cin >> varUno;
    cout << "Inserire il secondo valore: ";
    cin >> varDue;

    int* pointerVarUno = &varUno; //creo la variabile puntatore che collego alla variabile varUno
    int* pointerVarDue = &varDue; //creo la variabile puntatore che collego alla variabile varDue

    cout << "Il primo valore " << char(138) << ": " << *pointerVarUno << "\nIl secondo valore " << char(138) << ": " << *pointerVarDue << endl;

    swap(*pointerVarUno, *pointerVarDue); //qui scambio di valori tramite l'utilizzo dei puntatori

    system("cls");

    cout << "Il primo valore scambiato " << char(138) << ": " << *pointerVarUno << "\nIl secondo valore scambiato " << char(138) << ": " << *pointerVarDue << endl;

    return 0;
}

/*Logica dei puntatori:
 * per prima cosa si definisce il tipo del puntatore, ad esempio int, e per far capire al compilatore che parliamo di un puntatore si usa *
 * quindi int* puntatore; definisce un puntatore
 * RICORDA:
 * una volta definito il puntatore lo si deve collegare ad una variabile tramite l'assegnazione di quest'ultima con la &
 * tramite puntatori, per riferirsi al valore della variabile si usa *[nomepuntatore], per riferirsi alla posizione in memoria si usa
 * o il nome del puntatore o la notazione &[nomepuntatore]*/