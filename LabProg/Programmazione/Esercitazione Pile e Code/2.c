#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

void insert_into_stack(char s[], char p[]); // stack, parola
void check_palindrome(char s[], char p[]); // stack, parola

int main(){
	char pila[MAX], parola[MAX];
	
	do{
		printf("Inserisci la parola da controllare:  ");
		scanf("%s", parola);
	}while(strlen(parola) > MAX);
	
	insert_into_stack(pila, parola);	
	check_palindrome(pila, parola);
	
	return 0;
}

void insert_into_stack(char s[], char p[]){
	s[strlen(p)] = '\0';
	
	for(int i = 0; i < strlen(p); i++)
		s[strlen(p)-1-i] = p[i];
}

void check_palindrome(char s[], char p[]){
	for(int i = 0; i < strlen(p); i++){
		if(p[i] == s[i])
			s[i] = '$';
		else{
			printf("Parola non palindroma.\n");
			return;
		}
	}

	printf("Parola palindroma.\n");
}
