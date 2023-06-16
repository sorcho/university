#include "header.h"

void stampa_ricorsiva(int *v, int dim){
	if (dim <= 0)
		return;

	printf("%d\n", *v);

	stampa_ricorsiva(v+1, dim-1);
}
