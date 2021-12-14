/**/

#include <iostream>

using namespace std;

int main() {
    struct elemento{
        int riga, colonna;
        float valore;
    } e;

    struct elemento* ptr = &e; //si riferisce alla struct e;

    int v[3] = {1,2,3};

    int* pZero = &v[0];
    int* pUno = &v[3];

    cout << *pZero << endl << pUno << endl << &v;

    v[0] = 2;

    cout << endl << *pZero;

    *pZero = 3;

    cout << endl << *pZero;

    pZero = (int*)3;

    cout << endl << pZero;

    int* p = new int;

    *p = 3;

    cout << endl << *p;

    cout << endl << p;

    delete p;

    cout << endl << *p;

    *p = 45;

    cout << endl << *p;

    cout << endl << p;

    return 0;
}
