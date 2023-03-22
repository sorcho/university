#include <stdio.h>

int main(){
	float raggio, area, perimetro;

	printf("Raggio: ");
	scanf("%f", &raggio);

	area =  3.14 * raggio * raggio;
	perimetro = 3.14 * raggio * 2;

	printf("Area: %f, Perimetro: %f\n", area, perimetro);

	return 0;
}
