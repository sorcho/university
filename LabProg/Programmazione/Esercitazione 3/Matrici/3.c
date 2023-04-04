#include <stdio.h>
#define MAX 20

int main(){
	int r, c, q;

	do{
		printf("Inserisci la dimensione R: ");
		scanf("%d", &r);
		printf("Inserisci la dimensione C: ");
		scanf("%d", &c);
		printf("Inserisci la dimensione Q: ");
		scanf("%d", &q);
	}while(r > MAX || c > MAX);

	int m[r][q], w[q][c], p[r][c];

	for(int i = 0; i < r; i++){
		for(int j =  0; j < q; j++){
			printf("Inserisci valore nella matrice M: ");
			scanf("%d", &m[i][j]);
		}
	}

	for(int i = 0; i < q; i++){
		for(int j =  0; j < c; j++){
			printf("Inserisci valore nella matrice W: ");
			scanf("%d", &w[i][j]);
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			p[i][j] = 0;

			for(int k =  0; k < q; k++){
				p[i][j] += m[i][k] * w[k][j];
			}
		}
	}

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
