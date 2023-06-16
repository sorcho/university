#include "header.h"

void init_queue(coda *nuovo){
	nuovo -> prossimo = NULL;
}

int push(coda **pp_head, int val){
	coda *temp = *pp_head;
	coda *nuovo = malloc(sizeof(coda));
	init_queue(nuovo);

	nuovo -> numero = val;

	if(*pp_head == NULL){
		*pp_head = nuovo;
	} else {
		while(temp -> prossimo != NULL)
			temp = temp -> prossimo;

		temp -> prossimo = nuovo;
	}

	return 0;
}

int pop(coda **pp_head, int *val){
	coda *temp = *pp_head;

	if(*pp_head == NULL)
		return 1;

	*val = (*pp_head) -> numero;

	*pp_head = temp -> prossimo;

	free(temp);

	return 0;
}

void dealloc(coda *p_head){
	if(p_head == NULL)
		return;

	coda *temp = p_head -> prossimo;

	while(p_head != NULL){
		free(p_head);
		p_head = temp;
		temp = p_head -> prossimo;
	}
}












