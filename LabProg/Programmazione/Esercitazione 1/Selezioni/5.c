#include <stdio.h>

int main(){
	int a, b, c;

	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);
	printf("Inserisci c: ");
	scanf("%d", &c);

	if(a > b){
		if(a > c)
			printf("Il valore massimo è: %d\n", a);
	}else if(b > c)
		printf("Il valore massimo è: %d\n", b);
	else
		printf("Il valore massimo è: %d\n", c);

	return 0;
}
