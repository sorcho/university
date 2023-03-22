#include <stdio.h>

int main(){
	for(int i = 0; i < 50; i++){
		if(i % 5 == 0)
			printf("\n");
		printf("%d ", i + 1);
	}

	return 0;
}
