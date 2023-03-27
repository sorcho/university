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

		if(a[i] > 10 && a[i] < 20)
			b[i] = a[i];
		else
			b[i] = 0;

	}

	for(int i = 0; i < n; i++)
		printf("%d\n", b[i]);

	return 0;
}
