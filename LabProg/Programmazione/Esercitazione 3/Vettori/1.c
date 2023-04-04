#include <stdio.h>
#define MAX 20

int main(){
	int n;

	do{
		printf("Inserisci la dimensione: ");
		scanf("%d", &n);
	}while(n > MAX);

	int s[n], v[n], w[n];

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore del vettore V: ", i+1);
		scanf("%d", &v[i]);
	}

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore del vettore W: ", i+1);
		scanf("%d", &w[i]);

		s[i] = v[i] + w[i];
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", s[i]);

	return 0;
}
