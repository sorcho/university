#include <stdio.h>

void print_matrix(int m[][3], int i, int r);

int main(){
	int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int index = 0, rows = 3;
	
	print_matrix(matrix, index, rows);
	
	return 0;
}

void print_matrix(int m[][3], int i, int r){
	for(int j = 0; j < 3; j++)
		printf("%d  ", m[i][j]);
		
	if(i == r-1)
		return;
		
	print_matrix(m, i+1, r);
}
