// q sottostringa di s

#include <stdio.h>
#define MAX 20

int main(){
	char s[MAX], q[MAX];
	int check = 0, idx;

	printf("Inserisci S: ");
	scanf("%s", s);
	printf("Inserisci Q: ");
	scanf("%s", q);

	for(int i = 0; s[i] != '\0' && check != 1; i++){
		check = 1;
		idx = i;

		for(int j = 0; q[j] != '\0' && check != 0; j++){
			if(q[j] != s[idx])
				check = 0;
			idx++;
		}
	}

	(check == 1) ? printf("Q è sottostringa di S\n") : printf("Q non è sottostringa di S\n");

	return 0;
}
