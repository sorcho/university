#include <stdio.h>

int main(){
	int lato;

	printf("Inserisci il lato: ");
	scanf("%d", &lato);

	for(int i = 0; i < lato; i++){
		for(int j = 0; j < lato; j++){
			if(j == i)
				printf("#");
			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}
