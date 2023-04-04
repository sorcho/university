#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
#include "../queue_fn.h"


#include "queue_datatype.h"
// funzioni gestione coda
void init_queue (struct Coda* c)
{
   printf("scelta implementazione coda con array statici\n");
    c->idx_prima_libera   = 0;
    c->idx_prima_occupata = 0;
    c->n_occupati         = 0;
}

int is_empty(struct Coda* c)
{
    if(c->n_occupati == 0)
    {
        return 1;
    }
    return 0;

}

int is_full(struct Coda* c)
{
    if (c->n_occupati >= N_CODA)
    {
        return 1;
    }
    return 0;

}

int size(struct Coda* c)
{
    return c->n_occupati;

}

int enqueue(struct Coda* c, int val)
{
    if(is_full(c) == 1)
        return FULL;
    c->deposito[c->idx_prima_libera] = val;
    c->idx_prima_libera = (c->idx_prima_libera+1) % N_CODA;
    
    c->n_occupati++;
    return OK;
}


int read_from_queue(struct Coda* c, int* p_val)
{
    if(is_empty(c) == 1)
        return EMPTY;

    *p_val =  c->deposito[c->idx_prima_occupata];
    return OK;
}


int dequeue(struct Coda* c, int* p_val)
{
    if(is_empty(c) == 1)
        return EMPTY;
    read_from_queue(c, p_val);
    c->idx_prima_occupata =  (c->idx_prima_occupata+1) % N_CODA;
    c->n_occupati--;
    return OK;
}

void print_queue(struct Coda* c)
{
    printf("n. persone: %d\n", c->n_occupati);
    int idx = c->idx_prima_occupata;
    for(int i =0; i < c->n_occupati; i++)
    {
        printf("%d ", c->deposito[idx]);
        idx = (idx+1) % N_CODA;
    }
    printf("\n");

}

