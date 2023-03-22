#include <stdio.h>

int main(){
	int num;

	printf("Inserisci il numero: ");
	scanf("%d", &num);

	if(num % 2)
		printf("DISPARI\n");
	else
		printf("PARI\n");

	return 0;
}
