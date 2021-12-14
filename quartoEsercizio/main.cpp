/*Traccia:
 * Far inserire all'utente due valori INT che successivamente devono essere confrontati per controllare se sono
 * uguali oppure no. Stampare un messaggio di conferma in entrambi i casi.
*/
#include <iostream>

using namespace std;

int main() {
    int a, b; //Dichiaro due variabili int

    cout << "Inserire il valore da verificare: "; //Viene chiesto all'utente il numero che servirà da "verificatore"
    cin >> a; //L'utente inserisce il valore nella variabile

    cout << "Inserire il valore che deve essere verificato: "; //Viene chiesto all'utente il numero che verrà verificato
    cin >> b; //L'utente inserisce il valore nella variabile

    if (a == b) //In questo if si controlla se il contenuto della variabile 'a' è uguale a quello della variabile 'b'
        cout << "Il valore " << char(130) << " uguale!" << endl; //Nel caso fossero uguali, viene stampato a schermo un messaggio
    else //Nel caso non si avveri la condizione dell'if
        cout << "Il valore non " << char(130) << " uguale!" << endl; //Nel caso non fossero uguali, viene stampato a schermo un messaggio

    return 0;
}
