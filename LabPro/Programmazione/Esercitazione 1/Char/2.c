#include <stdio.h>

int main(){
	char c;

	printf("Insersci lettera: ");
	scanf("%c", &c);

	if(c < 97)
		c += 32;

	(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? printf("VOCALE\n") : printf("CONSONANTE\n");

	return 0;
}
