#include <stdio.h>
#define MAX 20

int main(){
	int k, n;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione dell'array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("Inserisci il valore da ricercare: ");
	scanf("%d", &k);

	for(int i = 0; i < n; i++){
		if(k == a[i])
			printf("TROVATO\n");
	}

	return 0;
}
