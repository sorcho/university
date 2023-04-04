// base e altezza da tastiera, perimetro e area del rettangolo
#include <stdio.h>

int main(){
	float base, altezza, perimetro, area;

	printf("Base: ");
	scanf("%f", &base);
	printf("Altezza: ");
	scanf("%f", &altezza);

	perimetro = (base * 2) + (altezza * 2);
	area = base * altezza;

	printf("Perimetro: %f, Area: %f\n", perimetro, area);
	return 0;
}
