#include <stdio.h>
#define MAX 20

int func(int m[][MAX], int righe, int colonne);

int main(){
	int r, c, a;

	do{
		printf("Inserisci il numero di righe: ");
		scanf("%d", &r);
		printf("Inserisci il numero di colonne: ");
		scanf("%d", &c);
	}while(r > MAX || c > MAX);

	int m[MAX][MAX];

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il valore nella matrice: ");
			scanf("%d", &m[i][j]);
		}
	}

	a = func(m, r, c);

	printf("Il risultato della funzione è: %d\n", a);

	return 0;
}

int func(int m[][MAX], int righe, int colonne){
	int check = 0; // 0 se non ce ne sono, 1 altrimenti

	for(int i = 0; i < righe && check != 1; i++){
		check = 1;

		for(int j = 0; j < colonne && check != 0; j++){
			if(m[i][0] != m[i][j])
				check = 0;
		}
	}

	return check;
}
