#include <stdio.h>

int main(){
	int base, altezza;

	printf("Inserisci la base: ");
	scanf("%d", &base);
	printf("Inserisci la altezza: ");
	scanf("%d", &altezza);

	for(int i = 0; i < altezza; i++){
		for(int j = 0; j < base; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
