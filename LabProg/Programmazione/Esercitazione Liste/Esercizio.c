#include <stdio.h>
#include <stdlib.h>

typedef struct Dati{
	int n;
	struct Dati* prossimo;
} lista;

void insert(lista** start, int* n);
void stampa(lista** start);
void remove_at(lista** start, int* n);
void insert_at(lista** start, int* n);
void sort_list(lista** start, int* n);

int main(){
	lista* head = NULL;
	int dim = 0;
	
	insert(&head, &dim);
	stampa(&head);
	remove_at(&head, &dim);
	stampa(&head);
	insert_at(&head, &dim);
	stampa(&head);
	
	return 0;
}

void insert(lista** start, int* n){
	lista* nuovo = malloc(sizeof(lista));
	*start = nuovo;
	char risposta;
	
	do{
		printf("Inserisci il valore: ");
		scanf("%d", &nuovo -> n);
		
		printf("Vuoi inserire un nuovo valore? ");
		getchar();
		scanf("%c", &risposta);
		
		*n += 1;
		
		if(risposta == 's'){
			nuovo -> prossimo = malloc(sizeof(lista));
			nuovo = nuovo -> prossimo;
		}
	}while(risposta == 's');
	
	nuovo -> prossimo = NULL;
}

void stampa(lista** start){
	lista* punt = (*start);
	
	while(punt != NULL){
		printf("%d\n", punt -> n);
		
		punt = punt -> prossimo;
	}
}

void remove_at(lista** start, int* n){
	lista* punt = (*start);
	lista* precedente = NULL;
	int idx;
	
	printf("Inserisci la posizione del nodo da eliminare: ");
	scanf("%d", &idx);
	
	if(idx > *n){
		printf("Posizione non valida.\n");
		return;
	}
	
	for(int i = 0; i < idx-1; i++){
		precedente = punt;
		punt = punt -> prossimo;
	}
	
	precedente -> prossimo = punt -> prossimo;
	
	*n -= 1;
	
	free(punt);
}

void insert_at(lista** start, int* n){
	lista* punt = (*start);
	lista* precedente = NULL;
	int idx;
	
	printf("Inserisci la posizione in cui vuoi inserire il nuovo nodo: ");
	scanf("%d", &idx);
	
	if(idx > *n){
		printf("Posizione non valida.\n");
		return;
	}
	
	lista* nuovo = malloc(sizeof(lista));
	
	printf("Inserisci il valore: ");
	scanf("%d", &nuovo -> n);
	
	nuovo -> prossimo = NULL;
	
	for(int i = 0; i < idx-1; i++){
		precedente = punt;
		punt = punt -> prossimo;
	}
	
	precedente -> prossimo = nuovo;
	nuovo -> prossimo = punt;
	punt -> prossimo = NULL;
	*n += 1;
}

void sort_list(lista** start, int* n){
	lista* head = (*start);
	lista* punt = head -> prossimo;
	int app;
	
	while(punt != NULL){
		if(head -> n > punt -> n){
			app = head -> n;
			head -> n = punt -> n;
			punt -> n = app;
		}
		
		head = punt;
		punt = punt -> prossimo;
	}
}
