#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], n;

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	int check = 1;

	for(int i = 0; stringa[i] != '\0' && check != 0; i++){
		if(stringa[i] < 65 || stringa[i] > 90)
			check = 0;
	}

	printf("La stringa è composta da soli caratteri maiuscoli? (0 = no, 1 = si) %d\n", check);

	return 0;
}
