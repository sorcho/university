#include <stdio.h>

int main(){
	float base, altezza, area;

	printf("Base: ");
	scanf("%f", &base);
	printf("Altezza: ");
	scanf("%f", &altezza);

	area = (base * altezza) / 2;

	printf("Area: %f\n", area);

	return 0;
}
