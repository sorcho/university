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

	int a[r][c], b[r][c], ris[r][c];

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore di A: ", i + j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore di B: ", i + j + 1);
			scanf("%d", &b[i][j]);

			ris[i][j] = a[i][j] + b[i][j];
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++)
			printf("%d\t", ris[i][j]);
		printf("\n");
	}

	return 0;
}
