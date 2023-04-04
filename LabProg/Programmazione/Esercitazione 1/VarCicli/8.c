#include <stdio.h>

int main(){
	int risultato = 1, base, esponente;

	printf("Inserisci la base: ");
	scanf("%d", &base);
	printf("Inserisci l'esponente: ");
	scanf("%d", &esponente);

	for(int i = 0; i < esponente; i++)
		risultato *= base;

	printf("Risultato: %d\n", risultato);

	return 0;
}
