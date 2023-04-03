#include <stdio.h>
#define MAX 20

int main(){
	int r, c;

	do{
		printf("Inserisci il numero di righe: ");
		scanf("%d", &r);
		printf("Inserisci il numero di colonne: ");
		scanf("%d", &c);
	}while(r > MAX || c > MAX);

	int a[r][c], riga[r*c], colonna[r*c], index = 0;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);

			if(a[i][j] < 0){
				riga[index] = i;
				colonna[index] = j;
				index++;
			}
		}
	}

	for(int i = 0; i < index; i++)
		printf("%d|%d\n", riga[i], colonna[i]);

	return 0;
}
