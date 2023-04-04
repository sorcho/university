#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
#include "../queue_fn.h"

#include "queue_datatype.h"
#define N_CODA 4


void init_queue (struct Coda* c)
{
    printf("scelta implementazione coda con array dinamici\n");
    c->deposito = NULL;
    c->size     = 0; // numero di elementi presenti
}

void print_queue(struct Coda* c)
{
    printf("(  ");
    for(int i = 0; i < c->size; i++)
        printf("%d, ", c->deposito[i]);
    printf("\b\b)\n");
    
}

int is_empty(struct Coda* c)
{
    if(c->size == 0)
    {
        return 1;
    }
    return 0;
}

int is_full(struct Coda* c)
{
    if (c->size >= N_CODA)
    {
        return 1;
    }
    return 0;
}


int enqueue(struct Coda* c, int elemento) 
{
    
    if(is_full(c) == 1)
        return FULL;
    
    if (c->deposito == NULL)
        c->deposito = malloc(sizeof(int));
    else
    {
        int* tmp    = realloc(c->deposito, (c->size+1)*sizeof(int));
        if (tmp == NULL) // se qualcosa è andato storto
            return ERRMEM;
        // se la riallocazione è andata bene, aggiorna la coda
        c->deposito = tmp;
    }
    
    c->deposito[c->size] = elemento;
    c->size++;
    return OK;

}

int read_from_queue(struct Coda* c, int* p_val)
{
    if(is_empty(c) == 1)
        return EMPTY;

    *p_val =  c->deposito[0];
    return OK;
}

int dequeue(struct Coda* c, int* p_val)
{
    
    if(is_empty(c) == 1)
        return EMPTY;
    read_from_queue(c, p_val);
    
    if (c->size > 1)
    {
        int* tmp = malloc((c->size-1)*sizeof(int));
        if(tmp == NULL)
            return ERRMEM;
        // copio la coda nel nuovo array (a esclusione dal primo elemento)
        for(int i = 0; i < c->size-1; i++)
            tmp[i] = c->deposito[i+1];

        free(c->deposito);
        c->deposito = tmp;
        
    }
    else // se nella coda era presente un solo elemento
    {
        free(c->deposito);
        c->deposito = NULL;
    }
    
    c->size--;
    return OK;

}

void error_handler(int err)
{
    switch(err)
    {
        case FULL:
            printf("coda piena!\n");
            break;
        case EMPTY:
            printf("coda vuota!\n");
            break;
        case ERRMEM:
            printf("errore di memoria!\n");
            break;
        case OK:
            printf("operazione eseguita con successo!\n");
            break;
        default:
            printf("errore sconosciuto!\n");
    }

}
