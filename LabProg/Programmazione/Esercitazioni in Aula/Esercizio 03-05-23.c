#include <stdio.h>
#include <stdlib.h>

struct dati{
	int numero;
	struct dati* prossimo;
};

void inserimento(struct dati* testa);
void stampa(struct dati* testa);

int main(){
	struct dati* head = malloc(sizeof(struct dati));
	
	inserimento(head);
	stampa(head);
	
	return 0;
}

void inserimento(struct dati* testa){
	struct dati* temp = testa;
	char risposta;
	
	do{
		printf("Inserisci il valore: ");
		scanf("%d", &temp -> numero);
		
		getchar();
		
		printf("Vuoi inserire un altro elemento?\nRisposta: ");
		scanf("%c", &risposta);
		
		if(risposta == 's'){
			temp -> prossimo = malloc(sizeof(struct dati));
			temp = temp -> prossimo;
		}
	}while(risposta == 's');
	
	temp -> prossimo = NULL;
}

void stampa(struct dati* testa){
	struct dati* temp = testa;
	
	while(temp != NULL){
		printf("Numero: %d\n", temp -> numero);
		temp = temp -> prossimo;
	}
}
