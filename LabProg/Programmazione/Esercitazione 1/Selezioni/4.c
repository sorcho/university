#include <stdio.h>
#include <math.h>

int main(){
	float num;

	printf("Inserisci il numero: ");
	scanf("%f", &num);

	printf("Il valore assoluto è: %.2f\n", fabs(num));

	return 0;
}
