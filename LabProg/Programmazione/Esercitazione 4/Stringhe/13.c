#include <stdio.h>
#define MAX 20

int main(){
	char m[MAX][MAX], v[MAX];
	int n;

	do{
		printf("Numero di stringhe da inserire: ");
		scanf("%d", &n);
	}while(n > MAX);

	for(int i = 0; i < n; i++){
		printf("Inserisci la %d° stringa: ", i+1);
		scanf("%s", m[i]);

		v[i] = m[i][0];
	}

	for(int i = 0; i < n; i++)
		printf("%c\n", v[i]);

	return 0;
}
