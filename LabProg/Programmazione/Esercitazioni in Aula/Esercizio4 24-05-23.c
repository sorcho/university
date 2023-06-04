#include <stdio.h>
#include <stdlib.h>

typedef struct dati{
	int numero;
	struct dati* prossimo;
} stack;

void push(stack** p);
void print(stack** p);

int main(){
	stack* lista = NULL;
	int scelta;
	
	while(1){
		printf("1 - push\n2 - print\naltro - esci\nScelta: ");
		scanf("%d", &scelta);
		
		switch(scelta){
			case 1:
				push(&lista);
				break;
			case 2:
				print(&lista);
				break;
			default:
				return 0;
		}
	}
}

void push(stack** p){
	int val;
	stack* nuovo = malloc(sizeof(stack));
	
	printf("Inserisci il numero: ");
	scanf("%d", &val);
	
	nuovo -> numero = val;
	nuovo -> prossimo = NULL;
	
	if(*p == NULL){
		*p = nuovo;
	} else {
		nuovo -> prossimo = *p;
		*p = nuovo;
	}
}

void print(stack** p){
	stack* punt = (*p);

	if(*p == NULL)
		return;
		
	printf("valore: %d\n", punt -> numero);
	
	print(&(punt -> prossimo));
}
