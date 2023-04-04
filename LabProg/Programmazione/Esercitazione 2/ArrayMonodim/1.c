#include <stdio.h>
#define MAX 20

int main(){
	int min, pos, n;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione dell'array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int array[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &array[i]);

		if(i == 0 || min > array[i]){
			min = array[i];
			pos = i;
		}
	}

	printf("Il minimo è: %d e la posizione in cui si trova è: %d\n", min, pos);

	return 0;
}
