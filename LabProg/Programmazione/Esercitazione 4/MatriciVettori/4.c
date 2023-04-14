#include <stdio.h>
#define MAX 20

void trasposta(int m[MAX][MAX], int dim);

int main(){
	int n, matrice[MAX][MAX];

	do{
		printf("Inserisci la dimensione della matrice quadrata: ");
		scanf("%d", &n);
	}while(n > MAX);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Inserisci il valore: ");
			scanf("%d", &matrice[i][j]);
		}
	}

	trasposta(matrice, n);

	return 0;
}

void trasposta(int m[MAX][MAX], int dim){
	int m2[MAX][MAX];

	for(int i = 0; i < dim; i++){
                for(int j = 0; j < dim; j++)
                        m2[j][i] = m[i][j];
        }

	printf("\nStampa Matrice Originale: \n");
	for(int i = 0; i < dim; i++){
                for(int j = 0; j < dim; j++)
                        printf("%d\t", m[i][j]);
		printf("\n");
        }

	printf("\nStampa Matrice Trasposta: \n");
	for(int i = 0; i < dim; i++){
                for(int j = 0; j < dim; j++)
                        printf("%d\t", m2[i][j]);
		printf("\n");
        }
}
