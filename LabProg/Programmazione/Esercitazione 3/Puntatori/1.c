#include <stdio.h>
#define MAX 20

void func(int v[], int dim, int* p1, int* p2);

int main(){
	int n;

	do{
		printf("Inserisci la dimensione: ");
		scanf("%d", &n);
	}while(n > MAX);

	int array[n];

	int pari = 0, dispari = 0;

/*	int* pPari = &pari;
	int* pDispari = &dispari;
*/
	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore: ", i+1);
		scanf("%d", &array[i]);
	}

	func(array, n, &pari, &dispari);

	printf("Pari: %d, Dispari: %d\n", pari, dispari);
	return 0;
}

void func(int v[], int dim, int* p1, int* p2){
	for(int i = 0; i < dim; i++){
		if(v[i] % 2 == 0)
			*p1 += 1;
		else
			*p2 += 1;
	}
}
