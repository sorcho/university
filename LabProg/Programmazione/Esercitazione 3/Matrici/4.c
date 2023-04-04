#include <stdio.h>
#define MAX 20

int main(){
	int n;

	do{
		printf("Inserisci la dimensione della matrice: ");
		scanf("%d", &n);
	}while(n > MAX);

	int m[n][n], p[n], s[n];

	for(int i = 0; i < n; i++){
		for(int j =  0; j < n; j++){
			printf("Inserisci valore nella matrice M: ");
			scanf("%d", &m[i][j]);

			if(i == j)
				p[i] = m[i][j];
			if(i+j == n-1)
				s[i] = m[i][j];
		}
	}

	printf("Stampa della matrice:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}


	printf("Stampa diagonale principale: \n");
	for(int i = 0; i < n; i++)
		printf("%d\n", p[i]);

	printf("Stampa diagonale secondaria: \n");
	for(int i = 0; i < n; i++)
		printf("%d\n", s[i]);

	return 0;
}
