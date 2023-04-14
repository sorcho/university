#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], n;

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	int cont = 0;

	for(int i = 0; stringa[i] != '\0'; i++){
		if(stringa[i] >= 97 && stringa[i] <= 122)
			cont++;
	}

	printf("La stringa è composta da %d caratteri minuscoli\n", cont);

	return 0;
}
