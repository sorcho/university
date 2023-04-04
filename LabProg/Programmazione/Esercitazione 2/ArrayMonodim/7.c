#include <stdio.h>
#include <math.h>
#define MAX 20

int main(){
	int n;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione dell'array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n], b[n], c[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore dell'array A: ", i + 1);
		scanf("%d", &a[i]);
		printf("Inserisci il %d° valore dell'array B: ", i + 1);
		scanf("%d", &b[i]);
	}

	for(int i = 0; i < n; i++){
		c[i] = a[i] + b[i];
		printf("%d\n", c[i]);
	}

	return 0;
}
