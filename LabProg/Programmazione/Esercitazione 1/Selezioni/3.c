#include <stdio.h>

int main(){
	int a, b, x;

	printf("Inserisci a (estremo minore): ");
	scanf("%d", &a);
	printf("Inserisci b (estremo maggiore): ");
	scanf("%d", &b);
	printf("Inserisci x (valore da controllare): ");
	scanf("%d", &x);

	if(x > a && x < b)
		printf("INCLUSO\n");
	else
		printf("NON INCLUSO\n");

	return 0;
}
