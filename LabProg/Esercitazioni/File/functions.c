#include "header.h"

void push(stack **pp_head, stack *app){
	if(*pp_head != NULL)
		app -> prossimo = *pp_head;

	*pp_head = app;
}

void read_from_file(stack **pp_head){
	FILE* fh = fopen("file.txt", "r");

	stack *app = malloc(sizeof(stack));

	if (fh == NULL){ // Controlliamo che il file sia stato correttamente aperto.
		printf("Errore nella lettura del file.\n");
		return;
	}

	while(fscanf(fh, "%d %s", &app -> numero, app -> parola) == 2){
		push(pp_head, app);
		app = malloc(sizeof(stack));
		app -> prossimo = NULL;
	}


	fclose(fh);
}

void stampa(stack *app){
	printf("n: %d, s: %s\n", app -> numero, app -> parola);
}

void pop(stack **pp_head){
	if (*pp_head == NULL)
		return;

	stack *app = (*pp_head);
	*pp_head = app -> prossimo;

	stampa(app);

	free(app);
}



