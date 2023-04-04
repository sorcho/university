#include <stdio.h>
#define MAX 20

int main(){
	int r, c;

	do{
		printf("Inserisci numero di righe: ");
		scanf("%d", &r);
		printf("Inserisci numero di colonne: ");
		scanf("%d", &c);
	}while(r > MAX || c > MAX);

	int a[r][c], x[c], q[r];

	for(int i = 0; i < r; i++){
		for(int j =  0; j < c; j++){
			printf("Inserisci valore nella matrice: ");
			scanf("%d", &a[i][j]);
		}
	}

	for(int i = 0; i < c; i++){
		printf("Inserisci valore nel vettore: ");
		scanf("%d", &x[i]);
	}

	for(int i = 0; i < r; i++){
		q[i] = 0;
		for(int j = 0; j < c; j++)
			q[i] += a[i][j] * x[j];
	}

	for(int i = 0; i < r; i++)
		printf("%d\n", q[i]);

	return 0;
}
