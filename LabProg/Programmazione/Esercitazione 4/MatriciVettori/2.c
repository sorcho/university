#include <stdio.h>
#define MAX 20

void prod_cartesiano(int v1[MAX], int v2[MAX], int dim);

int main(){
	int n, a[MAX], b[MAX];

	do{
		printf("Inserisci la dimensione dei vettori: ");
		scanf("%d", &n);
	}while(n > MAX);

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore di A: ", i+1);
		scanf("%d", &a[i]);
		printf("Inserisci il %d° valore di B: ", i+1);
		scanf("%d", &b[i]);
	}

	prod_cartesiano(a, b, n);

	return 0;
}

void prod_cartesiano(int v1[MAX], int v2[MAX], int dim){
	int m[dim*dim][2], j = 0, k = 0;

	for(int i = 0; i < dim*dim; i++){
		if(i > 0 && i%dim == 0){
			k++;
			j = 0;
		}

		m[i][0] = v1[k];
		m[i][1] = v2[j];

		j++;
	}

	for(int i = 0; i < dim*dim; i++){
		for(int j = 0; j < 2; j++)
			printf("%d\t", m[i][j]);
		printf("\n");
	}
}
