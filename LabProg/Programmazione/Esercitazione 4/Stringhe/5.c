#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], n;

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	for(int i = 0; stringa[i] != '\0'; i++){
		if(stringa[i] > 90)
			stringa[i] -= 32;
	}

	printf("La stringa modificata è: %s\n", stringa);

	return 0;
}
