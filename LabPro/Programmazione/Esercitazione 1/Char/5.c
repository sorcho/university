#include <stdio.h>

int main(){
	float a, b;
	char c;

	printf("Inserisci a: ");
	scanf("%f", &a);
	printf("Inserisci b: ");
	scanf("%f", &b);

	getchar();

	printf("Inserisci c: ");
	scanf("%c", &c);

	if(c == '+')
		printf("La somma è: %.2f\n", a + b);
	else if(c == '-')
		printf("La differenza è: %.2f\n", a - b);
	else
		printf("Non posso farlo\n");

	return 0;
}
