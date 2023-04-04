#include <stdio.h>
#define MAX 20

int main(){
	int n, x, y;

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

	printf("Inserisci la prima posizione: ");
	scanf("%d", &x);
	printf("Inserisci la seconda posizione: ");
	scanf("%d", &y);

	int temp;

	temp = a[x-1];
	a[x-1] = a[y-1];
	a[y-1] = temp;

	for(int i = 0; i < n; i++)
		printf("%d\n", a[i]);

	return 0;
}
