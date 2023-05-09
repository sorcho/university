#include <stdio.h>
#include <stdlib.h>

typedef struct Dati{
	int n;
	struct Dati* prossimo;
} lista;

void insert(lista** start);
void stampa(lista** start);

int main(){
	lista* head = NULL;
	insert(&head);
	stampa(&head);
}

void insert(lista** start){
	lista* nuovo = malloc(sizeof(lista));
	*start = nuovo;
	char risposta;
	
	do{
		printf("Inserisci il valore: ");
		scanf("%d", &nuovo -> n);
		
		printf("Vuoi inserire un nuovo valore? ");
		getchar();
		scanf("%c", &risposta);
		
		if(risposta == 's'){
			nuovo -> prossimo = malloc(sizeof(lista));
			nuovo = nuovo -> prossimo;
		}
	}while(risposta == 's');
}

void stampa(lista** start){
	lista* punt = (*start);
	
	while(punt != NULL){
		printf("%d\n", punt -> n);
		
		punt = punt -> prossimo;
	}
}
