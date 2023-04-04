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

	int k, check = 0, riga, colonna;

	printf("Inserisci il valore da ricercare: ");
	scanf("%d", &k);

	for(int i = 0; i < r && check != 1; i++){
		for(int j = 0; j < c && check != 1; j++){
			if(a[i][j] == k){
				check = 1;
				riga = r;
				colonna = c;
			}
		}
	}

	(check == 1) ? printf("TROVATO IN %d %d\n", riga, colonna) : printf("NON TROVATO\n");

	return 0;
}
