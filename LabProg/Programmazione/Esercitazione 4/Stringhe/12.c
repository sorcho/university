#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
	char stringa[MAX];

	printf("Cos'è un file .h?\nInserisci la risposta: ");
	scanf("%s", stringa);

	(strcmp(stringa, "libreria") == 0) ? printf("Bocciato\n") : printf("Ok. Andiamo Avanti.\n");

	return 0;
}
