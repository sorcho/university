#include <stdio.h>

int main(){
	int a, b, app;

	printf("Inserisci a: ");
	scanf("%d", &a);
	printf("Inserisci b: ");
	scanf("%d", &b);

	printf("a: %d, b: %d\n", a, b);

	app = a;
	a = b;
	b = app;

	printf("a: %d, b: %d\n", a, b);

	return 0;
}