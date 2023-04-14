#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], n;

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	int cont = 0;

	for(int i = 0; stringa[i] != '\0'; i++)
		cont++;

	printf("Il numero di caratteri è: %d\n", cont);

	return 0;
}
