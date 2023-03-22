#include <stdio.h>

int main(){
	char c;

	printf("Inserisci il carattere: ");
	scanf("%c", &c);

	if(c >= 65 && c <= 90)
		printf("La lettera è MAIUSCOLA, il rispettivo MINUSCOLO è: %c\n", c + 32);
	else
		printf("La lettera è MINUSCOLA, il rispettivo MAIUSCOLO è: %c\n", c - 32);

	return 0;
}
