#include <stdio.h>

int main(){
	int a, b;
	float media = 0;

	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);

	for(int i = a; i < b; i++)
		media += i;

	printf("La media è: %.2f\n", media / (b - a));

	return 0;
}
