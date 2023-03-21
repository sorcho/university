#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "../queue_fn.h"

#include "queue_datatype.h"



// funzioni gestione coda
void init_queue (struct Coda* c)
{
    printf("scelta implementazione coda con liste concatenate\n");
    c->p_head = NULL;
}


int is_empty(struct Coda* c)
{
    if(c->p_head == NULL)
    {
        return 1;
    }
    return 0;
}

int is_full(struct Coda* c)
{

    return 0;
}


int size(struct Coda* c)
{
    int n_items = 0;
    struct Nodo* cursore = c->p_head;
    while(cursore!= NULL)
    {
        n_items++;
    }
    return n_items;
}


int enqueue(struct Coda* c, int val) 
{
    if( is_full(c) == 1 )
        return FULL;
    struct Nodo* nuovo = malloc(sizeof(struct Nodo));
    nuovo->valore   = val;
    nuovo->prossimo = NULL;
    
    if (c->p_head == NULL)
    {
        c->p_head = nuovo;
    }
    else
    {
        struct Nodo* cursore = c->p_head;
        while(cursore->prossimo != NULL)
            cursore = cursore->prossimo;
        cursore->prossimo = nuovo;
    }

    return OK;

}

// restituisce Nodo in testa
int read_from_queue(struct Coda* c, int* p_val)
{
    if(is_empty(c) == 1)
        return EMPTY;
    *p_val    = c->p_head->valore;

    return OK;
}

// elimina Nodo in testa e lo restituisce
int dequeue(struct Coda* c, int* p_val)
{
    
    if(is_empty(c) == 1)
        return EMPTY;
    read_from_queue(c, p_val);
    struct Nodo* to_free = c->p_head;
    c->p_head = c->p_head->prossimo;
    free(to_free);
    return OK;

}


void print_queue(struct Coda* c)
{
    struct Nodo* cursore = c->p_head;
    while(cursore!= NULL)
    {
        printf("{%d}->", cursore->valore);
        cursore = cursore->prossimo;
    }
    printf("n.items: %d\n", size(c));
    printf("\n");
}

