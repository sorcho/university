#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, y1, y2, distanza;

	printf("Inserisci x1: ");
	scanf("%f", &x1);
	printf("Inserisci y1: ");
	scanf("%f", &y1);
	printf("Inserisci x2: ");
	scanf("%f", &x2);
	printf("Inserisci y2: ");
	scanf("%f", &y2);

	distanza = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	printf("Distanza: %f\n", distanza);

	return 0;
}