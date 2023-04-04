#ifndef QUEUE_FN
#define QUEUE_FN

#define FULL -1
#define EMPTY -2
#define ERRMEM -3
#define OK 0



struct Coda;

// funzioni gestione coda
void init_queue (struct Coda* c);

int is_empty(struct Coda* c);

int is_full(struct Coda* c);

int size(struct Coda* c);

int enqueue(struct Coda* c, int val);

// restituisce Nodo in testa
int read_from_queue(struct Coda* c, int* p_val);

// elimina valore in testa e lo restituisce
int dequeue(struct Coda* c, int* p_val);

void print_queue(struct Coda* c);


#endif
