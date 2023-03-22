#include <stdio.h>

int main(){
	int n;

	printf("Inserisci n: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("A");
	}
	for(int i = 0; i < n; i++){
		printf("B");
	}

	printf("\n");

	return 0;
}
