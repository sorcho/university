#include <stdio.h>

int main(){
	float n, numero, media = 0;

	printf("Inserisci la dimensione: ");
	scanf("%f", &n);

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° numero: ", i + 1);
		scanf("%f", &numero);

		media += numero;
	}

	printf("La media è: %.2f\n", media / n);

	return 0;
}
