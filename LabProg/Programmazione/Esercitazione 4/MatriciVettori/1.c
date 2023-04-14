#include <stdio.h>
#define MAX 20

int exists_row_same_elements(int m[MAX][MAX], int dim);
int exists_col_same_elements(int m[MAX][MAX], int dim);
int exists_diag_same_elements(int m[MAX][MAX], int dim);
int exists_something_same_elements(int m[MAX][MAX], int dim);

int main(){
	int n, matrice[MAX][MAX];

	do{
		printf("Inserisci la dimensione della matrice quadrata: ");
		scanf("%d", &n);
	}while(n > MAX);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Inserisci il valore nella matrice: ");
			scanf("%d", &matrice[i][j]);
		}
	}

	printf("Esiste almeno una riga con elementi uguali? %d\n", exists_row_same_elements(matrice, n));
	printf("Esiste almeno una colonna con elementi uguali? %d\n", exists_col_same_elements(matrice, n));
	printf("La diagonale principale/secondaria ha tutti elementi uguali (0 = non uguale, 1 = uguale o la principale o la secondaria, 2 = entrambe uguali? %d\n", exists_diag_same_elements(matrice, n));
	printf("Qualcosa tra righe, colonne, diagonale principale o secondaria ha qualcosa di uguale? %d\n", exists_something_same_elements(matrice, n));

	return 0;
}

int exists_row_same_elements(int m[MAX][MAX], int dim){
	int check = 0; // 0 se non ce ne sono, 1 altrimenti

	for(int i = 0; i < dim && check != 1; i++){
		check = 1;

		for(int j = 0; j < dim && check != 0; j++){
			if(m[i][0] != m[i][j])
				check = 0;
		}
	}

	return check;
}

int exists_col_same_elements(int m[MAX][MAX], int dim){
        int check = 0; // 0 se non ce ne sono, 1 altrimenti

        for(int i = 0; i < dim && check != 1; i++){
                check = 1;

                for(int j = 1; j < dim && check != 0; j++){
                        if(m[0][i] != m[j][i])
                                check = 0;
                }
        }

        return check;
}

int exists_diag_same_elements(int m[MAX][MAX], int dim){
        int check = 1, check2 = 1; // 0 se non ce ne sono, 1 altrimenti

        for(int i = 1; i < dim && check != 0; i++){
		if(m[i][i] != m[i-1][i-1])
			check = 0;
        }

	int j = dim - 2;

        for(int i = 1; i < dim && check2 != 0; i++){
		if(m[i][j] != m[i-1][j+1])
	                check2 = 0;

		j--;
        }

        return (check+check2);
}

int exists_something_same_elements(int m[MAX][MAX], int dim){
	if(exists_row_same_elements(m, dim)+exists_col_same_elements(m, dim)+exists_diag_same_elements(m, dim) > 0)
		return 1;
	else
		return 0;
}
