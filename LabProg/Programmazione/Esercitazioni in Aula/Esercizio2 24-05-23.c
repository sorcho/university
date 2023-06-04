#include <stdio.h>

void print_array(int a[], int i, int n);

int main(){
	int array[] = {1, 2, 3, 4, 5};
	int index = 4, dim = 5;
	
	print_array(array, index, dim);
	
	return 0;
}

void print_array(int a[], int i, int n){
	if(i == n-1)
		return;
	
	printf("%d", a[i]);
	
	print_array(a, i-1, n);
}
