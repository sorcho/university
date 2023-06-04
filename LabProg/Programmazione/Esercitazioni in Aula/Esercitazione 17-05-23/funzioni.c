#include "funzioni.h"
#include <stdio.h>
#include <stdlib.h>

void push(lista** a){
	lista* nuovo = malloc(sizeof(lista));
		
	printf("Inserisci la matricola: ");
	scanf("%s", &nuovo -> matricola);
	printf("Inserisci il nome: ");
	scanf("%s", &nuovo -> nome);
	printf("Inserisci il cognome: ");
	scanf("%s", &nuovo -> cognome);
	nuovo -> prossimo = NULL;
	
	if(*a == NULL)
		*a = nuovo;
	else{
		nuovo -> prossimo = *a;
		*a = nuovo;
	}
}

void pop(lista** a){
	lista* punt = (*a);
	
	if(*a == NULL){
		printf("Pila vuota.\n");
		return;
	}
	
	printf("Matricola: %s", punt -> matricola);
	printf("Nome: %s", punt -> nome);
	printf("Cognome: %s", punt -> cognome);
	
	*a = (*a) -> prossimo;
	free(punt);
}
