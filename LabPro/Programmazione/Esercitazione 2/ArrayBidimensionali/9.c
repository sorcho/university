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

	int a[r][c], v[(c*2) + ((r-2)*2)];

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("Inserisci il %d° valore: ", i + j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	int k = 0;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(i == 0 || i == r-1){
				v[k] = a[i][j];
				k++;
			}else if(j == 0 || j == c-1){
				v[k] = a[i][j];
				k++;
			}
		}
	}

	for(int i = 0; i < k; i++)
		printf("%d\n", v[i]);

	return 0;
}
