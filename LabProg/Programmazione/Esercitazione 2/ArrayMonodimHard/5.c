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

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n && j != i; j++){
			if(a[i] == a[j]){
				for(int k = i; k < n-1; k++)
					a[k] = a[k+1];
				a[i] = -1;
			}
		}
	}

	for(int i = 0; i < n; i++)
		printf("%d\n", a[i]);


	return 0;
}
