#include <stdio.h>
#define MAX 20

int main(){
	int somma = 0, n;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione dell'array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int array[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &array[i]);

		somma += array[i];
	}

	printf("La somma è: %d\n", somma);

	return 0;
}
