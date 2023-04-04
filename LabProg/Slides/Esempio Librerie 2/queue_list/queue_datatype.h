#ifndef QUEUE_DATATYPE
#define QUEUE_DATATYPE

struct Nodo {
    int valore;
    struct Nodo* prossimo;

};

struct Coda
{
    struct Nodo* p_head;
};


#endif
