#include <stdio.h>
#include "header.h"

int main(){
	coda *Coda = NULL;
	int scelta = -1, input, output;

	while(scelta != 0){
		printf("Menu:\n0 - Uscita\n1 - Inserimento\n2 - Eliminazione\nScelta: ");
		scanf("%d", &scelta);

		switch(scelta){
			case 0:
				printf("Grazie per aver usato il programma!\n");
				dealloc(Coda);
				break;
			case 1:
				printf("Inserisci il valore: ");
				scanf("%d", &input);
				push(&Coda, input);
				break;
			case 2:
				if(pop(&Coda, &output) == 1)
					printf("La lista è vuota.\n");
				else
					printf("Valore eliminato: %d\n", output);
				break;
		}
	}

	return 0;
}
