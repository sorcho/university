#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], stringa2[MAX];

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	for(int i = 0; stringa[i] != '\0'; i++)
		stringa2[i] = stringa[i];

	printf("Il contenuto della seconda stringa è: %s\n", stringa2);

	return 0;
}
