#include <stdio.h>
#define MAX 20


int main(){
	int n;

	do{
		printf("Inserisci la dimensione: ");
		scanf("%d", &n);
	}while(n > MAX);

	int a[n], b[n], t, risultato;

	for(int i = 0; i < n; i++){
		printf("Inserisci il %d° valore di A: ", i + 1);
		scanf("%d", &a[i]);
		printf("Inserisci il %d° valore di B: ", i + 1);
		scanf("%d", &b[i]);
	}

	// controllo se sono uguali

	for(int i = 0; i < n; i++){
		if(a[i] == b[i])
			risultato = 1;
		else
			risultato = 0;
	}

	// conotrollo se sono il reverse
	int j = n-1;

	if(risultato != 1){

		for(int i = 0; i < n; i++){
			if(a[i] == b[j])
				risultato = 2;
			else
				risultato = 0;
			j--;
		}
	}

	if(risultato == 1 || risultato == 2)
		t = risultato;
	else
		t = 3;

	printf("Il valore di t è: %d\n", t);

	return 0;
}
