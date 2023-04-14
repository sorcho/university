#include <stdio.h>
#define MAX 100

int compare(char s1[], char s2[]);

int main(){
	char stringa[MAX], stringa2[MAX];

	printf("Inserisci la prima stringa: ");
	scanf("%s", stringa);
	printf("Inserisci la seconda stringa: ");
	scanf("%s", stringa2);

	printf("Le stringhe sono uguali? (0 = no, 1 = si) %d\n", compare(stringa, stringa2));

	return 0;
}

int compare(char s1[], char s2[]){
	int check = 1;

	for(int i = 0; s1[i] != '\0' || s2[i] != '\0' && check != 0; i++){
		if(s1[i] != s2[i])
			check = 0;
	}

	return check;
}
