#include <stdio.h>

int main(){
	float media = 0;

	for(int i = 0; i < 10; i++)
		media += (i + 1);

	printf("La media è: %.2f\n", media / 10);

	return 0;
}
