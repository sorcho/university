#include "header.h"

void stampa_ricorsiva_contraria(int *v, int dim){
	if (dim <= 0)
		return;

	stampa_ricorsiva_contraria(v+1, dim-1);

	printf("%d\n", *v);
}
