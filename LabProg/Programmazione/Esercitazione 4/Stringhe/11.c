#include <stdio.h>
#define MAX 100

int main(){
	char stringa[MAX];
	int v[MAX];

	printf("Inserisci la stringa: ");
	scanf("%s", stringa);

	for(int i = 0; stringa[i] != '\0'; i++){
		v[i] = 0;
		for(int j = 0; stringa[j] != '\0'; j++){
			if(stringa[i] == stringa[j])
				v[i] += 1;
		}
	}

	for(int i = 0; stringa[i] != '\0'; i++)
		printf("%d\n", v[i]);

	return 0;
}
