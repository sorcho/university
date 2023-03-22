#include <stdio.h>

int main(){
	float n, media = 0;
	int numero;

	printf("Inserisci la dimensione: ");
	scanf("%f", &n);

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° numero: ", i + 1);
		scanf("%d", &numero);

		if(numero % 2 == 0)
			media += numero;
	}

	printf("La media è: %.2f\n", media / n);

	return 0;
}
