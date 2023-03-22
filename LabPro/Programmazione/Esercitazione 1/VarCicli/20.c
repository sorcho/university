#include <stdio.h>

int main(){
	 int lato;

	printf("Lato: ");
	scanf("%d", &lato);

	for(int i = 0; i < lato; i++){
		for(int j = 0; j < lato; j++){
			if((i + j) == (lato - 1))
				printf("#");
			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}
