#include <stdio.h>
#include <math.h>
#define MAX 20

int main()
{
	int n;

	// Caricamento dell'array
	do
	{
		printf("Inserisci la dimensione dell'array: ");
		scanf("%d", &n);
	} while (n > MAX);

	int x[n], y[n], d[n][n-1];

	for (int i = 0; i < n; i++)
	{
		printf("Inserisci la %d° x: ", i + 1);
		scanf("%d", &x[i]);
		printf("Inserisci la %d° y: ", i + 1);
		scanf("%d", &y[i]);
	}




	return 0;
}
