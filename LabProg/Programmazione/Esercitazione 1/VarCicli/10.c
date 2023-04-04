#include <stdio.h>

int main(){
	int numero, cont = 0;

	for(int i = 0; i < 10; i++){
		printf("Inserisci il %d° numero: ", i+1);
		scanf("%d", &numero);

		if(numero % 2 == 0)
			cont++;
	}

	printf("Occorrenze di numeri pari: %d\n", cont);

	return 0;
}
