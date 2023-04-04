#include <stdio.h>
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

	int a[n], b[n];

	for (int i = 0; i < n; i++)
	{
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &a[i]);
		b[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				b[i]++;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", b[i]);

	return 0;
}
