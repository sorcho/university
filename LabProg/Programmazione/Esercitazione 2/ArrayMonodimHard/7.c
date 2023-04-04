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

	int k, check = 0, i = 0;

	printf("Inserisci il valore da ricercare: ");
	scanf("%d", &k);

	while(i < n && check != 1){
		if(a[i] == k)
			check = 1;
		i++;
	}

	(check == 1) ? printf("TROVATO\n") : printf("NON TROVATO\n");

	return 0;
}
