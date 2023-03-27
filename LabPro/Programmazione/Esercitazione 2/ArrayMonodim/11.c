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

	int a[n], posPari[n], posDispari[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore di A: ", i + 1);
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			posPari[i] = a[i];
			posDispari[i] = 0;
		}
		else{
			posDispari[i] = a[i];
			posPari[i] = 0;
		}
	}

	printf("PARI:\n");
	for(int i = 0; i < n; i++)
		printf("%d\n", posPari[i]);

	printf("DISPARI:\n");
	for(int i = 0; i < n; i++)
		printf("%d\n", posDispari[i]);

	return 0;
}


