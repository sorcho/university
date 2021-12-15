#include <iostream>
using namespace std;
int main() {
    struct elemento{
        int n;
        struct elemento* prossimo;
        
    };
    typedef struct elemento lista;
    
    lista* punt = new lista;
    lista* h = punt;
    
    char risposta[2];
    
    cout<<"inserisci il primo elemento"<<endl;
    cin>> punt->n;
    
    int riemp=0;
    
    do{
        cout<<"vuoi inserire ancora? (si o no)"<<endl;
        cin>>risposta;
        punt->prossimo = new lista;
        punt = punt->prossimo;
        if(risposta[0]=='s'&&risposta[1]=='i'){
            cin>>punt->n;
            riemp++;
        }
        else{
            cout<<"Ok, termino"<<endl;
            punt->prossimo= NULL;
        }
    }while(risposta[0]=='s'&&risposta[1]=='i');
    
    int i=0;
    
    do{
        cout<<"l'elemento numero "<< i+1 <<" e'"<<endl;
        cout<< h->n;
        h = h->prossimo;
        i++;
    }
    while(h->prossimo != NULL);
    
    /* while (h -> prossimo != NULL) {
        cout << "Elemento: " << h -> n << endl;
        h = h->prossimo;
    } */
    
    return 0;
}