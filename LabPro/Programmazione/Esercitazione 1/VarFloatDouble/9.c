#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, delta, xn, xp; // xn = x calcolata con il -, xp = x calcolata col +

	printf("Inserisci a: ");
	scanf("%f", &a);
	printf("Inserisci b: ");
	scanf("%f", &b);
	printf("Inserisci c: ");
	scanf("%f", &c);

	delta = pow(b, 2) - (4 * a * c);

	if (delta < 0)
		printf("L'equazione non ha soluzioni.\n");
	else if (delta == 0)
	{
		xp = ((b * -1) + sqrt(delta)) / (2 * a);
		printf("L'unica soluzione dell'equazione è: %.2f\n", xp);
	}
	else
	{
		xp = ((b * -1) + sqrt(delta)) / (2 * a);
		xn = ((b * -1) - sqrt(delta)) / (2 * a);
		printf("Le soluzioni dell'equazione sono: %.2f e %.2f\n", xp, xn);
	}

	return 0;
}
