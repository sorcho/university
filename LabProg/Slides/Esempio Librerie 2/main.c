#include <stdio.h>

#include "queue_fn.h"

#include "queue_datatype.h"

int main()
{
    struct Coda c;
      
    init_queue(&c);

    int scelta = -1;
    while(scelta != 0)
    {
        
        printf("digitare:\n");
        printf("1) inserire in coda\n");
        printf("2) leggere dalla coda\n");
        printf("3) leggere e rimuovere dalla coda\n");
        printf("0) uscire\n");
        scanf("%d", &scelta);
        
        int val, err;
        switch(scelta)
        {
      
            case 1:
                printf("Inserisci valore: ");
                scanf("%d", &val);
                err = enqueue(&c, val);
                if(err == OK)                  
                    printf("valore inserito\n");
                else
                    printf("coda piena!\n");
                break;
                
            case 2:
                err = read_from_queue(&c, &val);
                
                if(err == OK)
                    printf("il valore in testa è %d.\n", val);
                else
                    printf("coda vuota!\n");
                break;
                
            case 3:
                err = dequeue(&c, &val);
                if(err == OK)
                    printf("il valore in testa è %d ; tale valore è stato rimosso.\n", val);
                else
                    printf("coda vuota!\n");
                break;
                
            case 0:
                // svuota
                err = OK;
                while(err==OK)
                {
                    err = dequeue(&c, &val);
                }
                printf("ciao!\n");
                break;
                
            default:
                printf("scelta errata!\n");
        }
    }    
}

