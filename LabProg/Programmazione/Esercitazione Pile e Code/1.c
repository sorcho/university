#include <stdio.h>
#include <stdlib.h>

#define EMPTY -1

typedef struct Dati{
	int numero;
	struct Dati* prossimo;
} mfo;

int insert (mfo** m, int val);
int get(mfo** m, int* p_val);

int main(){
	mfo* m = NULL;
	
	insert(&m, 8);
	insert(&m, 4);
	insert(&m, 2);
	insert(&m, 16);
	
	int val;
	
	get(&m, &val);
	get(&m, &val);
	get(&m, &val);
	get(&m, &val);
}

int insert (mfo** m, int val){
	mfo* nuovo = malloc(sizeof(mfo));
	mfo* punt = (*m);
	
	nuovo -> numero = val;
	nuovo -> prossimo = NULL;
	
	if(*m == NULL)
		*m = nuovo;
	else{
		while(punt -> prossimo != NULL)
			punt = punt -> prossimo;
		
		punt -> prossimo = nuovo;
	}
}

int get(mfo** m, int* p_val){
	int min = (*m) -> numero;
	mfo* punt = (*m) -> prossimo;
	mfo* save = *m;
	mfo* precedente = *m;
	
	if(*m == NULL){
		printf("LISTA VUOTA\n");
		return EMPTY;
	}
	
	while(punt != NULL){
		if(min > punt -> numero){
			min = punt -> numero;
			save = punt;
		}
	
		punt = punt -> prossimo;
	}
	
	while(precedente -> prossimo != save && precedente != save)
		precedente = precedente -> prossimo;
		
	printf("%d\n", min);
	
	if(save == *m)
		*m = save -> prossimo;
	else if(save -> prossimo == NULL)
		precedente -> prossimo = NULL;		
	else if((*m) -> prossimo == NULL)
		*m = NULL;
	else
		precedente -> prossimo = save -> prossimo;
		
	free(save);
}

































