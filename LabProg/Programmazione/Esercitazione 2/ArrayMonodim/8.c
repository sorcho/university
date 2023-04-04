#include <stdio.h>
#define MAX 20

int main(){
	int n, ordinato = 0;

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

	for(int i = 0; i < n-1 && ordinato == 0; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j])
				ordinato = 1;
		}
	}

	(ordinato == 0) ? printf("ORDINATO\n") : printf("NO\n");

	return 0;
}
