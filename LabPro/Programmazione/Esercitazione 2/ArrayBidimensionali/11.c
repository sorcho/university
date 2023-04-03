#include <stdio.h>
#define MAX 20

int main(){
	int n;

	do{
		printf("Inserisci la dimensione della matrice: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	int v, check = 1; //v = colonne, check viene usata come var booleana: se 1 sono uguali, altrimenti 0

	for(int i = 0; i < n && check != 0; i++){
		v = n-1;

		for(int j = 0; j < n && check != 0; j++){
			if(i == j && a[i][j] != a[i][v])
				check = 0;
			else
				v--;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	(check == 1) ? printf("UGUALI\n") : printf("NON UGUALI\n");

	return 0;
}
