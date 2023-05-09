// dato un array di struct (cognome età), calcola media di tutte le persone con età > 30 e cognome che inizia per 'B'

#include <stdio.h>
#define MAX 20

struct dati{
	int eta;
	char cognome[MAX];
}persona[MAX];

int main(){
	int n;
	
	do{
		printf("Inserire il numero di persone da salvare in memoria: ");
		scanf("%d", &n);
	}while(n > MAX);
	
	float cont = 0, somma = 0;
	
	for(int i = 0; i < n; i++){
		printf("Inserisci l'età della %d° persona: ", i+1);
		scanf("%d", &persona[i].eta);
		printf("Inserisci il cognome della %d° persona: ", i+1);
		scanf("%s", persona[i].cognome);
		
		if(persona[i].eta > 30 && (persona[i].cognome[0] == 'B' || persona[i].cognome[0] == 'b')){
			cont++;
			somma += persona[i].eta;
		}
	}
	
	printf("La media è: %.2f\n", somma/cont);

	return 0;
}
