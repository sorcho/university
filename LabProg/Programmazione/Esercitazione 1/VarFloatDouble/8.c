#include <stdio.h>

int main(){
	float m, q, y, x;

	printf("Inserisci m: ");
	scanf("%f", &m);
	printf("Inserisci q: ");
	scanf("%f", &q);
	printf("Inserisci y: ");
	scanf("%f", &y);

	x = (y - q) / m;

	printf("Il valore di x è: %.2f\n", x);

	return 0;
}
