#include <stdio.h>

int main(){
	int a, b;
	float somma = 0;

	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);

	for(int i = a; i < b; i++){
		if(i % 2 == 0)
			somma += i;
	}

	printf("La somma è: %.2f\n", somma);

	return 0;
}
