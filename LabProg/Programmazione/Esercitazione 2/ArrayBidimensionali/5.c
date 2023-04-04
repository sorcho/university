#include <stdio.h>
#define MAX 20

int main(){
	int n;

	do{
		printf("Inserisci la dimensione della matrice: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n][n], diagonale[n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);

			if(i+j == n-1)
				diagonale[i] = a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", diagonale[i]);

	return 0;
}
