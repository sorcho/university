#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], n;

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	int locazione, check = 0;

	for(int i = 0; stringa[i] != '\0' && check != 1; i++){
		if(stringa[i] >= 65 && stringa[i] <= 90){
			locazione = i;
			check++;
		}
	}

	printf("Il primo carattere maiuscolo si trova in posizione: %d\n", locazione);

	return 0;
}
