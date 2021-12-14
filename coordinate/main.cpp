using namespace std;

#include <iostream>

int main() {
    struct punti{
        int a[2], b[2], xMedio, yMedio;
    } coordinate;

    cout << "Inserisci le coordinate del punto 'a': \n";

    for (int i = 0; i < 2; ++i)
        cin >> coordinate.a[i];

    cout << "Inserisci le coordinate del punto 'b': \n";

    for (int i = 0; i < 2; ++i)
        cin >> coordinate.b[i];

    coordinate.xMedio = (coordinate.a[0] + coordinate.b[0]) / 2;
    coordinate.yMedio = (coordinate.a[1] + coordinate.b[1]) / 2;

    cout << "\nLe coordinate medie sono (" << coordinate.xMedio << ", " << coordinate.yMedio << ").\n";

    return 0;
}