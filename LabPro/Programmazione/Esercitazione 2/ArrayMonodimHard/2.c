#include <stdio.h>
#define MAX 20

int main()
{
	int n, m;

	// Caricamento dell'array
	do
	{
		printf("Inserisci la dimensione dell'array A: ");
		scanf("%d", &n);
	} while (n > MAX);

	do
	{
		printf("Inserisci la dimensione dell'array B: ");
		scanf("%d", &m);
	} while (m > n);

	int a[n], b[m];

	for (int i = 0; i < n; i++)
	{
		printf("Inserisci il %d° valore di A: ", i + 1);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < m; i++)
	{
		printf("Inserisci il %d° valore di B: ", i + 1);
		scanf("%d", &b[i]);
	}

	int j = 0, check = 1;

	for(int i = 0; i < n && j < m && check != 0; i++){
		if(a[i] == b[j])
			check = 1;
		else
			check = 0;

		j++;
	}


	(check == 1) ? printf("SI\n") : printf("NO\n");

//	for(int i = 0; i < n; i++)
//		printf("%d\n", a[i]);


	return 0;
}

