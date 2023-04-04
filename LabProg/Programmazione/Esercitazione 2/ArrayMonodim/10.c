#include <stdio.h>
#include <math.h>
#define MAX 20

int main(){
	int n;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione degli array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n], pari[n], dispari[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore di A: ", i + 1);
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			pari[i] = a[i];
			dispari[i] = 0;
		}
		else{
			dispari[i] = a[i];
			pari[i] = 0;
		}
	}

	printf("PARI:\n");
	for(int i = 0; i < n; i++)
		printf("%d\n", pari[i]);

	printf("DISPARI:\n");
	for(int i = 0; i < n; i++)
		printf("%d\n", dispari[i]);

	return 0;
}


