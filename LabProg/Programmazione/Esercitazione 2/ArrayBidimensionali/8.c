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

	int a[r][c];

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	int pos1, pos2;

	do{
		printf("Inserisci la posizione 1: ");
		scanf("%d", &pos1);
		printf("Inserisci la posizione 2: ");
		scanf("%d", &pos2);
	}while(pos1 >= r || pos2 >= r);

	int app[r];

	for(int j = 0; j < c; j++){
		app[j] = a[pos1][j];
		a[pos1][j] = a[pos2][j];
		a[pos2][j] = app[j];
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	return 0;
}
