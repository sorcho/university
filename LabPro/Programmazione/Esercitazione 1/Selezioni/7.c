#include <stdio.h>

int main(){
	int a, b, op;

	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);

	printf("1: +\n2: -\n3: *\n4: /\n");

	printf("Inserisci l'operazione che desideri effettuare: ");
	scanf("%d", &op);

	switch(op){
	case 1:
		printf("La somma è: %d\n", a + b);
		break;
	case 2:
		printf("La differenza è: %d\n", a - b);
		break;
	case 3:
		printf("Il prodotto è: %d\n", a * b);
		break;
	case 4:
		printf("Il quoziente è: %d\n", a / b);
		break;
	default:
		printf("Operazione non valida\n");
		break;
	}

	return 0;
}
