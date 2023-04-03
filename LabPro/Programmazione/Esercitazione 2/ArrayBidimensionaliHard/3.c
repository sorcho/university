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

	int m1[r][c], m2[r][c];

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore di M1: ", i + j + 1);
			scanf("%d", &m1[i][j]);
			printf("Inserisci il %d° valore di M2: ", i + j + 1);
			scanf("%d", &m2[i][j]);
		}
	}

	int check, cont = 0;


	for(int k = 0; k < r && cont < 2; k++){
		for(int i = 0; i < r; i++){
			check = 1;

			for(int j = 0; j < c && check != 0; j++){
				if(m2[k][j] != m1[i][j])
					check = 0;
				else if(j == c-1)
					cont++;
			}
		}
	}

	(cont == 1) ? printf("Solo una ripetizione\n") : printf("Troppe o troppe poche ripetizioni\n");

	return 0;
}
