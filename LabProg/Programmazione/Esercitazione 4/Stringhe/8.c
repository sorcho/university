#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX], n;

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	int consonanti = 0, vocali = 0;

	for(int i = 0; stringa[i] != '\0'; i++){
		if(stringa[i] == 65 || stringa[i] == 69 || stringa[i] == 73 || stringa[i] == 79 || stringa[i] == 85)
			vocali++;
		else
			consonanti++;
	}

	printf("Sono presenti %d vocali e %d consonanti\n", vocali, consonanti);

	return 0;
}
