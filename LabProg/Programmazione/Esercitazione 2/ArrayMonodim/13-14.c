#include <stdio.h>
#define MAX 20

int main(){
	int n;

	// Caricamento dell'array
	do{
		printf("Inserisci la dimensione dell'array: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n], b[n], j = n-1;

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &a[i]);
		b[j] = a[i];
		j--;
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", b[i]);

	return 0;
}
