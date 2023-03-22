#include <stdio.h>

int main(){
	float n1, n2, n3, n4, media;

	printf("Inserisci il primo numero: ");
	scanf("%f", &n1);
	printf("Inserisci il secondo numero: ");
	scanf("%f", &n2);
	printf("Inserisci il terzo numero: ");
	scanf("%f", &n3);
	printf("Inserisci il quarto numero: ");
	scanf("%f", &n4);

	media = (n1 + n2 + n3 + n4) / 4;

	printf("La media è: %f\n", media);

	return 0;
}
