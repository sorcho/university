#include <stdio.h>
#include <string.h>
#define MAX 30

int main(){
	char s[MAX];
	int check = 1, j;

	printf("Inserisci la parola: ");
	scanf("%s", s);

	j = strlen(s)-1;

	for(int i = 0; i < strlen(s) && check != 0; i++){
		if(s[i] != s[j])
			check = 0;

		j--;
	}

	(check == 1) ? printf("La parola è palindroma\n") : printf("La parola non è palindroma\n");

	return 0;
}

