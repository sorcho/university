#ifndef QUEUE_DATATYPE
#define QUEUE_DATATYPE

#define N_CODA 4
struct Coda
{
    int deposito[N_CODA];
    int idx_prima_libera;
    int idx_prima_occupata;
    int n_occupati;

};

#endif
