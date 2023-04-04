#include <stdio.h>
#include <math.h>
#define MAX 20

int main(){
	int n, j = 0;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione degli array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n], b[n], c[n*2];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore di A: ", i + 1);
		scanf("%d", &a[i]);
		printf("Inserisci il %d° valore di B: ", i + 1);
		scanf("%d", &b[i]);
	}

	for(int i = 0; i < n*2; i++){
		if(i < n)
			c[i] = a[i];
		else{
			c[i] = b[j];
			j++;
		}

		printf("%d\n", c[i]);
	}

	return 0;
}


