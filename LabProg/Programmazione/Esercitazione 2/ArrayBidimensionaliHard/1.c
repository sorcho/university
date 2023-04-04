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

	int a[r][c], array[c];

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	for(int i = 0; i < c; i++){
		printf("Inserisci il %d° valore del vettore: ", i+1);
		scanf("%d", &array[i]);
	}

	int check; // check risulta 1 se i valori sono uguali, altrimenti 0

	for(int i = 0; i < r; i++){
		check = 1;

		for(int j = 0; j < c && check != 0; j++){
			if(array[j] != a[i][j])
				check = 0;
			else if(j == c-1)
				printf("Riga uguale: %d\n", i);
		}
	}

	return 0;
}
