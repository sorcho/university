#include <stdio.h>
#include <string.h>
#define MAX 20

void func(char v[], char* p1, char* p2);

int main(){
	char stringa[MAX], vocale, consonante;

	do{
		printf("Inserisci la stringa: ");
		scanf("%s", stringa);
	}while(strlen(stringa) >= MAX);

	func(stringa, &vocale, &consonante);

	printf("Prima Consonante: %c\nUltima Vocale: %c\n", consonante, vocale);

	return 0;
}

void func(char v[], char* p1, char* p2){
	int check = 0;

	for(int i = 0; i < strlen(v); i++){
		if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
			*p1 = v[i];
		if((v[i] != 'a' && v[i] != 'e' && v[i] != 'i' && v[i] != 'o' && v[i] != 'u') && check == 0){
			*p2 = v[i];
			check++;
		}
	}
}
