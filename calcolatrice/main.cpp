/*Creare una calcolatrice usando lo switch*/

#include <iostream>

using namespace std;

int main() {
    int scelta, op1, op2;

    cout << "Menu' della calcolatrice:\n 1 - Addizione\n 2 - Sottrazione\n 3 - Moltiplicazione\n 4 - Divisione\nEffettuare la scelta: ";
    cin >> scelta;

    if (scelta == 1){
        cout << "Inserire il primo operando: ";
        cin >> op1;

        cout << "Inserire il secondo operando: ";
        cin >> op2;

        cout << "Il risultato dell'operazione " << char(130) << " : " << op1+op2 << endl;
    } else if (scelta == 2){
        cout << "Inserire il primo operando: ";
        cin >> op1;

        cout << "Inserire il secondo operando: ";
        cin >> op2;

        cout << "Il risultato dell'operazione " << char(130) << " : " << op1-op2 << endl;
    } else if (scelta == 3) {
        cout << "Inserire il primo operando: ";
        cin >> op1;

        cout << "Inserire il secondo operando: ";
        cin >> op2;

        cout << "Il risultato dell'operazione " << char(130) << " : " << op1*op2 << endl;
    } else {
        cout << "Inserire il primo operando: ";
        cin >> op1;

        cout << "Inserire il secondo operando: ";
        cin >> op2;

        cout << "Il risultato dell'operazione " << char(130) << " : " << op1/op2 << endl;
    }

    return 0;
}
