#include <stdio.h>

int main(){
	int numero, risultato = 1;

	printf("Inserisci il numero: ");
	scanf("%d", &numero);

	for(int i = 0; numero > 0; i++){
		risultato *= numero;
		numero--;
	}

	printf("Il risultato è: %d\n", risultato);

	return 0;
}
