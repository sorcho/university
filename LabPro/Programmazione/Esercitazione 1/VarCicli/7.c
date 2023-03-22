#include <stdio.h>

int main(){
	int n;

	printf("Inserisci la dimensione n: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		printf("#");

	return 0;
}
