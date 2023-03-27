#include <stdio.h>
#define MAX 20


int main(){
	int n;

	do{
		printf("Inserisci la dimensione: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n], b[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &a[i]);

		if(a[i] > 100 || a[i] % 3 == 0)
			b[i] = 1;
		else
			b[i] = 2;

	}

	for(int i = 0; i < n; i++)
		printf("%d\n", b[i]);

	return 0;
}
