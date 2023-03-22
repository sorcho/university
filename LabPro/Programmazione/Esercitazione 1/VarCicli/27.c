#include <stdio.h>

int main(){
	int n, m;

	printf("Inserisci n: ");
	scanf("%d", &n);
	printf("Inserisci m: ");
	scanf("%d", &m);

	for(int i = 0; i < n; i++){
		printf("A");
	}
	for(int i = 0; i < m; i++){
		printf("B");
	}

	printf("\n");

	return 0;
}
