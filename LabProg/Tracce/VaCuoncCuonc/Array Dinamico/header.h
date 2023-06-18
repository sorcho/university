#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#define MAX 10

void init_stack(report *);
void load_vehicles_from_file(report *, char []);
void push(report *, veicolo);
void write_crimes_on_file(report *, char []);
int pop(report *, veicolo *);
int is_crime(veicolo);
