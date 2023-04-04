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

	int a[n];

	for (int i = 0; i < n; i++)
	{
		printf("Inserisci il %d° valore: ", i + 1);
		scanf("%d", &a[i]);
	}

	int idx;

	do{
		printf("Inserisci la posizione da eliminare: ");
		scanf("%d", &idx);
	}while(idx >= n);

	for(int j = idx; j < n-1; j++)
		a[j] = a[j+1];

	for(int i = 0; i < n-1; i++)
		printf("%d\n", a[i]);


	return 0;
}
