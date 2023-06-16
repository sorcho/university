#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

void init_queue(coda *);
int push(coda **, int);
int pop(coda **, int*);
void dealloc(coda *);
