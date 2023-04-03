#include <stdio.h>
#define MAX 20

int main(){
	int r, c;

	do{
		printf("Inserisci il numero di righe: ");
		scanf("%d", &r);
		printf("Inserisci il numero di colonne: ");
		scanf("%d", &c);
	}while(r > MAX || c > MAX);

	int a[r][c], somma[r];

	for(int i = 0; i < r; i++){
		somma[i] = 0;

		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);

			somma[i] += a[i][j];
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	for(int i = 0; i < r; i++)
		printf("Somma della %d° riga: %d\n", i+1, somma[i]);

	return 0;
}
