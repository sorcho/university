#include <stdio.h>

int main(){
	float media = 0;
	int numero, cont = 0;

	do{
		printf("Inserisci il numero: ");
		scanf("%d", &numero);

		if(numero != 0){
			media += numero;
			cont++;
		}
	}while(numero != 0);

	printf("La media è: %.2f\n", media / cont);

	return 0;
}
